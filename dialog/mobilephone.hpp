/*
	File: mobilephone.hpp
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/

class life_mobilephone_dialog {
	idd = 9876;
	name = "life_mobilephone_dialog";
	onLoad = "uiNamespace setVariable ['life_mobilephone_dialog',_this select 0]";
	movingEnabled = 0;
	enableSimulation = 1;
	duration = 10e10;
    fadein = 0;
    fadeout = 0;
    objects[] = {};
	
	class controlsBackground {};
	
	class controls
	{
		class Phone: Life_RscPicture {
			idc = 98764;
			text = "Textures\phone.paa";
			x = 0.783594 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.495 * safezoneH;
		};
		
		class PhoneText: Life_RscStructuredText {
			idc = 98761;
			text = "";
			x = 0.881562 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.121 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0, 0, 0, 1};
		};
		
		class LeftText: Life_RscStructuredText {
			text = "";
            idc = 98762;
            x = 0.873312 * safezoneW + safezoneX;
			y = 0.7508 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;		
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
        };
		
		class RightText: Life_RscStructuredText {
			text = "";
            idc = 98763;
			x = 0.941376 * safezoneW + safezoneX;
			y = 0.7508 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
        };
	};
};