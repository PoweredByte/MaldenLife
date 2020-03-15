#include "..\..\script_macros.hpp"
/*
    File: fn_pulloutAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls civilians out of a car if it's stopped.
*/
private ["_crew"];
_crew = crew cursorObject;
_curTarget = param [0,ObjNull,[ObjNull]];
_vehicle = cursorTarget;
_adac = (east countSide playableUnits);
    if (playerSide in [west,independent,civilian]) then {
		if(_adac > 1 && locked _vehicle isEqualTo 1 ) exitWith {["Du kannst keine Person aus einem abgeschlossenen Fahrzeug ziehen!, rufe einen Mechatroniker","ZionHost-System","red",false] call MSG_fnc_handle;};
	};
	
//SICHERHEITSABFRAGE
if (speed _curTarget > 1) exitWith {["Das Fahrzeug bewegt sich!","ZionHost-System","red",false] call MSG_fnc_handle;};
if (locked _curTarget isEqualTo 2) exitWith {["Du kannst keine Person aus einem abgeschlossenen Fahrzeug ziehen!","ZionHost-System","red",false] call MSG_fnc_handle;};
//SICHERHEITSABFRAGE
{
        _x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
        [_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
//    };
} forEach _crew;
