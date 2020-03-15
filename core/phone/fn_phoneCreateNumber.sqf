#include "..\..\script_macros.hpp"
/*
	File: fn_phoneCreateNumber.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_number", "_configNumber", "_countNumber", "_numberStart", "_numberEnd", "_numberDone"];

_number = _this;
_return = "";

_configNumber = getText(missionConfigFile >> "CfgPhone" >> "phone_number");
_countNumber = count _configNumber;

_numberStart = _number select [0, _countNumber]; 
_numberEnd = _number select [_countNumber, ((count _number) - _countNumber)];
_numberDone = format["%1/%2", _numberStart, _numberEnd];

_return = _numberDone;
_return;