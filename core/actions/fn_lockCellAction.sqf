/*
 File: fn_lockCellAction.sqf
 Author: powerafro2
 Description:
 Lassen Türen versperren und das können nur Cops öffnen.
*/
private["_cell","_caller","_mode","_curState"];
_cell = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_caller = [_this,1,objNull,[objNull]] call BIS_fnc_param;
_mode = [_this,3,"",[""]] call BIS_fnc_param;
if(isNull _cell OR isNull _caller OR _mode == "") exitWith {};
_curState = _cell getVariable["locked",true];




if((_mode == "lock") && (_curState)) exitWith {hint "Diese Tür wurde schon geschlossen!";};
if((_mode == "unlock") && (!_curState)) exitWith {hint "Diese Tür wurde schon geöffnet!";};




switch (_mode) do {
 case "lock": {
 if(!_curState) then {
 _cell setVariable["locked",true,true];
 _cell animate["door_1_rot",0];
 };
 };
 case "unlock": {
 if(_curState) then {
 _cell setVariable["locked",false,true];
 _cell animate["door_1_rot",1];
 };
 };
};
