#include "..\..\script_macros.hpp"
/*

			PROPERTY OF THE COMPANY: ZIONHOST UG
			
		USING THIS WITHOUT DIRECT ACCESS IS FORBIDDEN
			
*/
isInFeld = false;
private _debug = 0;
private _inArea = false;
private _feld1 = getMarkerPos "feld_1";	private _dis1 = 200;	
private _feld2 = getMarkerPos "feld_2";	private _dis2 = 75;
private _feld3 = getMarkerPos "feld_3";	private _dis3 = 75; 
private _feld4 = getMarkerPos "feld_4";	private _dis4 = 75; 
private _feld5 = getMarkerPos "feld_5";	private _dis5 = 75; 
private _feld6 = getMarkerPos "feld_6";	private _dis6 = 75; 
private _feld7 = getMarkerPos "feld_7";	private _dis7 = 75; 
private _feld8 = getMarkerPos "feld_8";	private _dis8 = 100; 
private _feld9 = getMarkerPos "feld_9";	private _dis9 = 125; 
private _feld10 = getMarkerPos "feld_10";	private _dis10 = 50; 
private _feld11 = getMarkerPos "feld_11";	private _dis11 = 150; 
private _feld12 = getMarkerPos "feld_12";	private _dis12 = 100; 
private _feld13 = getMarkerPos "feld_13";	private _dis13 = 100; 
private _feld14 = getMarkerPos "feld_14";	private _dis14 = 125; 
private _feld15 = getMarkerPos "feld_15";	private _dis15 = 125; 
private _feld16 = getMarkerPos "feld_16";	private _dis16 = 125; 
private _feld17 = getMarkerPos "feld_17";	private _dis17 = 125; 
private _feld18 = getMarkerPos "feld_18";	private _dis18 = 125; 
private _feld19 = getMarkerPos "feld_19";	private _dis19 = 125; 
private _feld20 = getMarkerPos "feld_20";	private _dis20 = 50; 
private _feld21 = getMarkerPos "feld_21";	private _dis21 = 75; 
private _feld22 = getMarkerPos "feld_22";	private _dis22 = 50; 

/*						--						*/

		if ((_feld1 distance player < _dis1) || (_feld2 distance player < _dis2) || (_feld3 distance player < _dis3) || (_feld4 distance player < _dis4) || (_feld5 distance player < _dis5) || (_feld6 distance player < _dis6) || (_feld7 distance player < _dis7) || (_feld8 distance player < _dis8) || (_feld9 distance player < _dis9) || (_feld10 distance player < _dis10) || (_feld11 distance player < _dis11) || (_feld12 distance player < _dis12) || (_feld13 distance player < _dis13) || (_feld14 distance player < _dis14) || (_feld15 distance player < _dis15) || (_feld16 distance player < _dis16) || (_feld17 distance player < _dis17) || (_feld18 distance player < _dis18) || (_feld19 distance player < _dis19) || (_feld20 distance player < _dis20) || (_feld21 distance player < _dis21) || (_feld22 distance player < _dis22)) then {
		
		isInFeld = true;
		   0 call MSG_fnc_farming;
		if (_debug isEqualTo 1) then {["Du bist auf deinem Feld","ZionHost-Sytem","green",false] call MSG_fnc_handle; };
		} else {
		isInFeld = false;
		  ["Du befindest dich nicht auf deinem Feld","ZionHost-Sytem","red",false] call MSG_fnc_handle;	
		};

		
		
/*

   [0] call MSG_fnc_farming_zones;

*/