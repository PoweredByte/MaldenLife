/*
    File: fn_copLights.sqf
    Author: mindstorm, modified by Adanteh
    Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow
    
    Description:
    Adds the light effect to cop vehicles, specifically the offroad.


params [
    ["_vehicle", objNull, [objNull]],
    ["_lightTime", 0.22, [0]]
];

if (isNil "_vehicle" || {isNull _vehicle || {!(_vehicle getVariable "lights")}}) exitWith {};
private _lightBlue = [0.1, 0.1, 20];
private _light = "#lightpoint" createVehicleLocal getPos _vehicle;
sleep 0.2;
_light setLightColor _lightBlue;
_light setLightBrightness 0.2;
_light setLightAmbient [0.1,0.1,1];

_offset = switch (typeOf _vehicle) do {
    case "C_Offroad_01_F": {
        [0.37, 0.0, 0.56];
    };
    case "B_MRAP_01_F": {
        [0, -1.2, 0.55];
    };
    case "C_SUV_01_F": {
        [-0.6, -0.2, 0.325];
    };
    case "C_Hatchback_01_sport_F": {
        [-0.05, -0.02, 0.175];
    };
    case "B_Heli_Light_01_F": {
        [0.37, 0.0, -0.80];
    };
    case "B_Heli_Transport_01_F": {
        [0.5, 0.0, 0.81];
    };
};

_light lightAttachObject [_vehicle, _offset];

_light setLightAttenuation [0.181, 0, 1000, 130];
_light setLightIntensity 10;
_light setLightFlareSize 0.38;
_light setLightFlareMaxDistance 150;
_light setLightUseFlare true;
_light setLightDayLight true;

private _left = true;
while {alive _vehicle} do {  
    if !(_vehicle getVariable "lights") exitWith {};
    if (_left) then {
        _light setLightBrightness 0.1;
		sleep 0.01;
        _light setLightBrightness 1;
		sleep 0.5;

    };
    _left = !_left;
    sleep _lightTime;  
};

deleteVehicle _light;
*/