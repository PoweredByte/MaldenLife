#include "..\..\script_macros.hpp"

private["_target","_revivable","_targetName","_ui","_progressBar","_titleText","_cP","_title"];
_target = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
if(isNull _target) exitWith {};

_revivable = _target getVariable ["Revive",false];
if (_revivable) exitWith {};
if(player distance _target > 5) exitWith {};
if(life_action_inUse) exitWith {};
if(player isEqualTo _target) exitWith {};

_title = format[localize "STR_CPR_Progress"];
life_action_inUse = true;

_target setVariable ["Reviving",player,TRUE];
//Setup our progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable ["life_progress",displayNull]; 
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

while {true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep .15;
	_cP = _cP + 0.01;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1) exitWith {};
	if(life_istazed) exitWith {};
	if(life_isknocked) exitWith {};
	if(life_interrupted) exitWith {};
	if((player getVariable ["restrained",false])) exitWith {};
	if(player distance _target > 4) exitWith {_badDistance = true;};
	if(_target getVariable ["Reviving",ObjNull] != player) exitWith {};
	if(player isEqualTo _target) exitWith {};
	if (_revivable) exitWith {};
	if(isNull _target) exitWith {};
};

5 cutText ["","PLAIN"];
player playActionNow "stop";

_target setVariable ["Reviving",NIL,TRUE];

if(!alive player OR life_istazed OR life_isknocked) exitWith {life_action_inUse = false;};
if(_target getVariable ["Revive",FALSE]) exitWith {hint localize "STR_Medic_RevivedRespawned"};
if((player getVariable ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText[localize "STR_Medic_TooFar","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(player isEqualTo _target) exitWith {life_action_inUse = false;};
if (_revivable) exitWith {life_action_inUse = false;};
if(isNull _target) exitWith {life_action_inUse = false;};

life_action_inUse = false;

_break = floor (random 100);

if (_break < 84) exitWith {[_target] spawn life_fnc_cprkit;};

_target setVariable ["Revive",TRUE,TRUE];
[] remoteExecCall ["life_fnc_cprrevived",_target];

sleep .6;
player reveal _target;