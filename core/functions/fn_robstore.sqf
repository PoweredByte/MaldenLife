/*
file: fn_robShops.sqf
Author: MrKraken
Executes the rob shob action!
Modified by Wackbatt.
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos","_markername"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name
_cops = (west countSide playableUnits);

if(side _robber != civilian) exitWith {	["Du kannst die Tankstelle nicht ausrauben!","ZionHost-System","red",false] call MSG_fnc_handle;};
if(_robber distance _shop > 5) exitWith {	["Du musst dich in der Nähe der Tankstelle befinden!","ZionHost-System","red",false] call MSG_fnc_handle;};
if((_shop getVariable "inprogress")) exitWith {	["Hilfe! ich werde gerade ausgeraubt!","Kassierer","red",false] call MSG_fnc_handle;};
if((_shop getVariable "robbed")) exitWith {	["Die Kasse ist leer! Ich wurde doch gerade schon überfallen!","Kassierer","red",false] call MSG_fnc_handle;};
if((_shop getVariable "locked")) exitWith {	["Haha! Die Kasse ist abgeschlossen","Kassierer","red",false] call MSG_fnc_handle;};
if(_cops < 2 ) exitWith{["Es sind zuwenig Polizisten Anwesend!","ZionHost-System","red",false] call MSG_fnc_handle;};
/*
["Du kannst die Tankstelle nicht ausrauben!",true,"fast"] call life_fnc_notification_system;
["Du musst dich in der Nähe der Tankstelle befinden!",true,"fast"] call life_fnc_notification_system;
["Hilfe! Ich werde gerade ausgeraubt!",true,"fast"] call life_fnc_notification_system;
["Die Kasse ist leer!. Jemand war wohl schneller als du!",true,"fast"] call life_fnc_notification_system;
["Haha! Die Kasse ist abgeschlossen!",true,"fast"] call life_fnc_notification_system;
["Der Raub ist doch bereits im Gange!",true,"fast"] call life_fnc_notification_system;
["Steig lieber aus deinem Fahrzeug aus!",true,"fast"] call life_fnc_notification_system;
["Es sind zuwenig Polizisten Online!",true,"fast"] call life_fnc_notification_system;
["Haha! Was willst du denn! Ohne Waffe jemanden ausrauben?",true,"fast"] call life_fnc_notification_system;
["Der Kassierer hat den Alarm ausgelöst! Die Polizisten sind auf dem Weg!",true,"fast"] call life_fnc_notification_system;
["Es sind zuwenig Polizisten Online!",true,"fast"] call life_fnc_notification_system;
["Es sind zuwenig Polizisten Online!",true,"fast"] call life_fnc_notification_system;
["Es sind zuwenig Polizisten Online!",true,"fast"] call life_fnc_notification_system;
*/
if !(_kassa) then {_kassa = 1000; };
if (_rip) exitWith { ["Der Raub ist bereits im Gange!","ZionHost-System","red",false] call MSG_fnc_handle; };
if (vehicle player != _robber) exitWith { ["Steig aus deinem Fahrzeug aus!","ZionHost-System","red",false] call MSG_fnc_handle; };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { ["Haha, versuchst du mich gerade ohne Waffe auszurauben? Witzbold!","Kassierer","red",false] call MSG_fnc_handle; };
if (_kassa == 0) exitWith { ["die Kasse ist leer!","Kassierer","red",false] call MSG_fnc_handle; };

_rip = true;
_kassa = 150000000 + round(random 50000000);
removeAllActions _shop;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = 100;
if(_chance >= 50) then {[(format["ALARM! - Tankstelle: %1 wird ausgeraubt!", _shop]),"ALARM","red",false] remoteExec ["MSG_fnc_handle",west]; };
if(_chance >= 50) then { ["Der Kassierer hat den Alarm ausgelöst!, die Polizisten sind auf dem Weg!","ZionHost-System","red",false] call MSG_fnc_handle; };

//OLD //if(_chance >= 50) then {[1,format["ALARM! - Eine Tankstelle wird Ausgeraubt!"]] remoteExec ["life_fnc_broadcast",west]; };	//OLD

//Set some Vars
_shop setVariable["inprogress",true,true];


disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Tankstellenraub in Gange!, bleib in der Nähe (5m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

_Pos = position player; // by ehno: get player pos

_markername = createMarker [format ["shop_%1", (str (random 99999))], _pos];
_markername setMarkerColor "ColorRed"; 
_markername setMarkerText "!ACHTUNG! Raubüberfall! !ACHTUNG!"; 
_markername setMarkerType "mil_warning";

if(_rip) then
{
while{true} do
{
sleep 3;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Tankstellenraub in Gange!, bleib in der Nähe (5m) (%1%2)...",round(_cP * 100),"%"];
if !(alive _robber) exitWith {};

if(_cP >= 1) exitWith {};
if(_robber distance _shop > 5) exitWith { };
if!(alive _robber) exitWith {};
};
if (!alive _robber) exitWith { deleteMarker _markername; _shop switchMove ""; 	["Du bist gestorben","ZionHost-System","red",true] call MSG_fnc_handle; 5 cutText ["","PLAIN"]; _rip = false; _shop SetVariable ["inprogress",FALSE,TRUE]; };
if(_robber distance _shop > 5) exitWith { deleteMarker _markername; _shop switchMove ""; 	["Du musst dich in der Nähe der Kasse befinden!, die Kasse ist nun verriegelt","ZionHost-System","red",false] call MSG_fnc_handle; 5 cutText ["","PLAIN"]; _rip = false; _shop SetVariable ["inprogress",FALSE,TRUE]; _shop setVariable["locked",true,true]; };
if((_robber getVariable "restrained")) exitWith { deleteMarker _markername; _shop switchMove ""; 	["Du wurdest Festgenommen!","ZionHost-System","red",true] call MSG_fnc_handle; 5 cutText ["","PLAIN"]; _rip = false; _shop SetVariable ["inprogress",FALSE,TRUE]; _shop setVariable["locked",true,true]; };
if((player getVariable "restrained" isEqualTo 1)) exitWith { deleteMarker _markername; _shop switchMove ""; 	["Du wurdest Festgenommen!","ZionHost-System","red",true] call MSG_fnc_handle; 5 cutText ["","PLAIN"]; _rip = false; _shop SetVariable ["inprogress",FALSE,TRUE]; _shop setVariable["locked",true,true]; };

5 cutText ["","PLAIN"];

titleText[format["Du hast %1 gestohlen!, Verschwinde schnell bevor die Polizisten kommen",[_kassa] call life_fnc_numberText],"PLAIN"];
deleteMarker _markername; // by ehno delete maker
zionhost_v_money835 = zionhost_v_money835 + _kassa;
_shop SetVariable ["inprogress",FALSE,TRUE];
_shop setVariable["robbed",true,true];

_rip = false;
life_use_atm = false;

life_use_atm = true;
if!(alive _robber) exitWith {};
[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 100;
_action = _shop addAction[localize"STR_MAR_Station_Shop",life_fnc_weaponShopMenu,"f_station_store"]; _shop addAction[localize"STR_Shop_Station_Coffee",life_fnc_virt_menu,"f_station_coffee"]; _shop addAction["Tankstelle ausrauben",life_fnc_rob_gas_station];
_shop SetVariable ["robbed",FALSE,TRUE];
_shop SetVariable ["locked",FALSE,TRUE];
_shop switchMove "";