#include "..\..\script_macros.hpp"
/*
    File: fn_buyHouse.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Buys the house?
*/
private _mode = param [0,0,[0]];
private _uid = getPlayerUID player;
private _zahlen = 0;
private _preis = 100000000; //PREIS FÜR EIN/E FELD/FARM
if (isNil life_farms) then {life_farms = 0;};
private _members = group player getVariable "gang_members";
private _gangOwner = (group player) getVariable "gang_owner";
_members = _members - [_uid];

//private _gangName = _group getVariable ["gang_name",""];

//			  SICHERHEITSABFRAGEN
if (_gangOwner isEqualTo (getPlayerUID player)) then {_zahlen = 1;};
if (isNil _gangOwner) then {_zahlen = 1;};
if (life_farms >= 1) exitWith {["Du besitzt bereits ein Feld!","ZionHost-Sytem","red",false] call MSG_fnc_handle;};

//				NAMENSABFRAGE

//if (isNil _gangName) then {_name = name player;} else {_name = _gangName;};

//			----- CODE BEGIN (KAUFEN) -----			\\


switch (_mode) do {
case 1: {
		if (!isNil "feld1") exitWith {["Dieses Feld wurde bereits gekauft!","ZionHost-Sytem","red",false] call MSG_fnc_handle; closeDialog 0; _zahlen = 0;};
		_position = [4974.9,3965.884];
		feld1 = createMarkerLocal ["feld_1",_position];
		feld1 setMarkerShape "ICON";
		feld1 setMarkerType "hd_dot";
		feld1 setMarkerSize [0.1,0.1];
		feld1 setMarkerColor "ColorGreen";
		feld1 setMarkerText "gekauftes Feld";
		life_farms = life_farms + 1;
		[_mode] remoteExecCall ["MSG_fnc_feld_kaufen",_members];
	};

case 2: {
		if (!isNil "feld2") exitWith {["Dieses Feld wurde bereits gekauft!","ZionHost-Sytem","red",false] call MSG_fnc_handle; closeDialog 0; _zahlen = 0;};
		_position = [5226.581,3684.716];
		feld2 = createMarkerLocal ["feld_2",_position];
		feld2 setMarkerShape "ICON";
		feld2 setMarkerType "hd_dot";
		feld2 setMarkerSize [0.1,0.1];
		feld2 setMarkerColor "ColorGreen";
		feld2 setMarkerText "gekauftes Feld";
		feld_2 = _feld2;
		life_farms = life_farms + 1;
		[_mode] remoteExecCall ["MSG_fnc_feld_kaufen",_members];
	};
	
case 3: {
		if (!isNil "feld3") exitWith {["Dieses Feld wurde bereits gekauft!","ZionHost-Sytem","red",false] call MSG_fnc_handle; closeDialog 0; _zahlen = 0;};
		_position = [5667.926,3669.631];
		feld3 = createMarkerLocal ["feld_3",_position];
		feld3 setMarkerShape "ICON";
		feld3 setMarkerType "hd_dot";
		feld3 setMarkerSize [0.1,0.1];
		feld3 setMarkerColor "ColorGreen";
		feld3 setMarkerText "gekauftes Feld";
		feld_3 = _feld3;
		life_farms = life_farms + 1;
		[_mode] remoteExecCall ["MSG_fnc_feld_kaufen",_members];
	};
	
case 4: {
		if (!isNil "feld4") exitWith {["Dieses Feld wurde bereits gekauft!","ZionHost-Sytem","red",false] call MSG_fnc_handle; closeDialog 0; _zahlen = 0;};
		_position = [5668.304,3197.834];
		feld4 = createMarkerLocal ["feld_4",_position];
		feld4 setMarkerShape "ICON";
		feld4 setMarkerType "hd_dot";
		feld4 setMarkerSize [0.1,0.1];
		feld4 setMarkerColor "ColorGreen";
		feld4 setMarkerText "gekauftes Feld";
		feld_4 = _feld4;
		life_farms = life_farms + 1;
		[_mode] remoteExecCall ["MSG_fnc_feld_kaufen",_members];
	};
	
case 5: {
		if (!isNil "feld5") exitWith {["Dieses Feld wurde bereits gekauft!","ZionHost-Sytem","red",false] call MSG_fnc_handle; closeDialog 0; _zahlen = 0;};
		_position = [5669.515,2963.726];
		feld5 = createMarkerLocal ["feld_5",_position];
		feld5 setMarkerShape "ICON";
		feld5 setMarkerType "hd_dot";
		feld5 setMarkerSize [0.1,0.1];
		feld5 setMarkerColor "ColorGreen";
		feld5 setMarkerText "gekauftes Feld";
		feld_5 = _feld5;
		life_farms = life_farms + 1;
		[_mode] remoteExecCall ["MSG_fnc_feld_kaufen",_members];
	};
};


	//		GELD ABZIEHEN


if (_zahlen isEqualTo 1) then {
if (CASH < _preis) exitWith {["Du hast nicht genügend Geld dabei!","ZionHost-Sytem","red",false] call MSG_fnc_handle; _zahlen = 0;};
CASH = CASH - _preis;

["Du hast ein Feld für 100.000.000 gekauft","ZionHost-Sytem","green",false] call MSG_fnc_handle;
} else {hint "Zahlen == 0";};

//	  [0] call MSG_fnc_feld_kaufen;

