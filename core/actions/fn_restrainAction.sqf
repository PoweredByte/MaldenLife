#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Restrains the target.
*/
private ["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
//if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
if(!([false,"handcuffs",1] call life_fnc_handleInv)) exitWith { 	["Du besitzt keine Handschellen!","ZionHost-System","red",false] call MSG_fnc_handle; };
[true,"handcuffs",1] call life_fnc_handleInv; 
//Broadcast!

_degrees = getDir player; 
_degreesu = getDir _unit;
_totald = _degrees - _degreesu;

if(_totald >= -90 && _totald < 1 || _totald <= 90 && _totald > -1 || _totald >= 270 || _totald <= -270) then {

_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
 
	} else {
		["Du kannst niemanden von vorne Festnehmen!","ZionHost-Sytem","red",false] call MSG_fnc_handle;
};
