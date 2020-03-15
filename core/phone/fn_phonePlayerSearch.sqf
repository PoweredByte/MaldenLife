#include "..\..\script_macros.hpp"
/*
	File: fn_phonePlayerSearch.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_user"];

disableSerialization;

_display 		= findDisplay 987654;
_numbers 		= _display displayCtrl 9876541;

_selectedRow = lnbCurSelRow _numbers;

if(_selectedRow isEqualTo -1) exitWith {hint "Bitte wähle eine Nummer aus die du aus deiner Telefonbuchliste orten willst!";};

_name = _numbers lnbData [_selectedRow, 0];
_number = _numbers lnbData [_selectedRow, 1];

if((_name isEqualTo "SPACER" && _number isEqualTo "SPACER") || (_name isEqualTo "EXTRA" && _number isEqualTo "EXTRA")) exitWith {hint "Bitte wähle eine Nummer aus die du aus deiner Telefonbuchliste orten willst!";};
if(_number isEqualTo life_phone_number) exitWith {hint "Du kannst dich nicht selber orten!";};

_user = _number call life_fnc_phoneFindPlayer;

hint format["%1 wird geortet", _name];
sleep 0.8;
hint format["%1 wird geortet.", _name];
sleep 0.8;
hint format["%1 wird geortet..", _name];
sleep 0.8;
hint format["%1 wird geortet...", _name];
sleep 0.8;
hint format["%1 wird geortet", _name];
sleep 0.8;
hint format["%1 wird geortet.", _name];
sleep 0.8;
hint format["%1 wird geortet..", _name];
sleep 0.8;
hint format["%1 wird geortet...", _name];
sleep 0.8;

if(isNull _user) exitWith {hint "Die Person konnte nicht geortet werden!";};

hint "Die Person konnte geortet werden. Es wurde ein Marker auf den Map erstellt!";

sleep 0.2;

_marker = createMarkerLocal [format["phone_marker_%1", _name], position _user];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal "hd_warning";
_marker setMarkerColorLocal format["Color%1", getText(missionConfigFile >> "CfgPhone" >> "phone_markerColor")];
_marker setMarkerTextLocal format["Position von %1", _name];

_time = getNumber(missionConfigFile >> "CfgPhone" >> "phone_removeMarkerTime") * 60;
sleep _time;

deleteMarkerLocal _marker;