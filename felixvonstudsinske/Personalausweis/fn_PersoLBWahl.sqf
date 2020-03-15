#include "..\macros.hpp"
/*
	Autor: Felix von Studsinske
	Dateiname: fn_PersoLBWahl.sqf
	Beschreibung:
		

	Hinweis/additional information - ausgenommen siehe auf www.von-studsinske.de:
	DE:	Du darfst meine Scripts/Funktionen/Dateien/Bilder/usw. nicht ohne meine Erlaubnis nutzen!
	EN: You are not allowed to use my data/scripts/functions/mission/pictures/etc. without my permission!
*/
disableSerialization;
_Anzeige = CTRL(66500,1100);
_Knopf_Waehlen = CTRL(66500,2401);
_Knopf_Loeschen = CTRL(66500,2404);
_Knopf_NameAendern = CTRL(66500,2405);
_Knopf_Waehlen CEN false;
_Knopf_NameAendern CEN false;
_Knopf_Loeschen CEN false;
params [
	["_LB_Control",controlNull,[controlNull]],
	["_LB_Sel",-1,[0]]
];
if (isNull _LB_Control) exitWith {};
if (_LB_Sel < 0) exitWith {};
_Data = _LB_Control lbData _LB_Sel;
if (_Data isEqualTo "") exitWith {
	_Anzeige STRUCT "Dieser Speicherplatz für eine weitere Identität scheint noch verfügbar zu sein.<br/>Möchtest du eine neue Identität erstellen?";
	_Anzeige ctrlSetPosition [SEL(ctrlPosition _Anzeige,0),SEL(ctrlPosition _Anzeige,1),SEL(ctrlPosition _Anzeige,2),ctrlTextHeight _Anzeige];
	_Anzeige ctrlCommit 0;
};
_Dataarray = parseSimpleArray _Data;
_Dataarray params [ // Reihenfolge: PersoID, Spielername, SpielerUID, Spielerfraktion, Persodaten, Ausstelldatum
	["_PersoID",-1,[0]],
	["_Spielername","",[""]],
	["_SpielerUID","",[""]],
	["_Spielerfraktion","",[""]],
	["_Persodaten","[]",[""]],
	["_Ausstelldatum", [-1,-1,-1,-1,-1,-1],[[]]], //  [Y,M,D,H,M,S]
	["_Mobilfunknummer","",[""]],
	["_Originalname","",[""]]
];
_Knopf_NameAendern CEN true;
_Knopf_Loeschen CEN true;
if !(_Originalname isEqualTo profileName) exitWith {
	_Anzeige STRUCT format["Um Supportfälle oder Verwechslungen vorzubeugen, ist es zwingend erforderlich, dass du dich mit dem in dieser Identität hinterlegten Profilname (von ArmA) anmeldest und spielst.<br/>Dein Profilname: ""%1""<br/>Erforderlicher Profilname: ""%2""<br/>Bitte Profilnamen wechseln, neues Profil erstellen oder im Zweifel im Support melden.",profileName,_Originalname];
	_Anzeige ctrlSetPosition [SEL(ctrlPosition _Anzeige,0),SEL(ctrlPosition _Anzeige,1),SEL(ctrlPosition _Anzeige,2),ctrlTextHeight _Anzeige];
	_Anzeige ctrlCommit 0;
};
_Persodaten = parseSimpleArray _Persodaten;
if (isNil "_Persodaten") exitWith {};
if !(_Persodaten isEqualType []) exitWith {};
_Knopf_Waehlen CEN true;
_Datum = format["%1.%2.%3 %4:%5",SEL(_Ausstelldatum,2),SEL(_Ausstelldatum,1),SEL(_Ausstelldatum,0),SEL(_Ausstelldatum,3),SEL(_Ausstelldatum,4)];
_Persodaten params [
	["_Geburtsdatum",[-1,-1,-1],[[]]],
	["_Koerpergroesse",-1,[0]],
	["_Koerpergewicht",-1,[0]],
	["_Wohnort","",[""]],
	["_Strasse","",[""]],
	["_Hausnummer",-1,[0]],
	["_Augenfarbe",-1,[0]],
	["_Geschlecht","",[""]],
	["_Staatsangehoerigkeit",-1,[0]],
	["_Persobild","",[""]]
];
_Strasse = getText(missionConfigFile >> "CfgPerso" >> "Orte" >> worldName >> _Wohnort >> "Strassen" >> _Strasse >> "Name");
_Plz = getText(missionConfigFile >> "CfgPerso" >> "Orte" >> worldName >> _Wohnort >> "Postleitzahl");
_Wohnort = getText(missionConfigFile >> "CfgPerso" >> "Orte" >> worldName >> _Wohnort >> "Name");
_Ausweisnummer = [_Originalname,playerSide,_PersoID,PUID] call life_fnc_PersoAusweisnummer;
_Anzeige STRUCT format[
	"Ausweisnummer: %1<br/>Besitzername: %2<br/>Name bei Beantragung: %3<br/>Austelldatum: %4<br/>Geburtsdatum: %5<br/>Geschlecht: %10<br/>Mobilfunknummer: %11<br/><br/>Anschrift:<br/><t align='center'>%6 %7<br/>%8 %9</t>",
	_Ausweisnummer,
	_Spielername,
	_Originalname,
	_Datum,
	format["%1.%2.%3",SEL(_Geburtsdatum,0),SEL(_Geburtsdatum,1),SEL(_Geburtsdatum,2)],
	_Strasse,
	_Hausnummer,
	_Plz,
	_Wohnort,
	_Geschlecht,
	_Mobilfunknummer
];
_Anzeige ctrlSetPosition [SEL(ctrlPosition _Anzeige,0),SEL(ctrlPosition _Anzeige,1),SEL(ctrlPosition _Anzeige,2),ctrlTextHeight _Anzeige];
_Anzeige ctrlCommit 0;