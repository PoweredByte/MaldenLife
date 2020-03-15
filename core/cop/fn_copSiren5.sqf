#include "..\..\script_macros.hpp"
/*
    File: fn_copsiren1.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the cop siren1 sound for other players.
*/
private ["_vehicle"];
_vehicle = param [0,objNull,[objNull]];

if (isNull _vehicle) exitWith {};
if (isNil {_vehicle getVariable "siren5"}) exitWith {};

for "_i" from 0 to 1 step 0 do {
    if (!(_vehicle getVariable "siren5")) exitWith {};
    if (count crew _vehicle isEqualTo 0) then {_vehicle setVariable ["siren5",false,true]};
    if (!alive _vehicle) exitWith {};
    if (isNull _vehicle) exitWith {};
    _vehicle say3D ["siren5",250,1]; //Class name specified in description.ext, max distance & pitch
    sleep 4;//Exactly matches the length of the audio file.
    if (!(_vehicle getVariable "siren5")) exitWith {};
};
