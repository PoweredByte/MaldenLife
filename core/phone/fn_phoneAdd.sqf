#include "..\..\script_macros.hpp"
/*
	File: fn_phoneAdd.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_number", "_name", "_phoneNumbers"];

_phoneNumbers = profileNamespace getVariable ["phone_Numbers", []];

disableSerialization;

_display 		= findDisplay 987654;
_numberField 	= _display displayCtrl 9876544;
_nameField 		= _display displayCtrl 9876545;

_number = ctrlText _numberField;
_name = ctrlText _nameField;

_numberDone = _number call life_fnc_phoneCreateNumber;

_minNumber 	= (count (getText(missionConfigFile >> "CfgPhone" >> "phone_number")));
_maxNumber 	= (8 + _minNumber);
_minName 	= (getArray(missionConfigFile >> "CfgPhone" >> "phone_maxMinNameLength") select 0);
_maxName 	= (getArray(missionConfigFile >> "CfgPhone" >> "phone_maxMinNameLength") select 1);

if(count _name < _minNumber) exitWith {hint "Der eingegebene Name darf nicht kürzer als 4 Zeichen sein!";};
if(count _number < _minName) exitWith {hint "Die eingegebene Nummer darf nicht kürzer als 6 Ziffern sein!";};
if(count _name > _maxName) exitWith {hint "Der eingegebene Name darf nicht länger als 20 Zeichen sein!";};
if(count _number > _maxNumber) exitWith {hint "Die eingegebene Nummer darf nicht länger als 20 Ziffern sein!";};

_numberByte = toArray(_number);
_nameByte = toArray(_name);
_numberAllowed = toArray("0123456789");
_nameAllowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
_badNumber = false;
_badName = false;

{if(!(_x in _numberAllowed)) exitWith {_badNumber = true;};} foreach _numberByte;
{if(!(_x in _nameAllowed)) exitWith {_badName = true;};} foreach _nameByte;
if(_badNumber) exitWith {hint "Du darfst nur Ziffern in deiner Nummer benutzen!";};
if(_badName) exitWith {hint "Du darfst keine Sonderzeichen sowie Leerzeichen in deinem Namen benutzen!";};

_extraChannel = [];
{
	_extraChannel pushBack (_x select 1);
} forEach (getArray(missionConfigFile >> "CfgPhone" >> "phone_extraChannel"));

if(_number in _extraChannel) exitWith {hint "Du kannst keine Nummern von vorhandenen Leitungen hinzufügen!";};
if(_number isEqualTo life_phone_number) exitWith {hint "Du kannst nicht deine eigenen Telefonnummer abspeichern!";};

_isNumber = false;
_isName = false;

{
	_userName = _x select 0;
	_userNumber = _x select 1;
	
	if(_number isEqualTo _userNumber) exitWith {_isNumber = true};
	if(_name isEqualTo _userName) exitWith {_isName = true;};
} forEach _phoneNumbers;

if(_isNumber) exitWith {hint format["Die Nummer (%1) ist bereits in deiner Telefonbuchliste!", _numberDone]};
if(_isName) exitWith {hint format["Der Name (%1) ist bereits in deiner Telefonbuchliste!", _name]};

_isOnline = false;
{
	_playerNumber = _x getVariable "phone_ownNumber";
	if(_playerNumber isEqualTo _number) exitWith {
		_isOnline = true;
	};
} forEach allPlayers;

if(!_isOnline) exitWith {hint format["Der Spieler mit der Telefonnummer (%1) ist zur Zeit nicht Online oder Sie wurde falsch eingetippt!", _numberDone]};

_phoneNumbers pushBack [_name, _number, 0];
profileNamespace setVariable ["phone_Numbers", _phoneNumbers];
saveProfileNamespace;

hint format["Du hast erfolgreich die Nummer (%2) mit dem Namen (%1) zu deiner Telefonbuchliste hinzugefügt.", _name, _numberDone];

call life_fnc_phoneRefreshList;