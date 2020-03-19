/*
Author : Brizi Jaeger
Created : 30.03.2017
Filename : fn_schlaghammer.sqf
Beschreibung : Description | Öffnet ein Fahrzeug, man bekommt aber keine Schlüssel!
English : Set Carstatus to unlock, you didnt get keys.
*/

private ["_action"];

#include "..\..\script_macros.hpp"
if (life_action_inUse) exitWith {};

life_action_inUse = true;
_action = [
 format ["Die Scheibe einschlagen?"],
 "Schlaghammer | Menü",
 localize "STR_Global_Yes",
 localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
 closeDialog 0;
 _player = player;
 [_player,"hammer",50,1] remoteExec ["life_fnc_say3D",0];
 if (player distance (_this select 0) > 5) exitWith {life_action_inUse = false; titleText["Du hast dich entfernt!","PLAIN"]};
 cursorTarget setVehicleLock "UNLOCKED";
 _veh = cursorTarget;
 life_action_inUse = false;
} else {
 hint "Biste wohl ein Angsthase?";
 closeDialog 0;
 life_action_inUse = false;
};
