#include "..\..\script_macros.hpp"
/*
	File: fn_phoneBlock.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_phoneNumbers", "_control", "_index"];

_phoneNumbers = profileNamespace getVariable ["phone_Numbers", []];

disableSerialization;

_control = _this select 0;
_index = _this select 1;

_name = _control lnbData [_index, 0];
_number = _control lnbData [_index, 1];

if((_name isEqualTo "SPACER" && _number isEqualTo "SPACER") || (_name isEqualTo "EXTRA" && _number isEqualTo "EXTRA")) exitWith {hint "Bitte wähle eine Nummer aus die du blockieren willst!";};

_numberDone = _number call life_fnc_phoneCreateNumber;

_phoneIndex = -1;
{
	_userName = _x select 0;
	_userNumber = _x select 1;
	
	if(_userName isEqualTo _name && _userNumber isEqualTo _number) exitWith {
		_phoneIndex = _forEachIndex;
	};
} forEach _phoneNumbers;

_userIndex = _phoneNumbers select _phoneIndex;

if((_userIndex select 2) isEqualTo 1) then {
	hint format["Du hast erfolgreich die Nummer (%2) mit dem Namen (%1) freigeschaltet! Sie kann dich nun wieder anrufen!", _name, _numberDone];
	_userIndex set [2, 0];
	player setVariable [format["phone_isBlocked_%1", _number], 0, true];
} else {
	hint format["Du hast erfolgreich die Nummer (%2) mit dem Namen (%1) gesperrt! Sie kann dich nun nicht mehr anrufen!", _name, _numberDone];
	_userIndex set [2, 1];
	player setVariable [format["phone_isBlocked_%1", _number], 1, true];
};

_phoneNumbers set [_phoneIndex, _userIndex];

profileNamespace setVariable ["phone_Numbers", _phoneNumbers];
saveProfileNamespace;

call life_fnc_phoneRefreshList;