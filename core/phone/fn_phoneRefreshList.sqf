#include "..\..\script_macros.hpp"
/*
	File: fn_phoneRefreshList.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_phoneNumbers"];

_phoneNumbers = profileNamespace getVariable ["phone_Numbers", []];
_extraChannel = getArray(missionConfigFile >> "CfgPhone" >> "phone_extraChannel");

disableSerialization;

_display 		= findDisplay 987654;
_numbers 		= _display displayCtrl 9876541;

lnbClear _numbers;

_indexRow = _numbers lnbAddRow ["Name", "Nummer", "Freigegeben"];
_numbers lnbSetData [ [_indexRow, 0], "SPACER"];
_numbers lnbSetData [ [_indexRow, 1], "SPACER"];
_indexRow = _numbers lnbAddRow [""];
_numbers lnbSetData [ [_indexRow, 0], "SPACER"];
_numbers lnbSetData [ [_indexRow, 1], "SPACER"];

{
	_channelName = _x select 0;
	_channelNumber = _x select 1;
	_channelColor = _x select 3;
	
	_indexRow = _numbers lnbAddRow [_channelName, _channelNumber];
	_numbers lnbSetData [ [_indexRow, 0], "EXTRA"];
	_numbers lnbSetData [ [_indexRow, 1], "EXTRA"];
	_numbers lnbSetValue [ [_indexRow, 0], _forEachIndex];
	_numbers lnbSetValue [ [_indexRow, 1], _forEachIndex];
	_numbers lnbSetColor [ [_indexRow, 0], _channelColor];
	_numbers lnbSetColor [ [_indexRow, 1], _channelColor];
} forEach _extraChannel;

_indexRow = _numbers lnbAddRow [""];
_numbers lnbSetData [ [_indexRow, 0], "SPACER"];
_numbers lnbSetData [ [_indexRow, 1], "SPACER"];

if(count _phoneNumbers isEqualTo 0) then {
	_indexRow = _numbers lnbAddRow ["Keine Nummern eingespeichert..."];
	_numbers lnbSetData [ [_indexRow, 0], "SPACER"];
	_numbers lnbSetData [ [_indexRow, 1], "SPACER"];
};

{
	_userName = _x select 0;
	_userNumber = _x select 1;
	_userBlocked = _x select 2;
	
	_userNumberString = _userNumber call life_fnc_phoneCreateNumber;
	
	_indexRow = _numbers lnbAddRow [_userName, _userNumberString];
	_numbers lnbSetData [ [_indexRow, 0], _userName];
	_numbers lnbSetData [ [_indexRow, 1], _userNumber];
	
	if(_userBlocked isEqualTo 0) then {
		_numbers lnbSetPicture [ [_indexRow, 2], "Textures\phoneyes.paa"];
	} else {
		_numbers lnbSetPicture [ [_indexRow, 2], "Textures\phoneno.paa"];
	};
	
} forEach _phoneNumbers;
