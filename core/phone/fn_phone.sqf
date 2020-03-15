#include "..\..\script_macros.hpp"
/*
	File: fn_phone.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_phoneNumbers", "_configNumber", "_sound", "_flymode", "_splitUID", "_splitted", "_number"];

_phoneNumbers	= profileNamespace getVariable ["phone_Numbers", []];
_configNumber 	= getText(missionConfigFile >> "CfgPhone" >> "phone_number");
_flymode 		= profileNamespace getVariable ["phone_flymode", false];

_splitUID 		= (getPlayerUID player) splitString "";
_splitted 		= _splitUID select [9, 8];
_number 		= format["%1%2", _configNumber, (_splitted joinString "")];

player setVariable ["phone_ownNumber", _number, true];
player setVariable ["phone_flymode", _flymode, true];
player setVariable ["phone_extraChannel", nil, true];
player setVariable ["phone_callStop", nil, true];
player setVariable ["phone_callAccepted", nil, true];
player setVariable ["phone_callCanceled", nil, true];
player setVariable ["phone_isCalling", nil, true];
player setVariable ["phone_channelId", nil, true];

life_phone_number = _number;

{
	_number 	= _x select 1;
	_blocked 	= _x select 2;
	player setVariable [format["phone_isBlocked_%1", _number], _blocked, true];
} forEach _phoneNumbers;