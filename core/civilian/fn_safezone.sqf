/*
 File: fn_safezones.sqf
 Author: keine Ahnung :D Hab das Script vor ewigkeiten mal auf meiner platte Gefunden
 Editor: #Provokan
 Description: kein Kravalla in Kavalla :)
 löscht die einzelnen Kugeln.
*/
private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_dis"];
_zone1 = getMarkerPos "safe_1"; // <-- HIER EURE SAFE_ZONE NAMEN REIN !!!
_zone2 = getMarkerPos "safe_2"; // <-- HIER EURE SAFE_ZONE NAMEN REIN !!!
_zone3 = getMarkerPos "safe_3"; // <-- HIER EURE SAFE_ZONE NAMEN REIN !!!
_zone4 = getMarkerPos "safe_4"; // <-- HIER EURE SAFE_ZONE NAMEN REIN !!!
_zone5 = getMarkerPos "safe_5"; // <-- HIER EURE SAFE_ZONE NAMEN REIN !!!
_dis = 120; // DISTANCE SAFE ZONE (euren Marker Radius angeben)
_inArea = false;
switch (playerSide) do
{
 case civilian:
 {
 while {true} do
 {
 sleep 1;
 if (alive player) then
 {
 if (((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis) || (_zone4 distance player < _dis) || (_zone5 distance player < _dis)) && (!_inArea)) then
 {
 _eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
 _inArea = true;
["<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du betrittst eine Safezone. Holster deine Waffe. Du kannst niemanden ausrauben oder töten!",false,"fast"] call life_fnc_notification_system;
 player allowDamage false;
 life_curWep_h = currentWeapon player; player action ["SwitchWeapon", player, player, 100]; player switchCamera cameraView;
 };
 if (((_zone1 distance player > _dis) && (_zone2 distance player > _dis) && (_zone3 distance player > _dis) && (_zone4 distance player > _dis) &&(_zone5 distance player > _dis)) && (_inArea)) then
 {
 player removeEventHandler ["fired", _eh1];
 _inArea = false;
 ["<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du verlässt die Safezone.",false,"slow"] call life_fnc_notification_system;
 player allowDamage true;
 };
 };
 };
 };


 case west:
 {
 while {true} do
 {
 sleep 5;
 if (alive player) then
 {
 if (((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis) || (_zone4 distance player < _dis) || (_zone5 distance player < _dis)) && (!_inArea)) then
 {
 _inArea = true;
["<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du betrittst eine Safezone. Holster deine Waffe. Du kannst niemanden ausrauben oder töten!",false,"fast"] call life_fnc_notification_system;
 player allowDamage false;
 };
 if (((_zone1 distance player > _dis) && (_zone2 distance player > _dis) && (_zone3 distance player > _dis) && (_zone4 distance player > _dis) &&(_zone5 distance player > _dis)) && (_inArea)) then
 {
 _inArea = false;
 ["<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du verlässt die Safezone.",false,"slow"] call life_fnc_notification_system;
 player allowDamage true;
 };
 };
 };
 };

  case independent:
 {
 while {true} do
 {
 sleep 5;
 if (alive player) then
 {
 if (((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis) || (_zone4 distance player < _dis) || (_zone5 distance player < _dis)) && (!_inArea)) then
 {
 _inArea = true;
["<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du betrittst eine Safezone. Holster deine Waffe. Du kannst niemanden ausrauben oder töten!",false,"fast"] call life_fnc_notification_system;
 player allowDamage false;
 };
 if (((_zone1 distance player > _dis) && (_zone2 distance player > _dis) && (_zone3 distance player > _dis) && (_zone4 distance player > _dis) &&(_zone5 distance player > _dis)) && (_inArea)) then
 {
 _inArea = false;
 ["<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du verlässt die Safezone.",false,"slow"] call life_fnc_notification_system;
 player allowDamage true;
 };
 };
 };
 };

 sleep 3;
};
