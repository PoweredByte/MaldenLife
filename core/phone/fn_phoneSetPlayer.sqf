#include "..\..\script_macros.hpp"
/*
	File: fn_phoneSetPlayer.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_player1", "_hint", "_type", "_busyCounter"];

_player1 = [_this, 0, objNull] call BIS_fnc_param;
_hint = _this select 1;
_type = _this select 2;

_busyCounter = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_busyTime"));

sleep 1.5;

if(!isNull _player1) then {
	_player1 setVariable ["phone_callStop", nil, true];
	_player1 setVariable ["phone_callAccepted", nil, true];
	_player1 setVariable ["phone_callCanceled", nil, true];
	_player1 setVariable ["phone_isCalling", nil, true];
	_player1 setVariable ["phone_channelId", nil, true];
};

if(!isNil{player getVariable "phone_channelId"}) then {
	if(player getVariable ["phone_extraChannel", false]) then {
		[false, player, _player1, player getVariable "phone_channelId"] remoteExec ["ton_fnc_phoneManagerExtra", 2];
	} else {
		[false, player, _player1, player getVariable "phone_channelId"] remoteExec ["ton_fnc_phoneManager", 2];
	};
};

player setVariable ["phone_callStop", nil, true];
player setVariable ["phone_callAccepted", nil, true];
player setVariable ["phone_callCanceled", nil, true];
player setVariable ["phone_isCalling", nil, true];
player setVariable ["phone_channelId", nil, true];

(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];

switch (_type) do {
	case "busy": {
		"busytone" spawn life_fnc_phonePlaySound;
		sleep _busyCounter;	
		false spawn life_fnc_phoneMobileEffect;
		hint _hint;
		life_phone_mobileActive = false;
	};
	
	case "normal": {
		"hanguptone" spawn life_fnc_phonePlaySound;
		false spawn life_fnc_phoneMobileEffect;
		hint _hint;
		life_phone_mobileActive = false;
	};
};