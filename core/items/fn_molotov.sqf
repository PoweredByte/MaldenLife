/* 
File: fn_molotov.sqf 
Author: Matthias Bun 
Edit by AmaZiinG 
Description: Handles the Molotov Cocktails
P.S. - Don't be a faggot and delete the Autors.
*/
private["_pos","_fire"];
_pos = [_this,0,[],[[]]] call BIS_fnc_param;
if(_pos isEqualTo []) exitWith {}; //Badddd
_fire = "test_EmptyObjectForFireBig" createVehicle _pos;
sleep 10;
{
if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach ((position _fire) nearObjects 10);