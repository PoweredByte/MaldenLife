#include "..\macros.hpp"
/*
	Autor: Felix von Studsinske
	Dateiname: fn_PersoLoeschen.sqf
	Beschreibung:
		

	Hinweis/additional information - ausgenommen siehe auf www.von-studsinske.de:
	DE:	Du darfst meine Scripts/Funktionen/Dateien/Bilder/usw. nicht ohne meine Erlaubnis nutzen!
	EN: You are not allowed to use my data/scripts/functions/mission/pictures/etc. without my permission!
*/
disableSerialization;
_LB_Persos = CTRL(66500,2100);
_Infobox = CTRL(66500,1100);
_Knopf_Waehlen = CTRL(66500,2401);
_Knopf_PersoPlus = CTRL(66500,2402);
_Auswahl = lbCurSel _LB_Persos;
if (_Auswahl < 0) exitWith {hint "Keine Auswahl getroffen";};
_Data = _LB_Persos lbData _Auswahl;
if (_Data isEqualTo "") exitWith {hint "Auswahl entspricht einer freien Identität und keinem Personalausweis";};
_Data = parseSimpleArray _Data;
if (isNil "_Data") exitWith {};
if !(_Data isEqualType []) exitWith {};
_Data params [
	["_PersoID",-1,[0]],
	["_Spielername","",[""]],
	["_SpielerUID","",[""]],
	["_Spielerfraktion","",[""]],
	["_Persodaten","[]",["[]"]],
	["_Ausstelldatum", [-1,-1,-1,-1,-1,-1],[[]]], //  [Y,M,D,H,M,S]
	["_Mobilfunknummer","",[""]],
	["_Originalname","",[""]]
];
_Limit = getArray(missionConfigFile >> "CfgPerso" >> "Einstellungen" >> "MaximaleIdentitaeten");
_Limit = switch (playerSide) do {case west: {SEL(_Limit,0);};case civilian: {SEL(_Limit,1);};case east: {SEL(_Limit,3);};case independent: {SEL(_Limit,2);}; default {0};};
_KostenIdentitaetNeu = getArray(missionConfigFile >> "CfgPerso" >> "Einstellungen" >> "KostenIdentitaetNeu");
_KostenIdentitaetNeu = switch (playerSide) do {case west: {SEL(_KostenIdentitaetNeu,0);};case civilian: {SEL(_KostenIdentitaetNeu,1);};case east: {SEL(_KostenIdentitaetNeu,3);};case independent: {SEL(_KostenIdentitaetNeu,2);}; default {[-1,0]};};
_KostenIdentitaetLoeschen = getArray(missionConfigFile >> "CfgPerso" >> "Einstellungen" >> "KostenIdentitaetLoeschen");
_KostenIdentitaetLoeschen = switch (playerSide) do {case west: {SEL(_KostenIdentitaetLoeschen,0);};case civilian: {SEL(_KostenIdentitaetLoeschen,1);};case east: {SEL(_KostenIdentitaetLoeschen,3);};case independent: {SEL(_KostenIdentitaetLoeschen,2);}; default {0};};
if (KONTO < _KostenIdentitaetLoeschen) exitWith {hint format["Dir fehlen %1 € auf deinem Bankkonto, um diese Identität zu löschen.",ZAHLENKONVERTER(_KostenIdentitaetLoeschen - KONTO)];};
_Aktion = [
	format["Du bist dabei die oben genannte Identität zu löschen. Dieser Vorgang kostet dich %1 € und werden von deinem Konto abgezogen.<br/>Aktuell hast du %2 € auf deinem Konto.<br/>Möchtest du die Identität löschen?",if (_KostenIdentitaetLoeschen > 0) then {ZAHLENKONVERTER(_KostenIdentitaetLoeschen)}else{"keine"},ZAHLENKONVERTER(KONTO)],
	format["Personalausweis '%1' (%2) löschen",_PersoID toFixed 0,_Mobilfunknummer],
	"ENTFERNEN",
	"ABBRECHEN"
] call BIS_fnc_guiMessage;
if(!isNil "_Aktion" && {!_Aktion}) exitWith {titleText["Löschung abgebrochen","PLAIN"];};
closeDialog 0;
pl_haupt_menu = true;
hint "Wird gelöscht";
[player,PUID,_PersoID] remoteExec ["DB_fnc_PersoLoeschen",2];
[] spawn {
	_HandlerID = (findDisplay 46) displayAddEventHandler ["KeyDown",{true}];
	while {pl_haupt_menu} do { 0 cutText["","BLACK FADED"]; 0 cutFadeOut 99999999; };
	(findDisplay 46) displayRemoveEventHandler ["KeyDown",_HandlerID];
};
if (_KostenIdentitaetLoeschen > 0) then {
	KONTO = KONTO - _KostenIdentitaetLoeschen;
	[1] call SOCK_fnc_updatePartial;
};