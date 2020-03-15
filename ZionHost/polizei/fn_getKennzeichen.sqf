#include "..\..\script_macros.hpp"
/*

			PROPERTY OF THE COMPANY: ZIONHOST UG
			
		USING THIS WITHOUT DIRECT ACCESS IS FORBIDDEN
			
*/

/*				Variablen		
	*/

private _mode = [_this,0,0,[0]] call BIS_fnc_param;
//private _plate = ctrlText 1426;
private _plate = [_this,1,0,[0]] call BIS_fnc_param;
private _player = player;

/*			Sicherheitsabfragen		*/
//if (_plate < 0) exitWith {hint "Das Kennzeichen ist zu klein!"; closeDialog 0;}; //Kennzeichen zu klein
//if (isNil _plate) exitWith {closeDialog 0;}; //keine Angabe

/*				Code				*/

switch (_mode) do {
    case 1: {
		[_player,getPlayerUID player,_plate,1] remoteExecCall ["ZHost_fnc_getKennzeichenServer",RSERV];
    };
	
	case 2: {
		private _alive = [_this,1,0,[0]] call BIS_fnc_param;
		private _fahrzeughalter = [_this,2,"",[""]] call BIS_fnc_param;
//		if (_alive isEqualTo 0) exitWith {hint "Das Fahrzeug mit diesem Kennzeichen wurde zerstört!";};
//		if (_fahrzeughalter isEqualTo "") exitWith {hint "Es wurde kein Fahrzeug/halter mit diesem Kennzeichen gefunden!";};
		hint format ["Kennzeichen: %1, Zerstört: %2", _fahrzeughalter,_alive];
	};
};

//



