#include "..\..\script_macros.hpp"
/*

			PROPERTY OF THE COMPANY: ZIONHOST UG
			
		USING THIS WITHOUT DIRECT ACCESS IS FORBIDDEN
			
*/
private ["_vehicle", "_sendUnit", "_engineTimeout", "_defaultAttenuation", "_playerSide", "_classname", "_lights", "_lightObjects"];
_vehicle = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
H = [_this, 1, ObjNull, [ObjNull]] call BIS_fnc_param;
if (isNull _vehicle || isNull _sendUnit) exitWith {};




_engineTimeout = getNumber(missionConfigFile >> "emergencyLightsConfig" >> "engineTimeout");
_defaultAttenuation = getArray(missionConfigFile >> "emergencyLightsConfig" >> "defaultAttenuation");
_playerSide = toLower (str side _sendUnit);
_classname = typeOf _vehicle;




_lightObjects = [];
{
 private ["_status", "_color", "_ambientColor", "_brightnessMinimum", "_brightnessMaximum", "_position", "_attenuation", "_phaseTime", "_timeout"];
 _status = getNumber(_x >> "status");
 _color = getArray(_x >> "color");
 _ambientColor = getArray(_x >> "ambientColor");
 _brightnessMinimum = getNumber(_x >> "brightnessMinimum");
 _brightnessMaximum = getNumber(_x >> "brightnessMaximum");
 _position = getArray(_x >> "position");
 _attenuation = getArray(_x >> "attenuation");
 _phaseTime = getNumber(_x >> "phaseTime");
 _timeout = getNumber(_x >> "timeout");
 _light = "#lightpoint" createVehicleLocal getPos _vehicle;
 _light setLightColor _color;
 _light setLightAmbient _ambientColor;
 _light lightAttachObject [_vehicle, _position];

 if (_status == 1) then {
 _light setLightBrightness _brightnessMaximum;
 } else {
 _light setLightBrightness _brightnessMinimum;
 };
 if ((count _attenuation) <= 0) then {
 _light setLightAttenuation _defaultAttenuation;
 } else {
 _light setLightAttenuation _attenuation;
 };

 _light setLightIntensity 10;
 _light setLightFlareSize 0.38;
 _light setLightFlareMaxDistance 150;
 _light setLightUseFlare true;
 _light setLightDayLight true;
 _lightObjects pushBack [_light, _status, ([[_phaseTime], 0, nil, [0]] call BIS_fnc_param), time, ([[_timeout], 0, nil, [0]] call BIS_fnc_param), _brightnessMinimum, _brightnessMaximum];
} forEach ("true" configClasses (missionConfigFile >> "emergencyLightsConfig" >> _playerSide >> _classname));




if ((count _lightObjects) <= 0) exitWith {};
if (_sendUnit == player) then { vehicle player setVariable ["lights", true, true]; _players = []; { if (player != _x) then { _players pushBack _x; }; } forEach playableUnits; [vehicle player, player] remoteExec ["life_fnc_emergencyLights", _players]; };




_lightObj = ObjNull;
while { (alive _vehicle) } do 
{
 if(!(_vehicle getVariable ["lights", false])) exitWith {};
 {
 private ["_lightObj", "_time", "_timeout", "_oldTime", "_status", "_brightnessMinimum", "_brightnessMaximum", "_extra"];
 _lightObj = [_x, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
 _time = [_x, 2, .2, [0]] call BIS_fnc_param;
 _timeout = [_x, 4, 0, [0]] call BIS_fnc_param;
 _oldTime = ([_x, 3, time, [0]] call BIS_fnc_param) + _timeout;
 _status = [_x, 1, 0, [0]] call BIS_fnc_param;
 _brightnessMinimum = [_x, 5, 0, [0]] call BIS_fnc_param;
 _brightnessMaximum = [_x, 6, 0, [0]] call BIS_fnc_param; 
 _extra = 0;

 if (!isEngineOn _vehicle) then { _extra = _engineTimeout; };
 if (_time == 0) then {
 if (isEngineOn _vehicle) then {
 _time = (random [0.1, 0.2, 0.3]);
 } else {
 _time = (random [0.1, 0.2 + 0.2, 0.3 + 0.2]);
 };
 };

 if ((time - _oldTime) > (_time + _extra)) then {
 if (_status == 0) then {
 _lightObj setLightBrightness _brightnessMinimum;
 _x set [1, 1];
 } else {
 _lightObj setLightBrightness _brightnessMaximum;
 _x set [1, 0];
 };
 _x set [3, time];
 sleep (_timeout + _extra);
 };
 } forEach _lightObjects;
 sleep 0.1;
};




{
 deleteVehicle (_x select 0);
} forEach _lightObjects;