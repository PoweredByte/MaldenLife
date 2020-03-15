#include "..\..\script_macros.hpp"
/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

_damged = 0;
_nearestObjects = nearestObjects [player, [], 15];

private _copRepairing = getNumber(missionConfigFile >> "Toxic_Repair_Config" >> "Cop_Repairing");
private _medicRepairing = getNumber(missionConfigFile >> "Toxic_Repair_Config" >> "Medic_Repairing");
private _civRepairing = getNumber(missionConfigFile >> "Toxic_Repair_Config" >> "Civ_Repairing");

switch (playerSide) do {
    case west: {
        ctrlShow[2011,false];
        ctrlShow[501,false];
	
		if (_copRepairing isEqualTo 1) then {
			{
				_damage = getDammage _x;
				if ((_damage > 0.1) && !(_x isKindOf "Man") && !(_x isKindOf "Car") && !(_x isKindOf "Air") && !(_x isKindOf "Ship")) then {
					_damged = _damged + 1;
				};
			} forEach _nearestObjects;
			if (_damged > 0) then {
				ctrlShow[2409,true];
			} else {
				ctrlShow[500,false];
			};
		} else {
			ctrlShow[500,false];
		};			
    };

    case civilian: {
        ctrlShow[2012,false];
        ctrlShow[500,false];
		if (_civRepairing isEqualTo 1) then {
			{
				_damage = getDammage _x;
				if ((_damage > 0.1) && !(_x isKindOf "Man") && !(_x isKindOf "Car") && !(_x isKindOf "Air") && !(_x isKindOf "Ship")) then {
					_damged = _damged + 1;
				};
			} forEach _nearestObjects;
			if (_damged > 0) then {
				ctrlShow[2409,true];
			} else {
				ctrlShow[501,false];
			};
		} else {
			ctrlShow[501,false];
		};			
    };

    case independent: {
        ctrlShow[2012,false];
        ctrlShow[2011,false];
        ctrlShow[501,false];
		
		if (_medicRepairing isEqualTo 1) then {
			{
				_damage = getDammage _x;
				if ((_damage > 0.1) && !(_x isKindOf "Man") && !(_x isKindOf "Car") && !(_x isKindOf "Air") && !(_x isKindOf "Ship")) then {
					_damged = _damged + 1;
				};
			} forEach _nearestObjects;
			if (_damged > 0) then {
				ctrlShow[2409,true];
			} else {
				ctrlShow[500,false];
			};
		} else {
			ctrlShow[500,false];
		};		
    };

    case east: {
        ctrlShow[2012,false];
        ctrlShow[2011,false];
        ctrlShow[501,false];
		
		if (_medicRepairing isEqualTo 1) then {
			{
				_damage = getDammage _x;
				if ((_damage > 0.1) && !(_x isKindOf "Man") && !(_x isKindOf "Car") && !(_x isKindOf "Air") && !(_x isKindOf "Ship")) then {
					_damged = _damged + 1;
				};
			} forEach _nearestObjects;
			if (_damged > 0) then {
				ctrlShow[2409,true];
			} else {
				ctrlShow[500,false];
			};
		} else {
			ctrlShow[500,false];
		};		
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;