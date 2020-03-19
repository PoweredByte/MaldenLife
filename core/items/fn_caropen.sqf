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
 life_action_inUse = true;
 closeDialog 0;
 _upp = "Breche Fahrzeug auf!"
 //Setup our progress bar.
 disableSerialization;
 "progressBar" cutRsc ["life_progress","PLAIN"];
 _ui = uiNamespace getVariable "life_progress";
 _progress = _ui displayCtrl 38201;
 _pgText = _ui displayCtrl 38202;
 _pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
 _progress progressSetPosition 0.01;
 _cP = 0.01;
 [_player,"hammer",50,1] remoteExec ["life_fnc_say3D",0];
 for "_i" from 0 to 1 step 0 do {
     if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
         [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
         player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
         player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
     };

     uiSleep 0.12;
     _cP = _cP + 0.01;
     _progress progressSetPosition _cP;
     _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
     if (_cP >= 1) exitWith {};
     if (!alive player) exitWith {};
     if !(isNull objectParent player) exitWith {};
     if (life_interrupted) exitWith {};
 };
 "progressBar" cutText ["","PLAIN"];
 player playActionNow "stop";
 _player = player;
 if (player distance (_this select 0) > 5) exitWith {life_action_inUse = false; titleText["Du hast dich entfernt!","PLAIN"]};
 cursorTarget setVehicleLock "UNLOCKED";
 _veh = cursorTarget;
 life_action_inUse = false;
} else {
 hint "Biste wohl ein Angsthase?";
 closeDialog 0;
 life_action_inUse = false;
};
