/*
	File: Config_Phone.hpp
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/

class CfgPhone {
	
	phone_number = "0911";
	//Vorwahl für alle Nummern
	
	phone_extraChannel[] = {
		//Anzeige Name, Nummer, Slot, Farbe
		{"Polizei-Leitstelle", "110", "cop_1", {0.12,0.22,0.97,1}},
		{"Medic-Leitstelle", "112", "medic_1", {1,0.31,0.2,1}}
	};		
	//Extra Channel die in der Liste stehen.
	
	phone_canCallOwnChannel = false;
	//Kann z.B ein Polizist die Polizei Leitstelle anrufen?
	
	phone_canSeePosition[] = { "west", "independent" };
	//Welche Gruppen Handys Orten können. (west (blau), independent (grün), civilian (lila), east (rot))
	
	phone_maxMinNameLength[] = {4, 20};
	//Minimale und maximale Länge des Namens.
	
	phone_busyTime = 5; 
	//Nach wie vielen Sekunden der besetzt Ton kommt
	
	phone_ringTime = 15; 
	//Wie lange es klingelt in Sekunden bevor der Anruf abbricht
	
	phone_maxTime = 15;
	//Zeit in Minuten wie lange man Telefonieren darf.
	
	phone_overTimeDivisor = 2;
	//Sprich (Zeit von Anruf | geteilt durch | overTimeDivisor) muss man warten bis zum nächsten Anruf
	
	phone_ringTones[] = { {"Klingelton 1", "ringtone1"}, {"Klingelton 2", "ringtone2"} }; 
	//Verschiedene Klingeltöne
	
	phone_callTone = "calltone";
	//Ton während es klingelt beim Anrufenden
	
	phone_busyTone = "busytone"; 
	//Ton wenn besetzt ist
	
	phone_hangupTone = "hanguptone";
	//Ton beim auflegen
	
	phone_maxChannel = 10; 
	//Maximale Anzahl an Telefonleitungen (Denk dran es gibt max. 10 Channel und 2 werden Standart von AltisLife schon belegt!)
	
	phone_mobilePosYBottom = 0.973;
	//Die Y-SafeZone Position wo das Handy nicht mehr sichtbar sein sollte. (Sollte nur geändert werden wenn das Handy verschoben wird!!!)
	
	phone_keyCodeAccept = 2;
	phone_keyCodeAcceptName = "1";
	//Taste zum annehmen des Anrufes
	
	phone_keyCodeCancel = 3;
	phone_keyCodeCancelName = "2";
	//Taste zum ablehnen oder beenden des Anrufes
	
	phone_channelColor[] = {0.45, 1, 0.34, 1};
	//Channel Farbe 
	
	phone_markerColor = "Red";
	//Marker Farbe
	
	phone_removeMarkerTime = 1;
	//Zeit nach der sich der Marker löscht in Minuten
	
};