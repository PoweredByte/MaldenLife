#include "..\..\script_macros.hpp"
/*
	File: fn_phoneInit.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_number", "_ringtones", "_ringtone", "_sound", "_flymode"];

_ringtones 			= getArray(missionConfigFile >> "CfgPhone" >> "phone_ringTones");
_ringtone 			= profileNamespace getVariable ["phone_ringtone", ((_ringtones select 0) select 1)];
_sound 				= profileNamespace getVariable ["phone_sound", true];
_flymode 			= profileNamespace getVariable ["phone_flymode", false];

createDialog "life_phone_dialog";

disableSerialization;

_display 		= findDisplay 987654;
_numbers 		= _display displayCtrl 9876541;
_ownNumber 		= _display displayCtrl 9876542;
_channel 		= _display displayCtrl 9876543;
_numberField 	= _display displayCtrl 9876544;
_ringtoneBox 	= _display displayCtrl 9876546;
_soundcheck  	= _display displayCtrl 9876547;
_flymodecheck  	= _display displayCtrl 9876548;
_waittime  		= _display displayCtrl 9876549;
_posButton 		= _display displayCtrl 9876550;

//Position Button
if(!(toLower(format["%1", side player]) in getArray(missionConfigFile >> "CfgPhone" >> "phone_canSeePosition"))) then {
	_posButton ctrlShow false;
	_posButton ctrlEnable false;
};

//Numbers
call life_fnc_phoneRefreshList;

//Own number
_numberDone = life_phone_number call life_fnc_phoneCreateNumber;
_ownNumber ctrlSetStructuredText parseText format["<t size='0.3'>&#160;</t><br/><t align='center' size='1.1'>%1&#160;&#160;</t>", _numberDone];

//Channel
_channel ctrlSetStructuredText parseText format["<t size='0.3'>&#160;</t><br/><t align='center' size='1.1'>%1&#160;&#160;</t>", count life_phone_channelList];

//Number Field
_numberField ctrlSetText (getText(missionConfigFile >> "CfgPhone" >> "phone_number"));

//Ringtone
_ringtoneIndex = 0;
{
	_ringName = _x select 0;
	_ringClass = _x select 1;
	
	if(_ringClass isEqualTo _ringtone) then {
		_ringtoneIndex = _forEachIndex;
	};
	
	_index = _ringtoneBox lbAdd _ringName;
	_ringtoneBox lbSetData [_index, _ringClass];
	
} forEach _ringtones;
_ringtoneBox lbSetCurSel _ringtoneIndex;

//Sound
_soundcheck cbSetChecked _sound;

//Flymode
_flymodecheck cbSetChecked _flymode;

//Waittime
0 spawn {
	disableSerialization;
	
	_display 	= findDisplay 987654;
	_waittime  	= _display displayCtrl 9876549;

	for "_i" from 0 to 1 step 0 do {
		_overtime = missionNamespace getVariable [format["phone_overtimeSecs_%1", getPlayerUID player], 0];
		if(_overtime isEqualTo 0) exitWith {_waittime ctrlSetStructuredText parseText"<t size='0.3'>&#160;</t><br/><t align='center' size='1.1'>00:00&#160;&#160;</t>";};
		_waittime ctrlSetStructuredText parseText format["<t size='0.3'>&#160;</t><br/><t align='center' size='1.1'>%1&#160;&#160;</t>", [_overtime, "MM:SS"] call BIS_fnc_secondsToString];
		sleep 0.5;
	};
};