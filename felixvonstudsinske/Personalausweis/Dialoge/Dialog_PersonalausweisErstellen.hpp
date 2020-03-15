class Dialog_PersonalausweisErstellen {
	idd = 8800;
	name = "Dialog_PersonalausweisErstellen";
	movingEnabled = 0;
	enableSimulation = 0;
	onKeyDown = "(((_this select 1) isEqualTo 1) || ((_this select 1) isEqualTo 219))";
	onLoad = "";
	onUnload = "";
	class controlsBackground {
		class HG: Life_RscText
		{
			idc = -1;

			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.75};
		};
		class HG_Ueberschrift: Life_RscText
		{
			idc = -1;

			text = "Personalausweis"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298905 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorBackground[] = {0.98,0.16,0.08,1};
		};
	};
	class controls {
		class Group_AndereDaten: Life_RscControlsGroup
		{
			idc = -1;
			class HScrollbar : Life_RscScrollBar { height = 0; };
			class VScrollbar : Life_RscScrollBar { autoScrollEnabled = 1; width = 0.025; };

			x = 0.29375 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.121 * safezoneH;
			class Controls
			{
				class Text_Mobilnummer: Life_RscText
				{
					idc = 8815;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					text = "Mobilfunknummer: Wird zugewiesen/erstellt, wenn der Personalausweis beantragt wurde"; //--- ToDo: Localize;
					font = "RobotoCondensed";
					x = 0.00515625 * safezoneW;
					y = 0.011 * safezoneH;
					w = 0.402187 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.4};
					tooltip = "Die Telefon-/Mobilfunknummer ist an deine Steam64ID gebunden und aendert sich nicht mit einer anderen Identitaet."; //--- ToDo: Localize;
				};
				class Text_Personalausweisnummer: Life_RscText
				{
					idc = 8818;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					text = "Personalausweisnummer: Wird nach Einreichen der Daten generiert."; //--- ToDo: Localize;
					font = "RobotoCondensed";
					x = 0.00515625 * safezoneW;
					y = 0.044 * safezoneH;
					w = 0.402187 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.4};
					tooltip = "Die Personalausweisnummer ist einmalig passend zu der auswaehlbaren Identitaet."; //--- ToDo: Localize;
				};
			};
		};
		class Knopf_Schliessen: Life_RscButtonMenu
		{
			idc = 2401;
			onButtonClick = "endmission 'perso_abbruch';";
			class Attributes {align = "center";};

			text = "ABBRECHEN"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {1,-1,-1,1};
		};
		class Text_PersoenlicheDaten: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Persoenliche Daten"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.93,0.47,0,1};
		};
		class Text_Profilname: Life_RscText
		{
			idc = 8801;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Mein Name:"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.3086 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class Text_Geburtsdatum: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Geburtsdatum, JJ MM TT:"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.3372 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Jahr: Life_RscCombo
		{
			idc = 8802;
			onLBSelChanged = "[] call life_fnc_PersoPruefenSchaltjahr;";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.3372 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class LB_Monat: Life_RscCombo
		{
			idc = 8803;
			onLBSelChanged = "[] call life_fnc_PersoPruefenSchaltjahr;";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.3372 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class LB_Tag: Life_RscCombo
		{
			idc = 8804;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.3372 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class Text_Staatsangehoerigkeiten: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Staatsangehoerigkeit:"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.3636 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Staatsangehoerigkeiten: Life_RscCombo
		{
			idc = 8805;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.3636 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,1};
		};
		class Text_Augenfarbe: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Augenfarbe:"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.3922 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Augenfarbe: Life_RscCombo
		{
			idc = 8806;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.3922 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class Text_Koerpergroesse: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Koerpergroesse:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.4208 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class Text_Koerpergewicht: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Koerpergewicht:"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.4208 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Koerpergroesse: Life_RscCombo
		{
			idc = 8807;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.4208 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,1};
		};
		class LB_Koerpergewicht: Life_RscCombo
		{
			idc = 8808;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.4208 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,1};
		};
		class Text_Anschrift: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Anschrift:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.4494 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class Text_Wohnort: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Wohnort:"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Wohnort: Life_RscCombo
		{
			idc = 8809;
			onLBSelChanged = "_this call life_fnc_PersoWohnortAuswahl;";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class Text_Strasse: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Strasse:"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Strasse: Life_RscCombo
		{
			idc = 8810;
			onLBSelChanged = "_this call life_fnc_PersoStrasseAuswahl;";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,1};
		};
		class Text_HausNr: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Hausnummer:"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.5352 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_HausNr: Life_RscCombo
		{
			idc = 8811;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.5352 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class Portrait: Life_RscPicture
		{
			idc = 8812;

			text = "#(argb,8,8,3)color(1,1,1,1)";
			font = "RobotoCondensed";
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.242 * safezoneH;
		};
		class Text_WeitereDaten: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			font = "RobotoCondensed";
			text = "Andere Daten"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.93,0.47,0,1};
		};
		class Knopf_Vorschau: Life_RscButtonMenu
		{
			idc = 8817;
			onButtonClick = "[] spawn life_fnc_PersoErstellenFortfahren";
			class Attributes {align = "center";};

			font = "RobotoCondensed";
			text = "FORTFAHREN"; //--- ToDo: Localize;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0.5,0,1};
			tooltip = "Es folgt nun ein Muster, wie der Personalausweis fertiggestellt aussehen wuerde. Manche angegebenen Daten sind auf Grund von statistischer Analyse nicht auf dem Personalausweis ersichtlich. Nur fuer das Leben relevante Daten sowie zum Kommunizieren werden dargestellt."; //--- ToDo: Localize;
		};
		class Anzeige_Info: Life_RscStructuredText
		{
			idc = 99999;
			sizeEx = 0.035;
			font = "RobotoCondensed";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Text_Geschlecht: Life_RscText
		{
			idc = -1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Geschlecht:"; //--- ToDo: Localize;
			font = "RobotoCondensed";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.5616 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
		};
		class LB_Geschlecht: Life_RscCombo
		{
			font = "RobotoCondensed";
			idc = 8816;
			onLBSelChanged = "_this call life_fnc_PersoGeschlechtswahl;";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.5616 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,1};
		};
		class LB_Gesicht: Life_RscCombo
		{
			font = "RobotoCondensed";
			onLBSelChanged = "_this call life_fnc_PersoErstellenBildwahl;";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			idc = 2112;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.5616 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};