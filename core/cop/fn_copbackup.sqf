if(playerside != west)exitWith{};
 life_sos_cooldown = true;
  remoteExec ["life_fnc_broadcast",west];
[format["<t align='center' font='PuristaBold' size='2' color='#ff0000'>SOS-Alarm</t><br/><br/><t align='center' size='1.5'>%3<br/><br/>%1 hat den Notfallknopf betätigt!<br/><br/>Position: %2<br/><br/>%3</t>",player getVariable["realname",name player], mapGridPosition player,'****************************'],"ZionHost-System","red",false] remoteExec ["MSG_fnc_handle",west];
 ["sosalarm"] remoteExec["life_fnc_playSound", west];
 [player]remoteExec["life_fnc_sosMarker",west];
 []spawn {  
    sleep 90;
    hint "Deine SOS-Markierung wurde gelöscht!";
    sleep 60;
    life_sos_cooldown = false;
 };