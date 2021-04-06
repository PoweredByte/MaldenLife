/*
//Author: soulkobk (soulkobk.blogspot.com)
//Edited by Kuchenplatte.com
*/
if (!hasInterface) exitWith {};

var_fullScreenNightVision =
[
    "G_Combat_Goggles_tna_F"
];

fn_fullScreenNightVision = {
    params ["_displayCode","_keyCode","_isShift","_isCtrl","_isAlt"];
    _handled = false;
    if (_keyCode in actionKeys "NightVision") then
    {
        switch var_fullScreenNightVisionMode do
        {
            case 0: {
                if (cameraView != "GUNNER") then
                {
                    if (goggles player in var_fullScreenNightVision) then
                    {
                        player action ["nvGoggles", player];
                        var_fullScreenNightVisionMode = currentVisionMode player;
                        _handled = true;
                    };
                };
            };
            case 1: {
                if (cameraView != "GUNNER") then
                {
                    if (goggles player in var_fullScreenNightVision) then
                    {
                        player action ["nvGogglesOff", player];
                        var_fullScreenNightVisionMode = currentVisionMode player;
                        _handled = true;
                    };
                };
            };
        };
    };
    _handled
};

waitUntil {alive player};

player addEventHandler ["GetOutMan", {
    params ["_player", "_role", "_vehicle", "_turret"];
    switch var_fullScreenNightVisionMode do
    {
        case 1: {
            if (goggles _player in var_fullScreenNightVision) then
            {
                _player action ["nvGoggles", _player];
                var_fullScreenNightVisionMode = currentVisionMode _player;
            };
        };
        case 0: {
            if (goggles _player in var_fullScreenNightVision) then
            {
                _player action ["nvGogglesOff", _player];
                var_fullScreenNightVisionMode = currentVisionMode _player;
            };
        };
    };
}];

var_fullScreenNightVisionMode = currentVisionMode player;

waitUntil {!(isNull (findDisplay 46))};
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call fn_fullScreenNightVision;"];