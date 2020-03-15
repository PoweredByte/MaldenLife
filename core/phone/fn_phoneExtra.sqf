#include "..\..\script_macros.hpp"
/*
	File: fn_phoneExtra.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_extraChannel", "_canCallOwn", "_selectedRow"];

_extraChannel   = getArray(missionConfigFile >> "CfgPhone" >> "phone_extraChannel");
_canCallOwn 	= getNumber(missionConfigFile >> "CfgPhone" >> "phone_canCallOwnChannel");

disableSerialization;

_display 		= findDisplay 987654;
_numbers 		= _display displayCtrl 9876541;

_selectedRow = _this;

_index 	= _numbers lnbValue [_selectedRow, 0];
_info 	= _extraChannel select _index;

_name	= _info select 0;
_number = _info select 1;
_slot 	= _info select 2;
_color 	= _info select 3;

_side = sideEmpty;

{
	if(str(_x) isEqualTo _slot) exitWith {
		_side = side _x;
	};
} forEach playableUnits;

if((_side isEqualTo playerSide) && (_canCallOwn isEqualTo 0)) exitWith {hint "Du kannst nicht bei deiner eigenen Leitstelle anrufen!";};
if(life_phone_mobileActive) exitWith {hint "Du bist bereits in einem Anruf!";};

closeDialog 0;

_busyCounter = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_busyTime"));
_ringCounter = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_ringTime"));

player setVariable ["phone_callStop", false, true];
player setVariable ["phone_isCalling", true, true];
life_phone_sound = true;

true spawn life_fnc_phoneMobileEffect;
"calltone" spawn life_fnc_phonePlaySound;

waitUntil{life_phone_mobileActive};

_mobileDisplay 	= uiNamespace getVariable ["life_mobilephone_dialog", displayNull];
_displayText   	= _mobileDisplay displayCtrl 98761;
_leftText		= _mobileDisplay displayCtrl 98762;
_rightText		= _mobileDisplay displayCtrl 98763;

_rightText ctrlSetStructuredText parseText format["<t align='center' size='0.6'>%1<br/>Abbrechen</t>", getText(missionConfigFile >> "CfgPhone" >> "phone_keyCodeCancelName")];

life_phone_keyHandler = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	_ctrl = _this select 0;
	_code = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	
	_cancelKey = getNumber(missionConfigFile >> "CfgPhone" >> "phone_keyCodeCancel");
	
	if(_code isEqualTo _cancelKey) then {
		if(!_shift && !_ctrlKey && !_alt) then {
			player setVariable ["phone_callStop", true, true];
			(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];
		};
	};
	
	false;
}];

_user = objNull;
_compile = call compile format["%1", _slot];

if(!isNil "_compile") then {
	_user = _compile;
};

_isCalling = false;
_isBlocked = false;
_hasFlymode = false;

if(!isNull _user) then {
	_isCalling = _user getVariable ["phone_isCalling", false];
	_block = _user getVariable [format["phone_isBlocked_%1", life_phone_number], 0];
	_hasFlymode = _user getVariable ["phone_flymode", false];
	if(_block isEqualTo 1) then {_isBlocked = true;};
	
	if(!_isBlocked && !_hasFlymode) then {
		[player, life_phone_number, _index] remoteExec ["life_fnc_phoneAddCallExtra", _user];
	};
};

_ringtoneTime = 0;
for "_i" from 0 to _ringCounter do {
	_displayText ctrlSetStructuredText parseText format["<t align='center' size='0.9'>
	Rufe %1 an...<br/>
	%2<br/>
	<br/>
	%3
	</t>", _name, _number, [_ringtoneTime, "MM:SS"] call BIS_fnc_secondsToString];
	
	if(_i isEqualTo _busyCounter && (isNull _user || _isCalling || _isBlocked || _hasFlymode)) exitWith {};
	if(!isNull _user && _user getVariable ["phone_callCanceled", false]) exitWith {};
	if(!isNull _user && _user getVariable ["phone_callAccepted", false]) exitWith {};
	if(!isNull _user && !alive _user) exitWith {};
	if(!(_i <= _busyCounter) && isNull _user) exitWith {};
	if(player getVariable ["phone_callStop", false] || !alive player) exitWith {};
	
	sleep 1;
	_ringtoneTime = _ringtoneTime + 1;
};

life_phone_sound = false;
"stop" call life_fnc_phonePlaySound;

if(isNull _user && _ringtoneTime isEqualTo _busyCounter) exitWith {[_user, "Die angerufene Leitung ist zur Zeit nicht erreichbar!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _hasFlymode) exitWith {[_user, "Die angerufene Leitung hat Flugmodus eingeschaltet!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _isBlocked) exitWith {[_user, "Die angerufene Leitung hat dich blockiert!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _isCalling) exitWith {[_user, "Die angerufene Leitung ist bereits in einem Telefonat!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _user getVariable ["phone_callCanceled", false]) exitWith {[_user, "Die angerufene Leitung hat den Anruf abgelehnt!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && !(_user getVariable ["phone_callAccepted", false])) exitWith {[_user, "Die angerufene Leitung hat nicht auf den Anruf reagiert!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && !alive _user) exitWith {[_user, "Die angerufene Leitung ist zur Zeit nicht erreichbar!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(player getVariable ["phone_callStop", false] || !alive player) exitWith {[_user, "Du hast das Telefonat beendet!", "normal"] spawn life_fnc_phoneSetPlayer;};

_phoneTime = 0;
for "_i" from 0 to 1 step 0 do {
	_displayText ctrlSetStructuredText parseText format["<t align='center' size='0.9'>
	Telefonat mit %1<br/>
	%2<br/>
	<br/>
	%3
	</t>", _name, _number, [_phoneTime, "MM:SS"] call BIS_fnc_secondsToString];
	sleep 1;
	_phoneTime = _phoneTime + 1;
	
	if(!alive _user) exitWith {};
	if(_user getVariable ["phone_callCanceled", false]) exitWith {};
	if(player getVariable ["phone_callStop", false] || !alive player) exitWith {};
	if(!(_user in allPlayers)) exitWith {};
};

(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];

if(!(_user in allPlayers)) exitWith {[_user, "Die angerufenen Person ist nicht mehr erreichbar!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!alive _user) exitWith {[_user, "Die angerufenen Leitung ist nicht mehr erreichbar!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(_user getVariable ["phone_callCanceled", false]) exitWith {[_user, "Das Telefonat wurde beendet!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(player getVariable ["phone_callStop", false] || !alive player) exitWith {[_user, "Du hast das Telefonat beendet!", "normal"] spawn life_fnc_phoneSetPlayer;};