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
if (isNil {_vehicle getVariable "siren3"}) exitWith {};

if (playerSide isEqualTo west) then {

    for "_i" from 0 to 1 step 0 do {
        if (!(_vehicle getVariable "siren3")) exitWith {};
       if (count crew _vehicle isEqualTo 0) then {_vehicle setVariable ["siren1",false,true]};
       if (!alive _vehicle) exitWith {};
       if (isNull _vehicle) exitWith {};
      _vehicle say3D ["siren3",250,1]; //Class name specified in description.ext, max distance & pitch
      sleep 7;//Exactly matches the length of the audio file.
      if (!(_vehicle getVariable "siren3")) exitWith {};
      };
    } else {

    for "_i" from 0 to 1 step 0 do {
        if (!(_vehicle getVariable "siren3")) exitWith {};
       if (count crew _vehicle isEqualTo 0) then {_vehicle setVariable ["siren3",false,true]};
       if (!alive _vehicle) exitWith {};
       if (isNull _vehicle) exitWith {};
      _vehicle say3D ["med3",75,1]; //Class name specified in description.ext, max distance & pitch
      sleep 4.05;//Exactly matches the length of the audio file.
      if (!(_vehicle getVariable "siren3")) exitWith {};
	};
};