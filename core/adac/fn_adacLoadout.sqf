#include "..\..\script_macros.hpp"
/*
 File: fn_adacLoadout.sqf
 Author: Bryan "Tonic" Boardwine
 Edited by: Kuchenplatte
 Description:
 Loads the medic out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "U_Rangemaster";
player addItem "FirstAidKit";
player addItem "Toolkit";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;