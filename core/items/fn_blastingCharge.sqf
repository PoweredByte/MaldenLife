#include "..\..\script_macros.hpp"
/*
    File: fn_blastingCharge.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private ["_vault","_handle"];
_vault = param [0,ObjNull,[ObjNull]];

if (isNull _vault) exitWith {}; //Bad object
if (typeOf _vault != "Land_CargoBox_V1_F") exitWith {hint localize "STR_ISTR_Blast_VaultOnly"};
if (_vault getVariable ["chargeplaced",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyPlaced"};
if (_vault getVariable ["safe_open",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyOpen"};
if (west countSide playableUnits < (LIFE_SETTINGS(getNumber,"minimum_cops"))) exitWith {
     hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"minimum_cops"))];
};

private _vaultHouse = [[["Malden", "Land_Cargo_House_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [9716.94,5916.54,0.00644493];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _pos = [[["Malden", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

if ((nearestObject [_pos,_vaultHouse]) getVariable ["locked",true]) exitWith {hint localize "STR_ISTR_Blast_Exploit"};
if (!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

_vault setVariable ["chargeplaced",true,true];

any=
[
  [
  ["Ein Bankraub wurde gestartet!","<t align='center'>%1</t></br>"],
  ["Wenn sie Verhandeln wollen Kontaktieren sie die Polizei!","<t align='center'>%1</t></br>"],
  ["Alle Unbeteiligten dürfen dass Gebiet in ein einem Radius von 2km nicht Betreten!","<t align='center'>%1</t></br>"]
  ]
] spawn BIS_fnc_typeText;



[0,"STR_ISTR_Blast_Placed",true,[]] remoteExecCall ["life_fnc_broadcast",west];
hint localize "STR_ISTR_Blast_KeepOff";

[] remoteExec ["life_fnc_demoChargeTimer",[west,player]];
[] remoteExec ["TON_fnc_handleBlastingCharge",2];
