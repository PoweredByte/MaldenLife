#include "..\..\script_macros.hpp"
/*
	File: fn_phoneMobileEffect.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_bool", "_configPosBottom", "_xPos", "_yPos", "_step"];

_bool = _this;

_configPosBottom 	= getNumber(missionConfigFile >> "CfgPhone" >> "phone_mobilePosYBottom");
_xPos 				= getNumber(missionConfigFile >> "life_mobilephone_dialog" >> "controls" >> "Phone" >> "x");
_yPos 				= getNumber(missionConfigFile >> "life_mobilephone_dialog" >> "controls" >> "Phone" >> "y");
_step 				= ((_configPosBottom * safezoneH + safezoneY) - _yPos) / 100;

disableSerialization;

if(_bool) then {
	"mobileDialog" cutRsc ["life_mobilephone_dialog", "PLAIN", -1, true];
	
	_display		= uiNamespace getVariable ["life_mobilephone_dialog",displayNull];
	_phone 			= _display displayCtrl 98764;
	_displayText   	= _display displayCtrl 98761;
	_leftText		= _display displayCtrl 98762;
	_rightText		= _display displayCtrl 98763;
	
	_phone ctrlSetPosition [_xPos, (_configPosBottom * safezoneH + safezoneY)];
	_phone ctrlCommit 0;
	
	_pos = (_configPosBottom * safezoneH + safezoneY);
	_fade = 1;
	
	for "_i" from 0 to 100 do {
		_pos = _pos - _step;
		_fade = _fade - 0.01;
		
		_phone ctrlSetPosition [_xPos, _pos];
		_phone ctrlSetFade _fade;
		_phone ctrlCommit 0;
		
		if(_i isEqualTo 100) exitWith {life_phone_mobileActive = true;};
		
		sleep 0.001;
	};
	
} else {
	_display		= uiNamespace getVariable ["life_mobilephone_dialog",displayNull];
	_phone 			= _display displayCtrl 98764;
	_displayText   	= _display displayCtrl 98761;
	_leftText		= _display displayCtrl 98762;
	_rightText		= _display displayCtrl 98763;

	_rightText ctrlSetStructuredText parseText "";
	_leftText ctrlSetStructuredText parseText "";
	_displayText ctrlSetStructuredText parseText "";
	
	_pos = _yPos;
	_fade = 0;
	
	for "_i" from 0 to 100 do {
		_pos = _pos + _step;
		_fade = _fade + 0.01;

		_phone ctrlSetPosition [_xPos, _pos];
		_phone ctrlSetFade _fade;
		_phone ctrlCommit 0;
		
		if(_i isEqualTo 100) exitWith {"mobileDialog" cutFadeOut 0;};
		
		sleep 0.001;
	};
};