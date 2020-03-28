#include "..\script_macros.hpp"
/*
 File: fn_initAdac.sqf
 Author: Bryan "Tonic" Boardwine




 Description:
 Initializes the adac..
*/
private["_end"];
waitUntil {!(isNull (findDisplay 46))};




if ((FETCH_CONST(life_adacLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
 ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
 sleep 35;
};

player setVariable["adacrank",(FETCH_CONST(life_adacLevel)),true];


[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
