class Dialog_PersonalausweisAuswahl {
	idd = 66500;
	name = "Dialog_PersonalausweisAuswahl";
	movingEnabled = 0;
	enableSimulation = 0;
	onKeyDown = "(((_this select 1) isEqualTo 1) || ((_this select 1) isEqualTo 219))";
	onLoad = "";
	onUnload = "";
	class controlsBackground {
		class HG: Life_RscText
		{
			idc = 1000;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.308 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class HG_Infos: Life_RscText
		{
			idc = 1001;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.187 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class HG_Text_Ueberschrift: Life_RscText
		{
			idc = 1002;
			text = "Personalausweis auswaehlen"; //--- ToDo: Localize;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.3108 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
	};
	class controls {
		class Knopf_Abbrechen: Life_RscButtonMenu
		{
			onButtonClick = "endMission ""end1"";";
			class Attributes {align = "center";};

			idc = 2400;
			text = "ABBRECHEN"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,-1,-1,1};
			font = "RobotoCondensed";
		};
		class Dropdown_Loadouts: Life_RscCombo
		{
			onLBSelChanged = "_this call life_fnc_PersoLBWahl;";

			idc = 2100;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.022 * safezoneH;
			font = "RobotoCondensed";
			colorBackground[] = {0,0,0,0.95};
		};
		class Group: Life_RscControlsGroup
		{
			class HScrollbar : Life_RscScrollBar { height = 0; };
			class VScrollbar : Life_RscScrollBar { autoScrollEnabled = 1; width = 0.025; };
			idc = -1;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.187 * safezoneH;
			class Controls
			{
				class Anzeige_Infos: Life_RscStructuredText
				{
					text = "";
					idc = 1100;
					x = 2.42796e-007 * safezoneW;
					y = 0 * safezoneH;
					w = 0.309375 * safezoneW;
					h = 0.187 * safezoneH;
					font = "RobotoCondensed";
				};
			};
		};
		class Knopf_Waehlen: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_PersoAusgewaehlt;";
			class Attributes {align = "center";};

			idc = 2401;
			text = "SPIELEN"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Mit selektierter Auswahl spielen."; //--- ToDo: Localize;
			font = "RobotoCondensed";
		};
		class Knopf_PersoPlus: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_PersoErstellen;";
			class Attributes {align = "center";};

			idc = 2402;
			text = "Neuer Personalausweis"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Neue Identitaet/Neuen Personalausweis erstellen."; //--- ToDo: Localize;
			font = "RobotoCondensed";
		};
		class Knopf_Adminzugang: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_PersoGeneriereAdminausweis;";
			class Attributes {align = "center";};

			idc = 2403;
			text = "Adminzugang"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,1,0.3,1};
			tooltip = "Zufaelligen Ausweis erstellen."; //--- ToDo: Localize;
			font = "RobotoCondensed";
		};
		class Knopf_Loeschen: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_PersoLoeschen;";
			class Attributes {align = "center";};

			idc = 2404;
			text = "LOESCHEN"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Selektierten Ausweis loeschen."; //--- ToDo: Localize;
			font = "RobotoCondensed";
		};
		class Knopf_NameAnpassen: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_PersoNameAendern;";
			class Attributes {align = "center";};

			idc = 2405;
			text = "NAME ANPASSEN"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Name der ausgewaehlten Identitaet anpassen."; //--- ToDo: Localize;
			font = "RobotoCondensed";
		};
	};
};