#include "..\..\script_macros.hpp"
/*
	File: fn_phonePlaySound.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_sound"];

if(!(profileNamespace getVariable ['phone_sound', false])) exitWith {};

_sound = _this;

switch (_sound) do {
	case "stop": {
		_sound = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
		deleteVehicle _sound;
	};

	case "busytone": {
		"stop" call life_fnc_phonePlaySound;
	
		playSound (getText(missionConfigFile >> "CfgPhone" >> "phone_busyTone"));
		_sound = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
		sleep (getNumber(missionConfigFile >> "CfgPhone" >> "phone_busyTime"));
		deleteVehicle _sound;

		"hangup" call life_fnc_phonePlaySound;
	};
	
	case "ringtone": {
		"stop" call life_fnc_phonePlaySound;
	
		_ringtones = getArray(missionConfigFile >> "CfgPhone" >> "phone_ringTones");
		_ringtone = profileNamespace getVariable ["phone_ringtone", ((_ringtones select 0) select 1)];
		
		for "_i" from 0 to (getNumber(missionConfigFile >> "CfgPhone" >> "phone_ringTime")) do {
			if(isNull (ASLToAGL [0,0,0] nearestObject "#soundonvehicle")) then {
				playSound _ringtone;
			};
			sleep 1;

			if(!life_phone_sound) exitWith {};
		};
		
		"stop" call life_fnc_phonePlaySound;
	};
	
	case "hanguptone": {
		"stop" call life_fnc_phonePlaySound;
		playSound (getText(missionConfigFile >> "CfgPhone" >> "phone_hangupTone"));
	};
	
	case "calltone": {
		"stop" call life_fnc_phonePlaySound;
		
		for "_i" from 0 to (getNumber(missionConfigFile >> "CfgPhone" >> "phone_ringTime")) do {
			if(isNull (ASLToAGL [0,0,0] nearestObject "#soundonvehicle")) then {
				playSound (getText(missionConfigFile >> "CfgPhone" >> "phone_callTone"));
			};
			sleep 1;

			if(!life_phone_sound) exitWith {};
		};
		
		"stop" call life_fnc_phonePlaySound;
	};
	
};