/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
//    [] execVM "briefing.sqf"; //Load Briefing
[] execVM "ZionHost\teargas.sqf";
waitUntil {time > 0};
enableEnvironment [false,true];
0 setFog 0;
forceWeatherChange;
999999 setFog 0;
};

[] execVM "KRON_Strings.sqf";
[] execVM "ZionHost\ObjektRespawn.sqf";
[] execVM "ZionHost\Abschleppen.sqf";
[] execVM "ZionHost\sperrzonensystem.sqf";
StartProgress = true;