/*
Author : Brizi Jaeger
Created : 31.03.2017
Filename : fn_fahrzeugfeature.sqf
Beschreibung : Macht dem Fahrzeug Schaden etc.
English : Damage the car.
*/

private ["_action"];

#include "..\..\script_macros.hpp"
if (life_action_inUse) then {};
if(!(vehicle player == player)) then {hint format["Eigensicherung geht vor %1, selbstmord kannst du dir abschminken.",name player]};

life_action_inUse = true;
_action = [
 format ["Den Motor des Fahrzeug´s zerstören?"],
 "Fahrzeuginteraktion",
 localize "STR_Global_Yes",
 localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
 closeDialog 0;
 [false,"hammer",1] call life_fnc_handleinv;
 [cursorTarget,"hammer",50,1] remoteExec ["life_fnc_say3D",0];
 player playMove "AwopPercMstpSgthWnonDnon_throw";
 [0,"%1 zerstört gerade ein Fahrzeug mit einem Hammer!",true,[profileName]] remoteExecCall ["life_fnc_broadcast",west];
 sleep 2;
 player playMove "AwopPercMstpSgthWnonDnon_throw";
 sleep 2;
 player playMove "AwopPercMstpSgthWnonDnon_throw";
 sleep 2;
 player playMove "AwopPercMstpSgthWnonDnon_throw";
 sleep 3;
 cursorTarget setHitPointDamage ["HitEngine", 1.0];
			// cursorTarget setHitPointDamage ["HitLFWheel", 1.0];
			// cursorTarget setHitPointDamage ["HitLF2Wheel", 1.0];
			// cursorTarget setHitPointDamage ["HitRFWheel", 1.0];
			// cursorTarget setHitPointDamage ["HitRF2Wheel", 1.0];
 sleep 1;
  [cursorTarget,"alarmanlage",50,1] remoteExec ["life_fnc_say3D",0];
 [getPlayerUID player,profileName,"11"] remoteExecCall ["life_fnc_wantedAdd",2];
 life_action_inUse = false;
} else {
 hint "Sei froh! Wende dich lieber an die Polizei.";
 closeDialog 0;
 life_action_inUse = false;
};
