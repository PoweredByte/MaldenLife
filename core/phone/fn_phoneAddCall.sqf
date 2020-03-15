#include "..\..\script_macros.hpp"
/*
	File: fn_phoneAddCall.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_player", "_number", "_ringCounter", "_phoneNumbers"];

_player = _this select 0;
_number = _this select 1;
_ringCounter = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_ringTime"));
_phoneNumbers = profileNamespace getVariable ["phone_Numbers", []];

player setVariable ["phone_callCanceled", false, true];
player setVariable ["phone_callAccepted", false, true];
player setVariable ["phone_isCalling", true, true];
life_phone_sound = true;

"ringtone" spawn life_fnc_phonePlaySound;
true spawn life_fnc_phoneMobileEffect;

waitUntil{life_phone_mobileActive};

disableSerialization;

_mobileDisplay 	= uiNamespace getVariable ["life_mobilephone_dialog", displayNull];
_displayText   	= _mobileDisplay displayCtrl 98761;
_leftText		= _mobileDisplay displayCtrl 98762;
_rightText		= _mobileDisplay displayCtrl 98763;

_leftText ctrlSetStructuredText parseText format["<t align='center' size='0.6'>- %1 -<br/>Annehmen</t>", getText(missionConfigFile >> "CfgPhone" >> "phone_keyCodeAcceptName")];
_rightText ctrlSetStructuredText parseText format["<t align='center' size='0.6'>- %1 -<br/>Abbrechen</t>", getText(missionConfigFile >> "CfgPhone" >> "phone_keyCodeCancelName")];

life_phone_keyHandler = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	_ctrl = _this select 0;
	_code = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	
	_acceptKey = getNumber(missionConfigFile >> "CfgPhone" >> "phone_keyCodeAccept");
	_cancelKey = getNumber(missionConfigFile >> "CfgPhone" >> "phone_keyCodeCancel");
	
	_mobileDisplay 	= uiNamespace getVariable ["life_mobilephone_dialog", displayNull];
	_leftText		= _mobileDisplay displayCtrl 98762;
	
	switch (_code) do {
		case _acceptKey: {
			if(!_shift && !_ctrlKey && !_alt && (!(player getVariable ["phone_callAccepted", false]))) then {
				player setVariable ["phone_callAccepted", true, true];
				_leftText ctrlSetStructuredText parseText "";
				hint "Du hast den Anruf angenommen!";
			};
		};
		
		case _cancelKey: {
			if(!_shift && !_ctrlKey && !_alt) then {
				player setVariable ["phone_callCanceled", true, true];
				(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];
			};
		};
	};
	
	false;
}];

_isNotInList = true;
_name = "";

{
	if((_x select 1) isEqualTo _number) exitWith {
		_name = (_x select 0);
		_isNotInList = false;
	};
} forEach _phoneNumbers;

if(_isNotInList) then {
	_name = _number call life_fnc_phoneCreateNumber;
};

_ringtoneTime = 0;
for "_i" from 0 to _ringCounter do {
	_displayText ctrlSetStructuredText parseText format["<t align='center' size='1.1'>
	Anruf von %1 ...<br/>
	<br/>
	%2
	</t>", _name, [_ringtoneTime, "MM:SS"] call BIS_fnc_secondsToString];
	sleep 1;
	_ringtoneTime = _ringtoneTime + 1;
	
	if(player getVariable ["phone_callCanceled", false]) exitWith {};
	if(player getVariable ["phone_callAccepted", false]) exitWith {};
	if(!alive player) exitWith {};
	if(_player getVariable ["phone_callStop", false] || !alive _player) exitWith {};
};

life_phone_sound = false;
"stop" call life_fnc_phonePlaySound;

if(player getVariable ["phone_callCanceled", false]) exitWith {[_player, "Du hast den Anruf abgebrochen!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(!(player getVariable ["phone_callAccepted", false])) exitWith {[_player, "Du hast nicht auf den Anruf reagiert!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(!alive player) exitWith {[_player, "Das Telefonat wurde beendet!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(_player getVariable ["phone_callStop", false] || !alive _player) exitWith {[_player, "Dein Gegenüber hat das Telefonat abgebrochen oder ist nicht mehr erreichbar!", "normal"] spawn life_fnc_phoneSetPlayer;};

[true, _player, player] remoteExec ["ton_fnc_phoneManager", 2];

_maxTime = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_maxTime") * 60);
_phoneTime = 0;

for "_i" from 0 to 1 step 0 do {
	_displayText ctrlSetStructuredText parseText format["<t align='center' size='1.1'>
	Telefonat mit %1 ...<br/>
	<br/>
	%2
	</t>", _name, [_phoneTime, "MM:SS"] call BIS_fnc_secondsToString];
	sleep 1;
	_phoneTime = _phoneTime + 1;
	
	if(_phoneTime isEqualTo _maxTime) exitWith {};
	if(!alive player) exitWith {};
	if(player getVariable ["phone_callCanceled", false]) exitWith {};
	if(_player getVariable ["phone_callStop", false] || !alive _player) exitWith {};
	if(!(_player in allPlayers)) exitWith {};
};

(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];
[getPlayerUID player, _phoneTime] remoteExec ["ton_fnc_phoneOvertime", 2];

if(!(_player in allPlayers)) exitWith {[_player, "Die angerufenen Person ist nicht mehr erreichbar!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(_phoneTime isEqualTo _maxTime) exitWith {[_player, format["Das Telefonat wurde automatisch nach %1Minuten beendet!", (_maxTime / 60)], "normal"] spawn life_fnc_phoneSetPlayer;};
if(!alive player) exitWith {[_player, "Das Telefonat wurde beendet!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(player getVariable ["phone_callCanceled", false]) exitWith {[_player, "Du hast das Telefonat beendet!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(_player getVariable ["phone_callStop", false] || !alive _player) exitWith {[_player, "Dein Gegenüber hat das Telefonat abgebrochen oder ist nicht mehr erreichbar!", "normal"] spawn life_fnc_phoneSetPlayer;};
