#include "..\..\script_macros.hpp"
/*

	File: fn_repairSystem.sqf
	Author: ToxicRageTv

*/
[] spawn {
	
	if !(vehicle player isEqualTo player) exitWith {hint "Get out of your vehicle";};
	
	private _dammagedObjects = 0;
	private _payout = 0;

	private _side = switch (playerSide) do {
		case west: {"Cop"};
		case independent: {"Medic"};
		case east: {"Adac"};
		default {"Civilian"};
	};	

	private _repairReward = getNumber(missionConfigFile >> "Toxic_Repair_Config" >> _side >> "Repair_Reward");
	private _cooldown = getNumber(missionConfigFile >> "Toxic_Repair_Config" >> _side >> "Cooldown");
	private _cooldownTime = getNumber(missionConfigFile >> "Toxic_Repair_Config" >> _side >> "Cooldown_Time");

	//
	if (playerSide isEqualTo civilian) then {
	_adac = (east countSide playableUnits);
	if(_adac >= 1 ) exitWith{["Das ist der Job der Mechaniker!","ZionHost-System","red",false] call MSG_fnc_handle;};
	};
	//

	if (life_cannotRepair) exitWith {hint format ["You can only repair every %1 seconds",_cooldownTime];};
	
	life_action_inUse = true;
	_displayName = "Nearby Objects";
	_upp = format [localize "STR_NOTF_Repairing",_displayName];

	//Setup our progress bar.
	disableSerialization;
	"progressBar" cutRsc ["life_progress","PLAIN"];
	_ui = uiNamespace getVariable "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0.01;

	for "_i" from 0 to 1 step 0 do {
		if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
			[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
			player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};

		uiSleep 0.27;
		_cP = _cP + 0.03;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if (_cP >= 1) exitWith {};
		if (!alive player) exitWith {};
		if !(isNull objectParent player) exitWith {};
		if (life_interrupted) exitWith {};
	};

	life_action_inUse = false;
	"progressBar" cutText ["","PLAIN"];
	player playActionNow "stop";
	if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
	_nearestObject = nearestObjects [player, [], 10];
	{
		_damage = getDammage _x;
		if ((_damage > 0.1) && !(_x isKindOf "Man") && !(_x isKindOf "Car") && !(_x isKindOf "Air") && !(_x isKindOf "Ship")) then {
			_x setDamage 0;
			_dammagedObjects = _dammagedObjects + 1;
		};
	} forEach _nearestObject;
	_payout = _dammagedObjects * _repairReward;
	CASH = CASH + _payout;
	hint format ["You Recived $%1 For Reparing %2 Object(s)",_payout,_dammagedObjects];
	[0] call SOCK_fnc_updatePartial;
	if (_cooldown isEqualTo 1) then {
		life_cannotRepair = true;
		while {_cooldownTime > 0} do {
			sleep 1;
			_cooldownTime = _cooldownTime - 1;
		};
		waitUntil {_cooldownTime <= 0};
		life_cannotRepair = false;
	};
};
[] call life_fnc_hudUpdate;