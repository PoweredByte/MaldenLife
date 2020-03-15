#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

_originalDamage = if (_part == "") then {damage _unit} else {_unit getHit _part}; 

if (_projectile in ["mini_Grenade"]) then { 
 _damage = false; 
 };
 
//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source in [west,independent,civilian,east] && playerSide in [west,independent,civilian,east]) then {
                _damage = _originalDamage;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 35;
                    if (_projectile == "B_556x45_dual") then {_distance = 100;};
                    if (_unit distance _source < _distance) then {
                        if !(isNull objectParent player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };
            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = _originalDamage;
            };
        };
	if (((vehicle _source isKindOf "Ship") OR ( vehicle _source isKindOf "Air") OR (vehicle _source isKindOf "LandVehicle")) AND (_projectile == "")) then {
    _unit allowDamage false;
    _unit setVariable ["life_fnc_allowDamage", False];
    _unit spawn {
        sleep 2;
        _this setVariable ["life_fnc_allowDamage", True];
        _this allowDamage true;
			};
		};	
    };
};

[] spawn life_fnc_hudUpdate;
_damage;