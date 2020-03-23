#include "..\..\script_macros.hpp"
/*
    File: fn_clearVehicleAmmo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Clears the vehicle of ammo types that we don't want.

    Syntax: _vehicle removeMagazinesTurret [magazineName, turretPath]
    Documentation: https://community.bistudio.com/wiki/removeMagazinesTurret
*/
private ["_vehicle","_veh"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _vehicle) exitWith {};
_veh = typeOf _vehicle;

if (_veh isEqualTo "B_Boat_Armed_01_minigun_F") then {
    _vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt",[0]];
};

if (_veh isEqualTo "B_APC_Wheeled_01_cannon_F") then {
    _vehicle removeMagazinesTurret ["60Rnd_40mm_GPR_Tracer_Red_shells",[0]];
    _vehicle removeMagazinesTurret ["40Rnd_40mm_APFSDS_Tracer_Red_shells",[0]];
};

if (_veh isEqualTo "O_Heli_Attack_02_black_F") then {
    _vehicle removeMagazinesTurret ["250Rnd_30mm_APDS_shells",[0]];
    _vehicle removeMagazinesTurret ["8Rnd_LG_scalpel",[0]];
    _vehicle removeMagazinesTurret ["38Rnd_80mm_rockets",[0]];
};

if (_veh isEqualTo "B_Heli_Transport_01_F") then {
    _vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red",[1]];
    _vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red",[2]];
};

if (_veh isEqualTo "O_APC_Wheeled_02_rcws_v2_F") then {
  _vehicle removeMagazinesTurret ["96Rnd_40mm_G_belt",[2]];
  _vehicle removeMagazinesTurret ["200Rnd_127x99_mag_Tracer_Green",[1]];
};

if(_vehicle isEqualTo "I_Heli_light_03_F") then {
  _pylons = ["PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"];
  _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};
  { _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon") } forEach getPylonMagazines _vehicle;
  { _vehicle setPylonLoadout [_forEachIndex + 1, _x, true, _pylonPaths select _forEachIndex] } forEach _pylons;
};
if(_vehicle isEqualTo "B_Heli_Attack_01_F") then {
  _pylons = ["PylonMissile_1Rnd_AAA_missiles","PylonMissile_1Rnd_LG_scalpel","PylonMissile_1Rnd_LG_scalpel","PylonRack_12Rnd_PG_missiles","PylonMissile_1Rnd_AAA_missiles","PylonMissile_1Rnd_AAA_missiles"];
  _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};
  { _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon") } forEach getPylonMagazines _vehicle;
  { _vehicle setPylonLoadout [_forEachIndex + 1, _x, true, _pylonPaths select _forEachIndex] } forEach _pylons;
};
if(_veh isEqualTo "B_Plane_Fighter_01_F") then {
  _pylons = ["PylonRack_Missile_AMRAAM_D_x1","PylonRack_Missile_AMRAAM_D_x1","PylonRack_Bomb_GBU12_x2","PylonRack_Bomb_GBU12_x2","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Bomb_GBU12_x1","PylonMissile_Bomb_GBU12_x1"];
  _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};
  { _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon") } forEach getPylonMagazines _vehicle;
  { _vehicle setPylonLoadout [_forEachIndex + 1, _x, true, _pylonPaths select _forEachIndex] } forEach _pylons;
};
if(_veh isEqualTo "B_UAV_05_F") then {
  _pylons = ["",""];
  _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};
  { _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon") } forEach getPylonMagazines _vehicle;
  { _vehicle setPylonLoadout [_forEachIndex + 1, _x, true, _pylonPaths select _forEachIndex] } forEach _pylons;
};

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;
