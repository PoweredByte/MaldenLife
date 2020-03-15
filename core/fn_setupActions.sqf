/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

    //Civilian
    case civilian: {
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis zeigen</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis ansehen</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis ansehen</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];
        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
		//Suicide alahsnackbar
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Selbstmordweste aktivieren</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
	};
    
    //Cops
    case west: {
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis zeigen</t>",{[player, switch (playerSide) do {case west:{call life_coplevel}; case independent:{call life_medicLevel}; case east:{call life_adaclevel};},([] call life_fnc_DienstausweisLizenzen)] remoteExec ["life_fnc_DienstausweisZeigen",cursorObject];},"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis zeigen</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis ansehen</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis ansehen</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];
		life_actions pushBack (player addAction["Gegenstände entfernen",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']);
	};
    
    //EMS
    case independent: {
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis zeigen</t>",{[player, switch (playerSide) do {case west:{call life_coplevel}; case independent:{call life_medicLevel}; case east:{call life_adaclevel};},([] call life_fnc_DienstausweisLizenzen)] remoteExec ["life_fnc_DienstausweisZeigen",cursorObject];},"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis zeigen</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis ansehen</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis ansehen</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];
	};
	
	case east: {
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis zeigen</t>",{[player, switch (playerSide) do {case west:{call life_coplevel}; case independent:{call life_medicLevel}; case east:{call life_adaclevel};},([] call life_fnc_DienstausweisLizenzen)] remoteExec ["life_fnc_DienstausweisZeigen",cursorObject];},"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis zeigen</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Personalausweis ansehen</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Dienstausweis ansehen</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3 && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];	
	};
};

[] spawn {
 waitUntil {!isNil "life_adminlevel"};
 if ((call life_adminlevel) > 0) then {life_actions = life_actions + [player addAction["<t color='#FF0000'>Serverteamausweis zeigen</t>",{hint format["Du zeigst %3 (%1, %2) deinen Serverteamausweis.",getPlayerUID cursorObject, side cursorObject, name cursorObject]; [getPlayerUID player,profileName] remoteExec ["life_fnc_ServerteamZeigen",cursorObject];},"",0,false,false,"",'(call life_adminlevel) > 0 && (isPlayer cursorObject) && (alive cursorObject) && cursorObject isKindOf "Man"']];};
 };
 life_actions = life_actions + [player addAction["Ausweise ausblenden",{("rsc_Serverteamausweis" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; ("dienstausweis" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; ("perso" call BIS_fnc_rscLayer) cutText ["","PLAIN"];},"",1,false,true,"",'(!(isNull (uiNameSpace getVariable ["ui_Personalausweis",displayNull])) || !(isNull (uiNameSpace getVariable ["ui_Dienstausweis",displayNull])) || !(isNull (uiNameSpace getVariable ["ui_Serverteamausweis",displayNull]))) && alive player']];