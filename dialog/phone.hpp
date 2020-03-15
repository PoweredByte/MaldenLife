/*
	File: phone.hpp
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/


class Life_RscPhoneListNBox {
    style = 16;
    type = 102;
    shadow = 0;
    font = "PuristaMedium";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    color[] = {0.95,0.95,0.95,1};
    colorText[] = {1,1,1,1.0};
	colorBackground[] = {0.2, 0.2, 0.2, 0.6};
    colorDisabled[] = {1,1,1,0.25};
    colorScrollbar[] = {0.95,0.95,0.95,1};
    colorSelect[] = {0,0,0,1};
    colorSelect2[] = {0,0,0,1};
    colorSelectBackground[] = {0.8,0.8,0.8,1};
    colorSelectBackground2[] = {1,1,1,0.5};
    soundSelect[] = {"",0.1,1};
    soundExpand[] = {"",0.1,1};
    soundCollapse[] = {"",0.1,1};
	colorPicture[] = {1,1,1,1};
    colorPictureSelected[] = {1,1,1,1};
    colorPictureDisabled[] = {1,1,1,1};
    period = 1.2;
    maxHistoryDelay = 0.5;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    rowHeight = 0.04;
	columns[] = {0, 0.4, 0.8};
    drawSideArrows = 0;
    idcLeft = -1;
    idcRight = -1;
    class ListScrollBar: Life_RscScrollBar{};
    class ScrollBar: Life_RscScrollBar{};
};

class life_phone_dialog {
	idd = 987654;
	name = "life_phone_dialog";
	movingEnabled = 0;
	enableSimulation = 1;
	
	class controlsBackground
	{
		class Background: Life_RscText {
            idc = -1;
            x = 0.29375 * safezoneW + safezoneX;
			y = 0.2602 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.495 * safezoneH;
			colorBackground[] = {0.3, 0.3, 0.3, 0.8};
        };
		
		class Headerbackground: Life_RscText {
            idc = -1;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.1546 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.099 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.7};
        };
		
		class NumbersBackground : Life_RscText {
			idc = -1;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.253 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
		};
		
		class Logo: Life_RscPicture {
			idc = -1;
			text = "Textures\phonehead.paa";
			x = 0.326748 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.088 * safezoneH;
		};
		
		class Title : Life_RscStructuredText {
			idc = -1;
			text = "<t valign='middle' align='center' shadow='1' shadowColor='#000000' size='3.3' >Das Telefonbuch</t>";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 5)";
			x = 0.387591 * safezoneW + safezoneX;
			y = 0.1634 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.077 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class Number : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.1'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='0.8' >Telefonnummer:&#160;&#160;</t>";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
		};
		
		class Name : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.1'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='0.8' >Anzeigename:&#160;&#160;</t>";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
		};
		
		class ChannelsText : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.3'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='1.1' >Frei Leitungen:&#160;&#160;</t>";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class OwnNumberText : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.3'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='1.1' >Deine Nummer:&#160;&#160;</t>";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class WaitTimeText : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.3'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='1.1' >Nächster Anruf in:&#160;&#160;</t>";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class Ringtone : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.1'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='0.8' >Klingelton&#160;&#160;</t>";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
		};
		
		class Sound : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.1'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='0.8' >Sound&#160;&#160;</t>";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
		};
		
		class Flymode : Life_RscStructuredText {
			idc = -1;
			text = "<t size='0.1'>&#160;</t><br/><t align='center' shadow='1' shadowColor='#000000' size='0.8' >Flugmodus&#160;&#160;</t>";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
		};
	};
	
	class controls
	{
		class Numbers : Life_RscPhoneListNBox {
			idc = 9876541;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.253 * safezoneH;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			colorBackground[] = {0.2, 0.2, 0.2, 0.6};
			onLBDblClick = "_this call life_fnc_phoneBlock;";
		};
		
		class OwnNumber : Life_RscStructuredText {
			idc = 9876542;
			text = "Error";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class Channels : Life_RscStructuredText {
			idc = 9876543;
			text = "Error";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class WaitTime : Life_RscStructuredText {
			idc = 9876549;
			text = "Error";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
		};
		
		class NumberField: Life_RscEdit {
			idc = 9876544;
			text = "";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.8};
		};
		
		class NameField: Life_RscEdit {
			idc = 9876545;
			text = "";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.8};
		};
		
		class RingtoneCombo: Life_RscCombo {
			idc = 9876546;
			text = "";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.8};
			onLBSelChanged = "profileNamespace setVariable ['phone_ringtone', (_this select 0) lbData (_this select 1)]; saveProfilenamespace;";
		};
		
		class SoundCheck: Life_Checkbox {
			idc = 9876547;
			text = "";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
			onCheckedChanged = "_check = false; if((_this select 1) isEqualTo 1) then {_check = true;}; profileNamespace setVariable ['phone_sound', _check]; saveProfilenamespace;";
		};
		
		class FlugmodusCheck: Life_Checkbox {
			idc = 9876548;
			text = "";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
			onCheckedChanged = "_check = false; if((_this select 1) isEqualTo 1) then {_check = true;}; profileNamespace setVariable ['phone_flymode', _check]; saveProfilenamespace; player setVariable ['phone_flymode', _check, true];";
		};
		
		class CallButton : Life_RscButtonMenu {
			idc = -1;
			text = "Anrufen";
			onButtonClick = "0 spawn life_fnc_phoneCall;";
			tooltip = "Ausgewählte Person anrufen";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			type = 1;
            style = "0x02";
            colorBackground[] = {1,1,1,1};
            colorBackgroundDisabled[] = {1,1,1,1};
            colorBackgroundActive[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
            offsetX = 0.003;
            offsetY = 0.003;
            offsetPressedX = 0.002;
            offsetPressedY = 0.002;
            colorShadow[] = {0,0,0,1};
            colorBorder[] = {0,0,0,0};
            borderSize = 0.008;
		};
		
		class CloseButton : Life_RscButtonMenu {
			idc = -1;
			text = "Schließen";
			onButtonClick = "closeDialog 0;";
			tooltip = "Telefonbuch schließen";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			type = 1;
            style = "0x02";
            colorBackground[] = {1,1,1,1};
            colorBackgroundDisabled[] = {1,1,1,1};
            colorBackgroundActive[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
            offsetX = 0.003;
            offsetY = 0.003;
            offsetPressedX = 0.002;
            offsetPressedY = 0.002;
            colorShadow[] = {0,0,0,1};
            colorBorder[] = {0,0,0,0};
            borderSize = 0.008;
		};
		
		class RemoveButton : Life_RscButtonMenu {
			idc = -1;
			text = "Entfernen";
			onButtonClick = "call life_fnc_phoneRemove;";
			tooltip = "Ausgewählte Person entfernen";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			type = 1;
            style = "0x02";
            colorBackground[] = {1,1,1,1};
            colorBackgroundDisabled[] = {1,1,1,1};
            colorBackgroundActive[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
            offsetX = 0.003;
            offsetY = 0.003;
            offsetPressedX = 0.002;
            offsetPressedY = 0.002;
            colorShadow[] = {0,0,0,1};
            colorBorder[] = {0,0,0,0};
            borderSize = 0.008;
		};
		
		class PositionButton : Life_RscButtonMenu {
			idc = 9876550;
			text = "Handy orten";
			onButtonClick = "0 spawn life_fnc_phonePlayerSearch;";
			tooltip = "Positionsanbfrage einer Person";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			type = 1;
            style = "0x02";
            colorBackground[] = {1,1,1,1};
            colorBackgroundDisabled[] = {1,1,1,1};
            colorBackgroundActive[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
            offsetX = 0.003;
            offsetY = 0.003;
            offsetPressedX = 0.002;
            offsetPressedY = 0.002;
            colorShadow[] = {0,0,0,1};
            colorBorder[] = {0,0,0,0};
            borderSize = 0.008;
		};
		
		class AddButton : Life_RscButtonMenu {
			idc = -1;
			text = "Hinzufügen";
			onButtonClick = "call life_fnc_phoneAdd;";
			tooltip = "Eingabe Nummer/Name hinzufügen";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			type = 1;
            style = "0x02";
            colorBackground[] = {1,1,1,1};
            colorBackgroundDisabled[] = {1,1,1,1};
            colorBackgroundActive[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
            offsetX = 0.003;
            offsetY = 0.003;
            offsetPressedX = 0.002;
            offsetPressedY = 0.002;
            colorShadow[] = {0,0,0,1};
            colorBorder[] = {0,0,0,0};
            borderSize = 0.008;
		};
		
	};
	
};