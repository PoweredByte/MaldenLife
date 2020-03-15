#include "..\..\script_macros.hpp"
/*
	File: fn_phoneFindPlayer.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_number"];

_number = _this;
_return = objNull;

{
	_var = _x getVariable ["phone_ownNumber", 0];
	if(_var isEqualTo _number) exitWith {_return = _x;};
} forEach allPlayers;

_return;