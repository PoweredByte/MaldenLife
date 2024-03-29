#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
waitUntil {!(isNull (findDisplay 46))};

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

 if((FETCH_CONST(life_coplevel) < 1) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
 ["NotWhitelisted",false,true] call BIS_fnc_endMission;
 sleep 35;
 };

player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_placeablesInit;
if(FETCH_CONST(life_coplevel) < 23) {
    player setUnitTrait["UAVHacker",true];
};
0 call life_fnc_copcallmanagement;
