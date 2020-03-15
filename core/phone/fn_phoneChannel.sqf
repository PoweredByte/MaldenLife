#include "..\..\script_macros.hpp"
/*
	File: fn_phoneChannel.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_bool"];

_bool = _this;

if(_bool) then {
	_channel = (player getVariable "phone_channelId") + 5;
	setCurrentChannel _channel;
} else {
	setCurrentChannel 5;
};