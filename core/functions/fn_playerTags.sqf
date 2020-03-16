#include "..\..\script_macros.hpp"
/*
 File: fn_playerTags.sqf
 Author: Bryan "Tonic" Boardwine
 Description:
 Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8
if (visibleMap || {!alive player} || {dialog}) exitWith {
 500 cutText["","PLAIN"];
};
_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
 500 cutRsc["Life_HUD_nameTags","PLAIN"];
 _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};
{ life_known_Players pushBackUnique _x; } forEach (units(group player));
_units = nearestObjects[(visiblePosition player),["Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
{ if((player distance _x < 50) && {_x in life_known_Players}) then {_units pushBack _x};} foreach playableUnits;
_units = _units - [player];
_masks = LIFE_SETTINGS(getArray,"clothing_masks");
{
 private "_text";
 _idc = _ui displayCtrl (iconID + _forEachIndex);
 if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
 _pos = switch (typeOf _x) do {
 case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
 case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
 default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
 };
 _sPos = worldToScreen _pos;
 _distance = _pos distance player;
 if (!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) then {
 if (count _sPos > 1 && {_distance < 15}) then {
 _text = switch (true) do {
 case (_x in (units group player) && playerSide == civilian): {format ["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];};
 // case (!isNil {(_x getVariable "rank")} && side _x == west): {format["<img image='%1' size='1'></img> <t size='1.2' color='#318CE7'>%3<br/></t>%2",
 case (!isNil {(_x getVariable "rank")} && side _x == west): {format["<t size='1.2' color='#318CE7'>%1</t><t size='1.2' color='#318CE7'>%3<br/></t>%2",switch ((_x getVariable "rank")) do {
 case 1: {"Praktikant"};
 case 2: {"Anwärter"};
 case 3: {"Polizist"};
 case 4: {"Polizeimeister"};
 case 5: {"Polizeiobermeister"};
 case 6: {"Polizeihauptmeister"};
 case 7: {"Polizeikommissar"};
 case 8: {"Polizeioberkommissar"};
 case 9: {"Polizeihauptkommissar"};
 case 10: {"Polizeirat"};
 case 11: {"Polizeioberrat"};
 case 12: {"Polizeidirektor"};
 case 13: {"Polizeivizedirektor"};
 case 14: {"L. Polizeidirektor"};
 case 15: {"Polizeivizepräsident"};
 case 16: {"Polizeipräsident"};
 case 18: {""};
 case 19: {""};
 case 20: {""};
 case 21: {""};
 case 22: {"SEK-ANWÄRTER"};
 case 23: {"SEK-EINHEIT"};
 case 24: {"SEK-LEITUNG"};
 default {"Praktikant"};
 },_x getVariable ["realname",name _x]]};

 case (side _x == independent): {format["<t color='#FF0000'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa' size='1'></img> <t size='1.2' color='#FF0000'>%2<br/></t>%1",
 _x getVariable ["realname",name _x],
 switch ((_x getVariable "medrank")) do {
 case 1: {"Ersthelfer"};
 case 2: {"Sanitäter"};
 case 3: {"Rettungshelfer"};
 case 4: {"Rettungssanitäter"};
 case 5: {"Notfallsanitäter"};
 case 6: {"Notarzt"};
 case 7: {"Oberarzt"};
 default {"Ersthelfer"};
 }
 ]
 };
 case (side _x == east): {format["<t color='#FFF700'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa' size='1'></img> <t size='1.2' color='#FFF700'>%2<br/></t>%1",
 _x getVariable ["realname",name _x],
 switch ((_x getVariable "adacrank")) do {
 case 1: {"ADAC"};
 case 2: {"ADAC"};
 case 3: {"ADAC"};
 case 4: {"ADAC"};
 case 5: {"ADAC"};
 case 6: {"ADAC"};
 case 7: {"ADAC"};
 default {"ADAC"};
 }
 ]
 };
 default {
 if (!isNil {(group _x) getVariable "gang_name"}) then {
 format["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
 } else {
 _x getVariable ["realname",name _x];
 };
 };

 };
// if(_x GVAR ["speaking",false]) then {_text = "<t color='#12cc12'>[Speaking] " + _text};
if (_x getVariable ["speaking",false]) then {_text = "<t color='#12cc12'>[Spricht] " + _text;};
 _idc ctrlSetStructuredText parseText _text;
 _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
 _idc ctrlSetScale scale;
 _idc ctrlSetFade 0;
 _idc ctrlCommit 0;
 _idc ctrlShow true;
 } else {
 _idc ctrlShow false;
 };
 } else {
 _idc ctrlShow false;
 };
 } else {
 _idc ctrlShow false;
 };
} forEach _units;
