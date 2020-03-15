#include "..\script_macros.hpp"
/*

			PROPERTY OF THE COMPANY: ZIONHOST UG
			
		USING THIS WITHOUT DIRECT ACCESS IS FORBIDDEN
			
*/

ClicksPerSecond = 0;
lastlogging = 0;
clickingstarted = false;

(findDisplay 46) displayAddEventHandler ["MouseButtonDown",{
_this spawn {
ClicksPerSecond = ClicksPerSecond + 1; clickingstarted = true; 
if(ClicksPerSecond < 0) then {ClicksPerSecond = 0;}; 

//		hint format["CPS %1",ClicksPerSecond]; 
//	["Speedclicker erkannt","ZionHost-Sytem","red",false] call MSG_fnc_handle;
uisleep 1; ClicksPerSecond = ClicksPerSecond - 1; 
if(ClicksPerSecond >= 15 && clickingstarted) then { 
  clickingstarted = false;
  ["Speedclicker erkannt","ZionHost-Sytem","red",false] call MSG_fnc_handle;
  if((lastlogging + 20) < time) then { 
    lastLogging = time; 
	   0 call life_fnc_saveGear;
	  [0] call SOCK_fnc_updatePartial;
	endMission "AUTOCLICKER";
  };
};
if(ClicksPerSecond < 0) then {ClicksPerSecond = 0;};
}}];