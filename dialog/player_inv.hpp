class playerSettings {
    idd = playersys_DIALOG;
    name = "playerSettings";
    onLoad = "";
    onUnLoad = "";
    movingEnable = false;
    enableSimulation = false;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText
        {
            idc = -1;
            text = "";
            x = 0.1 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.8 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.698039};
        };
        class MainBackground: Life_RscText
        {
            idc = 2999;
            text = "";
            x = 0.1 * safezoneW + safezoneX;
            y = 0.244 * safezoneH + safezoneY;
            w = 0.8 * safezoneW;
            h = 0.512 * safezoneH;
            ColorBackground[] = {0,0,0,0.698039};
        };
        class Title: Life_RscText
        {
            idc = 5999;
            text = "$STR_PM_Title";
            x = 0.1 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.8 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0,0,0,0};
        };
        class moneyStatusInfo: Life_RscStructuredText
        {
            idc = 2015;
            text = "";
            x = 0.105 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.3 * safezoneW;
            h = 0.6 * safezoneH;
            ColorBackground[] = {0.784313,0.784313,0.784313,0};
        };
    };
    class controls {
        class PlayersName: Life_RscText
        {
            idc = carry_weight;
            text = "";
            x = 0.1 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.8 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0};
            ColorText[] = {1,1,1,1};
        };
        class itemHeader: Life_RscText
        {
            idc = 8999;
            text = "$STR_PM_cItems";
            x = 0.62 * safezoneW + safezoneX;
            y = 0.26 * safezoneH + safezoneY;
            w = 0.275 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class licenseHeader: Life_RscText
        {
            idc = 11999;
            text = "$STR_PM_Licenses";
            x = 0.336 * safezoneW + safezoneX;
            y = 0.26 * safezoneH + safezoneY;
            w = 0.275 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class moneySHeader: Life_RscText
        {
            idc = 14999;
            text = "$STR_PM_MoneyStats";
            x = 0.11 * safezoneW + safezoneX;
            y = 0.26 * safezoneH + safezoneY;
            w = 0.219 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class itemList: Life_RscListBox
        {
            idc = item_list;
            text = "";
            x = 0.62 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.275 * safezoneW;
            h = 0.3 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.588235};
            ColorText[] = {1,1,1,1};
        };
        class moneyEdit: Life_RscEdit
        {
            idc = 2018;
            text = "1";
            x = 0.12 * safezoneW + safezoneX;
            y = 0.42 * safezoneH + safezoneY;
            w = 0.18 * safezoneW;
            h = 0.03 * safezoneH;
            ColorBackground[] = {0.784313,0.784313,0.784313,0};
            ColorText[] = {1,1,1,1};
        };
        class NearPlayers: Life_RscCombo
        {
            idc = 2022;
            text = "";
            x = 0.12 * safezoneW + safezoneX;
            y = 0.46 * safezoneH + safezoneY;
            w = 0.18 * safezoneW;
            h = 0.03 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class moneyDrop: Life_RscButtonMenu
        {
            idc = 2001;
            text = "$STR_Global_Give";
            onButtonClick = "[] call life_fnc_giveMoney";
            x = 0.135 * safezoneW + safezoneX;
            y = 0.5 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.036 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class itemEdit: Life_RscEdit
        {
            idc = item_edit;
            text = "1";
            x = 0.62 * safezoneW + safezoneX;
            y = 0.61 * safezoneH + safezoneY;
            w = 0.275 * safezoneW;
            h = 0.03 * safezoneH;
            ColorBackground[] = {0.784313,0.784313,0.784313,0};
            ColorText[] = {1,1,1,1};
        };
        class iNearPlayers: Life_RscCombo
        {
            idc = 2023;
            text = "";
            x = 0.62 * safezoneW + safezoneX;
            y = 0.65 * safezoneH + safezoneY;
            w = 0.275 * safezoneW;
            h = 0.03 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class DropButton: Life_RscButtonMenu
        {
            idc = 2002;
            text = "$STR_Global_Give";
            onButtonClick = "[] call life_fnc_giveItem;";
            x = 0.765 * safezoneW + safezoneX;
            y = 0.7 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class UseButton: Life_RscButtonMenu
        {
            idc = ;
            text = "$STR_Global_Use";
            onButtonClick = "[] call life_fnc_useItem;";
            x = 0.62 * safezoneW + safezoneX;
            y = 0.7 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class RemoveButton: Life_RscButtonMenu
        {
            idc = 3000;
            text = "$STR_Global_Remove";
            onButtonClick = "[] call life_fnc_removeItem;";
            x = 0.475 * safezoneW + safezoneX;
            y = 0.7 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.380392,0.698039,0.882352,0.498039};
            ColorText[] = {1,1,1,1};
        };
        class ButtonClose: Life_RscButtonMenu
        {
            idc = 17999;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.1 * safezoneW + safezoneX;
            y = 0.76 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonSettings: Life_RscButtonMenu
        {
            idc = 20999;
            text = "$STR_Global_Settings";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.25625 * safezoneW + safezoneX;
            y = 0.76 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonMyGang: Life_RscButtonMenu
        {
            idc = 2011;
            text = "$STR_PM_MyGang";
            action = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.415656 * safezoneW + safezoneX;
            y = 0.76 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class Licenses_Menu: Life_RscControlsGroup
        {
            idc = 23999;
            text = "";
            x = 0.34 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.28 * safezoneW;
            h = 0.38 * safezoneH;
            ColorBackground[] = {0.784313,0.784313,0.784313,0};
            ColorText[] = {1,1,1,1};
        };
        class Life_Licenses: Life_RscStructuredText
        {
            idc = 2014;
            text = "";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 0.27 * safezoneW;
            h = 0.65 * safezoneH;
            ColorBackground[] = {0.784313,0.784313,0.784313,0};
            ColorText[] = {1,1,1,1};
        };
        class ButtonGangList: Life_RscButtonMenu
        {
            idc = 2012;
            text = "$STR_PM_WantedList";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.415656 * safezoneW + safezoneX;
            y = 0.76 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonKeys: Life_RscButtonMenu
        {
            idc = 2013;
            text = "$STR_PM_KeyChain";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.575656 * safezoneW + safezoneX;
            y = 0.76 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonCell: Life_RscButtonMenu
        {
            idc = 5014;
            text = "$STR_PM_CellPhone";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.735656 * safezoneW + safezoneX;
            y = 0.76 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonAdminMenu: Life_RscButtonMenu
        {
            idc = 2021;
            text = "$STR_PM_AdminMenu";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.25625 * safezoneW + safezoneX;
            y = 0.805 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class aapps_call: Life_RscButtonMenu
        {
            idc = 4111;
            text = "$STR_DC_dispatchcenter";
            onButtonClick = "0 call life_call_start";
            x = 0.575656 * safezoneW + safezoneX;
            y = 0.805 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonSyncData: Life_RscButtonMenu
        {
            idc = 26999;
            text = "$STR_PM_SyncData";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.1 * safezoneW + safezoneX;
            y = 0.805 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonPhone: Life_RscButtonMenu
        {
            idc = 29999;
            text = "Anrufen";
            onButtonClick = "call life_fnc_phoneInit;";
            x = 0.415656 * safezoneW + safezoneX;
            y = 0.805 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
        class ButtonRepair: Life_RscButtonMenu
        {
            idc = 500;
            text = "Reparieren";
            onButtonClick = "[] call toxic_fnc_repairSystem; closeDialog 0;";
            x = 0.735656 * safezoneW + safezoneX;
            y = 0.805 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
            ColorBackground[] = {0.098039,0.098039,0.098039,0.666666};
            ColorText[] = {1,1,1,1};
        };
    };
};
