/*
    File: fn_removeFromKeyChain.sqf
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: Removes vehicle/house from key chain
*/
params[["_item",objNull,[objNull]]];

if (isServer) exitWith {};

private _index = life_vehicles find _item;
if !(_index isEqualTo -1) then {
    life_vehicles deleteAt _index;
};