scriptName "stig_performanceDiagnostics_mainThread";
if(!(isNil "stig_pd_active"))exitWith{diag_log "Performance Diagnostic was not started because it is already active.";};
stig_pd_active = true;
stig_pd_toWrite = [];
hint "Starting Performance Diagnostic Report";
/*
Maybe TODO for advanced stuff in profiling build

captureFrame
captureFrameToFile
captureSlowFrame

*/

//How many frames pass until a new threads gets executed? Test 10 times and take worst value.
_testThreadDelay = {
 ["stig_performanceDiagnostics", "onEachFrame", 
 {
 //Spawn thread, wait until finished, check how many frames it took
 if(isNil "stig_pd_threadDelayActive")then{
 //Spawn new thread
 stig_pd_threadDelayActive = true;
 stig_pd_startData = [diag_frameNo,diag_tickTime];
 stig_pd_thread = 0 spawn {
 scriptName "stig_performanceDiagnostics_testThread";
 stig_pd_endData = [diag_frameNo,diag_tickTime];
 };
 diag_log (str(isNil "stig_pd_thread"));
 } else {
 //Check if finished if thread is running
 if(scriptDone stig_pd_thread)then{
 stig_pd_threadDelayActive = nil;
 //_result format: [frames skipped, time skipped] from thread-spawning until thread execution
 _result = [(stig_pd_endData select 0)-(stig_pd_startData select 0),(stig_pd_endData select 1)-(stig_pd_startData select 1)];
 //add to main thread array holding the data of the tests
 stig_pd_threadDelayData pushBack _result;
 ["stig_performanceDiagnostics", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
 };
 };
 },[]
 ] call BIS_fnc_addStackedEventHandler;
};
_fpsmin = diag_fpsMin;
_fps = diag_fps;
stig_pd_threadDelayData = [];
hint "Testing thread delay";
for "_i" from 0 to 9 do
{
 _i = (count stig_pd_threadDelayData);
 systemChat (str _i);
 call _testThreadDelay;
 sleep 0.5;
 waitUntil {_i + 1 == (count stig_pd_threadDelayData)};
};

_worstThreadDelayValues = stig_pd_threadDelayData select 0;
{
 if((_x select 0) > (_worstThreadDelayValues select 0))then
 {
 _worstThreadDelayValues set [0,_x select 0];
 };
 if((_x select 1) > (_worstThreadDelayValues select 1))then
 {
 _worstThreadDelayValues set [1,_x select 1];
 };
} forEach stig_pd_threadDelayData;

_sepString = "#########################################################################";
_log = {
 if (typeName _this != "STRING") then {
 _this = str _this; //make everything I put into this function a string
 };
 stig_pd_toWrite pushBack ("# " + _this);
};
_sep = {stig_pd_toWrite pushBack _sepString};
hint "Saving data";
call _sep;
"Performance Diagnostic Report Script by Stig (v1)" call _log;
call _sep;
"START OF REPORT" call _log;
call _sep;
"BASIC INFORMATION:" call _log;
call _sep;
("Game Version Information: " + (str(productVersion))) call _log;
("Current Machine Role: " + (call BIS_fnc_getNetMode)) call _log;
[serverName,worldName,missionName] call _log;
("Entities: " + (str(count(entities "")))) call _log;
if(isMultiplayer)then{
 _players = allPlayers - entities "HeadlessClient_F";
 ("Players: "+(str count _players)+" - Headless Clients: "+(str((count allPlayers) - (count _players)))) call _log;
};
call _sep;
"SCHEDULER WORKLOAD:" call _log;
call _sep;
("FPS: " + (str _fps) + " (average over last 16 frames)") call _log;
("FPSmin: " + (str _fpsmin) + " (calculated from the longest of last 16 frames)") call _log;
("Thread delay: [" + (str (_worstThreadDelayValues select 0)) + " frames / "+(str(_worstThreadDelayValues select 1))+" seconds] (how many frames/time is skipped until a new thread starts code execution)") call _log;
_currentScripts = diag_activeSQFScripts;
("SQF: " + (str(count(_currentScripts)))) call _log;
{
 (" [LINE "+(str(_x select 3))+"] - " + (_x select 0) + " ("+(_x select 1)+")") call _log; 
} forEach _currentScripts;
_currentScripts = diag_activeSQSScripts;
("SQS: " + (str(count(_currentScripts)))) call _log;
{
 (" [LINE "+(str(_x select 3))+"] - " + (_x select 0) + " ("+(_x select 1)+")") call _log; 
} forEach _currentScripts;
_currentScripts = diag_activeMissionFSMs;
("MissionFSM: " + (str(count(_currentScripts)))) call _log;
{
 (" [STATE >"+(_x select 1)+"<] - " + (_x select 0)) call _log; 
} forEach _currentScripts;
call _sep;
"END OF REPORT" call _log;
call _sep;

["stig_performanceDiagnostics_writer", "onEachFrame", 
 {
 ["stig_performanceDiagnostics_writer", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
 { diag_log _x } forEach stig_pd_toWrite; //write to the rpt log without interuption >> unscheduled
 stig_pd_toWrite = nil;
 hint "Performance Diagnostic Report results were written to the RPT log file";
 }
] call BIS_fnc_addStackedEventHandler;
stig_pd_active = nil;