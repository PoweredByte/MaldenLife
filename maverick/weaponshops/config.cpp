/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "zionhost_v_money835";								//--- Cash Variable
	cashSymbol = "€"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =                        "Shop Parameter ist leer!";
    msgInVehicle =                        "Du kannst nicht auf den Shop zugreifen während du in einem Fahrzeug sitzt!";
    msgShopExists =                        "Dieser Shop existiert nicht!";
    msgCondition =                        "Keine Zugriffsrechte auf diesen Shop!";
    msgCashOnHand =                        "Geld auf der Hand  - %1%2";
    msgCartTotal =                        "Dein Konto - %1%2";
    msgInfoTooltip =                    "--> Halte die Linkemaustaste während du deine Mausbewegst um die deine Waffe zu bewegen.\n--> Doppelklick auf ein Item im Warenkorb um es zu entfernen.\n--> Benutze die 'Speichern' Taste um die Waffe in der Hand mit der gekauften zu ersetzen.";
    msgInfoTooltip2 =                     "--> Doppelklick auf ein Item im Warenkorb um es zu entfernen.\n--> Benutze die 'Speichern' Taste um die Waffe in der Hand mit der gekauften zu ersetzen..";
    msgEmptyShop =                         "Nichts gefunden...";
    msgInfoText    =                        "<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
    msgCartFull    =                        "Warenkorb voll";
    msgCartEmpty =                        "Warenkorb leer";
    msgNotEnoughCash =                    "Nicht genug Geld für diesen Kauf";
    msgOverrideAlert =                    "Speichere um dein Gear zu behalten!";
    msgTransactionComplete =            "Einkauf abgeschlossen für %1%2";
    msgNotEnoughSpace =                     "Du hast keinen Platz für alle Items. Du hast nur für die bezahlt für die Platz hast!";
    msgClear =                            "Sauber";
    msgSearch =                            "Suchen";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class example_shop {
			title = "Example Shop"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"srifle_DMR_01_F", 500, "true", "Test"},
				{"srifle_EBR_F", 600, "true", "EBR"},
				{"launch_RPG32_F", 500, "true", ""},
				{"srifle_LRR_F", 600, "true", ""},
				{"hgun_Pistol_heavy_01_MRD_F", 1300, "true", ""}
			};

			magazines[] = {
				{"10Rnd_762x54_Mag", 10, "true", "Test Mag"},
				{"20Rnd_762x51_Mag", 20, "true", "EBR Mag"}
			};

			attachments[] = {
				{"optic_SOS", 50, "true", "Test Scope"},
				{"muzzle_snds_B", 1500, "true", ""}
			};

			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles", 100, "true", ""}, //--- NV goggles won't be shown on preview
				{"U_O_GhillieSuit", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};

		class gun {
			title = "Waffenladen"; //--- Title of Shop
			condition = "license_civ_gun"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				{ "hgun_Rook40_F", 6500,"true", "" },
				{ "hgun_Pistol_01_F", 7000,"true", "" }, //Apex DLC
				{ "hgun_Pistol_heavy_02_F", 9850,"true", ""  },
				{ "hgun_ACPC2_F", 11500, "true", ""  },
				{ "SMG_05_F", 18000, "true", ""  }, //Apex DLC
				{ "hgun_PDW2000_F",20000, "true", ""  }
			};
			magazines[] = {
				{ "16Rnd_9x21_Mag", 20, "true", ""},
				{ "6Rnd_45ACP_Cylinder", 20, "true", ""},
				{ "9Rnd_45ACP_Mag", 20, "true", ""},
				{ "30Rnd_9x21_Mag", 20, "true", ""},
				{ "30Rnd_9x21_Mag_SMG_02", 20, "true", ""},
				{ "10Rnd_9x21_Mag", 20, "true", ""}
			};
			attachments[] = {
				{ "acc_flashlight_pistol", 1500, "true", ""},//Pistol Flashlight
				{ "optic_ACO_grn_smg", 1500, "true", ""}
			};
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles", 100, "true", ""}, //--- NV goggles won't be shown on preview
				{"U_O_GhillieSuit", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};

		class schwarzmarkt {
			title = "Mohameds Schwarzmarkt"; //--- Title of Shop
			condition = "license_civ_schwarzmarkt"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart
			weapons[] = {
				{ "arifle_TRG20_F",25000,"true", "" },
				{ "arifle_Katiba_F",30000,"true", "" },
				{ "srifle_DMR_01_F",50000,"true", "" },
				{ "arifle_SDAR_F",20000, "true", "" },
				{ "srifle_EBR_F",20000,"true", "" },
				{ "srifle_DMR_06_camo_F",20000, "true", "" },
				{ "arifle_AK12_F",20000,"true", "" },
				{ "arifle_AKM_F",20000,"true", "" },
				{ "srifle_DMR_02_F",250000000,"true", "" },
				{ "srifle_DMR_02_camo_F",250000000,"true", "" },
				{ "srifle_DMR_02_sniper_F",250000000,"true", "" },
				{ "SMG_01_F",20000000, "true", "" },
				{ "srifle_DMR_03_F",20000,"true", "" },
				{ "srifle_LRR_camo_F",70000000,"true", "" },
				{ "srifle_LRR_tna_F",70000000,"true", "" },
				{ "arifle_MXC_F",20000,"true", "" },
				{ "arifle_RPK12_F",20000,"true", "" },
				{ "arifle_MXC_khk_F",20000,"true", "" },
				{ "arifle_MX_F",20000,"true", "" },
				{ "arifle_MX_khk_F",20000,"true", "" },
				{ "arifle_MXM_F",20000,"true", "" },
				{ "arifle_MXM_khk_F",20000,"true", "" },
				{ "launch_RPG7_F",1000000000,"true", "" },
				{ "LMG_Mk200_F",400000000,"true", "" },
				{ "arifle_CTARS_blk_F",7500,"true", "" },
				{ "arifle_CTARS_hex_F",7500,"true", "" },
				{ "arifle_CTARS_ghex_F",7500,"true", "" },
				{ "LMG_Zafir_F",500000000,"true", "" },
				{ "arifle_MX_SW_khk_F",20000000,"true", "" },
				{ "arifle_MX_SW_pointer_F",20000000,"true", "" }
			};
			magazines[] = {
				{ "30Rnd_556x45_Stanag", 20, "true", ""},
				{ "30Rnd_65x39_caseless_green", 20, "true", ""},
				{ "10Rnd_762x54_Mag", 20, "true", ""},
				{ "30Rnd_9x21_Mag", 20, "true", ""},
				{ "20Rnd_762x51_Mag", 20, "true", ""},
				{ "7Rnd_408_Mag", 20, "true", ""},
				{ "200Rnd_65x39_cased_Box", 20, "true", ""},
				{ "200Rnd_65x39_cased_Box_Tracer", 20, "true", ""},
				{ "150Rnd_762x54_Box", 20, "true", ""},
				{ "150Rnd_762x54_Box_Tracer", 20, "true", ""},
				{ "30Rnd_762x39_Mag_F", 20, "true", ""},
				{ "100Rnd_580x42_Mag_Tracer_F", 20, "true", ""},
				{ "30Rnd_762x39_Mag_Green_F", 20, "true", ""},
				{ "30Rnd_762x39_Mag_Tracer_F", 20, "true", ""},
				{ "10Rnd_338_Mag", 20, "true", ""},
				{ "30Rnd_45ACP_Mag_SMG_01", 20, "true", ""},
				{ "75rnd_762x39_AK12_Mag_F", 20, "true", ""},
				{ "30Rnd_65x39_caseless_mag", 20, "true", ""},
				{ "30Rnd_65x39_caseless_mag_Tracer", 20, "true", ""},
				{ "100Rnd_65x39_caseless_mag", 20, "true", ""},
				{ "100Rnd_65x39_caseless_mag", 20, "true", ""},
				{ "30Rnd_762x39_AK12_Mag_F", 20, "true", ""},
				{ "RPG7_F",250000000, "true", ""},
				{ "RPG32_F",250000000, "true", "" },
				{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", 20, "true", ""}
			};
			attachments[] = {
				{ "optic_ACO_grn", 7500, "true", ""},
				{ "optic_Holosight", 7500, "true", ""},
				{ "optic_Hamr", 7500, "true", ""},
				{ "muzzle_snds_H", 7500, "true", ""},
				{ "muzzle_snds_L", 7500, "true", ""},
				{ "muzzle_snds_M", 7500, "true", ""},
				{ "optic_Arco", 7500, "true", ""},
				{ "optic_SOS", 7500, "true", ""},
				{ "acc_flashlight", 7500, "true", ""},
				{ "optic_MRCO", 7500, "true", ""},
				{ "optic_DMS", 7500, "true", ""},
				{ "optic_LRPS", 7500, "true", ""},
				{ "optic_AMS_snd", 7500, "true", ""},
				{ "optic_KHS_old", 7500, "true", ""},
				{ "bipod_01_F_snd", 7500, "true", ""},
				{ "bipod_01_F_blk", 7500, "true", ""},
				{ "bipod_01_F_mtp", 7500, "true", ""},
				{ "bipod_02_F_blk", 7500, "true", ""},
				{ "bipod_02_F_tan", 7500, "true", ""},
				{ "bipod_02_F_hex", 7500, "true", ""},
				{ "muzzle_snds_B", 7500, "true", ""},
				{ "muzzle_snds_H_MG", 7500, "true", ""},
				{ "muzzle_snds_338_sand", 7500, "true", ""},
				{ "muzzle_snds_338_green", 7500, "true", ""},
				{ "muzzle_snds_338_black", 7500, "true", ""},
				{ "optic_AMS", 7500, "true", ""},
				{ "muzzle_snds_H_khk_F", 7500, "true", ""},
				{ "muzzle_snds_H_snd_F", 7500, "true", ""},
				{ "muzzle_snds_m_khk_F", 7500, "true", ""},
				{ "muzzle_snds_m_snd_F", 7500, "true", ""},
				{ "muzzle_snds_58_blk_F", 7500, "true", ""},
				{ "optic_AMS", 7500, "true", ""},
				{ "muzzle_snds_58_wdm_F", 7500, "true", ""},
				{ "muzzle_snds_58_ghex_F", 7500, "true", ""},
				{ "muzzle_snds_58_hex_F ", 7500, "true", ""},
				{ "optic_KHS_blk", 7500, "true", ""},
				{ "muzzle_snds_B_khk_F", 7500, "true", ""},
				{ "muzzle_snds_B_snd_F", 7500, "true", ""},
				{ "bipod_03_F_blk", 7500, "true", ""},
				{ "muzzle_snds_65_TI_blk_F", 7500, "true", ""},
				{ "muzzle_snds_65_TI_hex_F", 7500, "true", ""},
				{ "muzzle_snds_65_TI_ghex_F", 7500, "true", ""},
				{ "muzzle_snds_H_MG_blk_F", 7500, "true", ""},
				{ "muzzle_snds_H_MG_khk_F", 7500, "true", ""},
				{ "muzzle_snds_m_khk_F", 7500, "true", ""},
				{ "muzzle_snds_65_TI_hex_F", 7500, "true", ""},
				{ "optic_ERCO_snd_F", 7500, "true", ""},
				{ "acc_flashlight", 7500, "true", ""}
			};
			items[] = {
				{ "Binocular", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "FirstAidKit", 50, "true", ""},
				{ "NVGoggles", 50, "true", ""}
			};
		};

		class rebel {
			title = "Rebellenmarkt"; //--- Title of Shop
			condition = "license_civ_rebel"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				{ "arifle_Katiba_F",20000, "true", ""  },
				{ "srifle_DMR_01_F",20000, "true", ""  },
				{ "arifle_SDAR_F",20000, "true", ""  },
				{ "srifle_EBR_F",20000, "true", ""  },
				{ "srifle_DMR_06_camo_F",20000, "true", ""  },
				{ "arifle_AK12_F",20000, "true", ""  },
				{ "srifle_DMR_07_ghex_F",20000, "true", ""  },
				{ "srifle_DMR_07_hex_F",20000, "true", ""  },
				{ "arifle_AKM_F",20000, "true", ""  },
				{ "arifle_CTAR_hex_F",20000, "true", ""  },
				{ "arifle_MSBS65_Mark_F",20000, "true", ""  },
				{ "arifle_MSBS65_Mark_black_F",20000, "true", "" },
				{ "arifle_CTAR_ghex_F",20000, "true", ""  },
				{ "SMG_01_F",20000, "true", ""  },
				{ "srifle_DMR_03_F",20000, "true", ""  },
				{ "srifle_DMR_03_woodland_F",20000, "true", ""  },
				{ "srifle_DMR_03_multicam_F",20000, "true", ""  },
				{ "srifle_DMR_03_khaki_F",20000, "true", ""  },
				{ "srifle_DMR_03_tan_F",20000, "true", ""  },
				{ "arifle_MSBS65_F",20000, "true", ""  },
				{ "arifle_MSBS65_sand_F",20000, "true", ""  },
				{ "arifle_MSBS65_Mark_F",20000, "true", ""  },
				{ "arifle_MSBS65_Mark_sand_F",,20000, "true", ""  }
			};
			magazines[] = {
				{ "30Rnd_556x45_Stanag", 20, "true", ""},
				{ "30Rnd_65x39_caseless_green", 20, "true", ""},
				{ "10Rnd_762x54_Mag", 20, "true", ""},
				{ "30Rnd_9x21_Mag",, 20, "true", ""},
				{ "20Rnd_762x51_Mag", 20, "true", ""},
				{ "7Rnd_408_Mag", 20, "true", ""},
				{ "200Rnd_65x39_cased_Box", 20, "true", ""},
				{ "200Rnd_65x39_cased_Box_Tracer", 20, "true", ""},
				{ "150Rnd_762x54_Box", 20, "true", ""},
				{ "150Rnd_762x54_Box_Tracer", 20, "true", ""},
				{ "30Rnd_65x39_caseless_msbs_mag", 20, "true", ""},
				{ "6Rnd_12Gauge_Pellets", 20, "true", ""},
				{ "20Rnd_650x39_Cased_Mag_F", 20, "true", ""},
				{ "30Rnd_762x39_Mag_F", 20, "true", ""},
				{ "30Rnd_762x39_Mag_Green_F", 20, "true", ""},
				{ "30Rnd_580x42_Mag_Tracer_F", 20, "true", ""},
				{ "30Rnd_762x39_Mag_Tracer_F", 20, "true", ""},
				{ "10Rnd_338_Mag", 20, "true", ""},
				{ "30Rnd_45ACP_Mag_SMG_01", 20, "true", ""},
				{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", 20, "true", ""}
			};
			attachments[] = {
				{ "optic_ACO_grn", 125, "true", ""},
        { "optic_Holosight", 125, "true", ""},
        { "optic_Hamr", 125, "true", ""},
        { "acc_flashlight", 125, "true", ""},
				{ "optic_Arco", 125, "true", ""},
				{ "optic_SOS", 125, "true", ""},
				{ "acc_pointer_IR", 125, "true", ""},
				{ "optic_MRCO", 125, "true", ""},
				{ "optic_DMS", 125, "true", ""},
				{ "optic_LRPS", 125, "true", ""},
				{ "bipod_01_F_snd", 125, "true", ""},
				{ "bipod_01_F_blk", 125, "true", ""},
				{ "bipod_01_F_mtp", 125, "true", ""},
				{ "bipod_02_F_blk", 125, "true", ""},
				{ "bipod_01_F_khk", 125, "true", ""},
				{ "bipod_02_F_tan", 125, "true", ""},
				{ "bipod_02_F_hex", 125, "true", ""},
				{ "bipod_03_F_blk", 125, "true", ""},
				{ "bipod_03_F_oli", 125, "true", ""},
				{ "optic_AMS_khk", 125, "true", ""},
				{ "optic_DMS_ghex_F", 125, "true", ""},
				{ "optic_ERCO_snd_F", 125, "true", ""},
				{ "optic_SOS_khk_F", 125, "true", ""},
				{ "optic_ERCO_blk_F", 125, "true", ""}
			};
			items[] = {
				{ "Binocular", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "FirstAidKit", 50, "true", ""},
				{ "NVGoggles", 50, "true", ""},
				{ "Chemlight_red", 50, "true", ""},
				{ "Chemlight_yellow", 50, "true", ""},
				{ "Chemlight_green", 50, "true", ""},
				{ "Chemlight_blue", 50, "true", ""}
			};
		};

		class gang {
			title = "Gang Waffenladen"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				{ "hgun_Rook40_F", 6500,"true", "" },
				{ "hgun_Pistol_01_F", 7000,"true", "" }, //Apex DLC
				{ "hgun_Pistol_heavy_02_F", 9850,"true", ""  },
				{ "hgun_ACPC2_F", 11500, "true", ""  },
				{ "SMG_05_F", 18000, "true", ""  }, //Apex DLC
				{ "hgun_PDW2000_F",20000, "true", ""  }
			};
			magazines[] = {
				{ "16Rnd_9x21_Mag", 20, "true", ""},
				{ "6Rnd_45ACP_Cylinder", 20, "true", ""},
				{ "9Rnd_45ACP_Mag", 20, "true", ""},
				{ "30Rnd_9x21_Mag", 20, "true", ""},
				{ "30Rnd_9x21_Mag_SMG_02", 20, "true", ""},
				{ "10Rnd_9x21_Mag", 20, "true", ""}
			};
			attachments[] = {
				{ "acc_flashlight_pistol", 1500, "true", ""},//Pistol Flashlight
				{ "optic_ACO_grn_smg", 1500, "true", ""}
			};
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles", 100, "true", ""}, //--- NV goggles won't be shown on preview
				{"U_O_GhillieSuit", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};

		class genstore {
			title = "General Shop"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {};
			magazines[] = {};
			attachments[] = {};
			items[] = {
				{ "Binocular", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "FirstAidKit", 50, "true", ""},
				{ "NVGoggles", 50, "true", ""},
				{ "Chemlight_red", 50, "true", ""},
				{ "Chemlight_yellow", 50, "true", ""},
				{ "Chemlight_green", 50, "true", ""},
				{ "Chemlight_blue", 50, "true", ""}
			};
		};

		class f_station_store {
			title = "Tankstellen Laden"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {};
			magazines[] = {};
			attachments[] = {};
			items[] = {
				{ "Binocular", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "FirstAidKit", 50, "true", ""},
				{ "NVGoggles", 50, "true", ""},
				{ "Chemlight_red", 50, "true", ""},
				{ "Chemlight_yellow", 50, "true", ""},
				{ "Chemlight_green", 50, "true", ""},
				{ "Chemlight_blue", 50, "true", ""}
			};
		};

		class cop_basic {
			title = "Polizei - Waffenkammer"; //--- Title of Shop
			condition = "call life_coplevel >= 1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				{ "hgun_P07_snds_F",1, "call life_coplevel >= 1", "Taser" },
				//Rekrut
				{ "arifle_SDAR_F",1, "call life_coplevel >= 2", "Tasergewehr" },
				{ "SMG_02_F",1, "call life_coplevel >= 2", "" },
				{ "SMG_05_F",1, "call life_coplevel >= 2", "" },
				//Polizist
				{ "arifle_MXC_Black_F",1, "call life_coplevel >= 3", "" },
				{ "30Rnd_65x39_caseless_black_mag",1, "call life_coplevel >= 3", "" },
				{ "SMG_03_TR_black",1, "call life_coplevel >= 3", "" },
				//Polizeimeister
				{ "arifle_Katiba_F",1, "call life_coplevel >= 4", "" },
				{ "arifle_MX_Black_F",1, "call life_coplevel >= 4", "" },
				//Polizeiobermeister
				{ "arifle_MXM_Black_F",1, "call life_coplevel >= 5", "" },
				{ "arifle_SPAR_01_blk_F",1, "call life_coplevel >= 5", "" },
				//Polizeihauptmeister
				{ "arifle_MSBS65_black_F",1, "call life_coplevel >= 6", "" },
				{ "arifle_SPAR_02_blk_F",1, "call life_coplevel >= 6", "" },
				{ "SMG_03_TR_black",1, "call life_coplevel >= 6", "" },
				//Polizeikommissar
				{ "arifle_MX_SW_Black_F",50000, "call life_coplevel >= 7", "" },
				{ "arifle_MSBS65_Mark_black_F",1, "call life_coplevel >= 7", "" },
				//PolizeiOberKOmmissar
				{ "srifle_EBR_F",1, "call life_coplevel >= 8", "" },
				{ "srifle_DMR_03_F",1, "call life_coplevel >= 8", "" },
				{ "srifle_DMR_07_blk_F_arco_flash_F",1, "call life_coplevel >= 8", "" },
				//Polizeihauptkommissar
				{ "srifle_DMR_02_F",1, "call life_coplevel >= 9", "" },
				{ "arifle_SPAR_03_blk_F",1, "call life_coplevel >= 9", "" },
				{ "arifle_MSBS65_UBS_black_ico_F",1, "call life_coplevel >= 9", "" },
				//Polizeirat
				{ "arifle_ARX_blk_F",1, "call life_coplevel >= 10", "" },
				//Polizeiboerrat
				//{ "LMG_Mk200_black_F", "", 1, 0, "call life_coplevel >= 11" }, //Vlt.Raus MK200
				//L.Polizeidirektor
				{ "srifle_DMR_05_blk_F",1, "call life_coplevel >= 13", "" },
				{ "arifle_RPK12_F",1, "call life_coplevel >= 13", "" },
				{ "6Rnd_12Gauge_Pellets",1, "call life_coplevel >= 10", "" },
				{ "muzzle_snds_58_blk_F",1, "call life_coplevel >= 10", "" },
				{ "6Rnd_12Gauge_Slug",1, "call life_coplevel >= 10", "" }
			};
			magazines[] = {
				{ "16Rnd_9x21_Mag", 50, "true", ""},
				{ "30Rnd_9x21_Mag", 50, "true", ""},
				{ "30Rnd_9x21_Mag_SMG_02", 50, "true", ""},
				{ "50Rnd_570x28_SMG_03", 50, "true", ""},
				{ "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", 50, "true", ""},
				{ "30Rnd_65x39_caseless_black_mag_Tracer", 50, "true", ""},
				{ "30Rnd_556x45_Stanag", 50, "true", ""},
				{ "30Rnd_556x45_Stanag_green", 50, "true", ""},
				{ "100Rnd_65x39_caseless_black_mag", 50, "true", ""},
				{ "100Rnd_65x39_caseless_mag_Tracer", 50, "true", ""},
				{ "20Rnd_762x51_Mag", 50, "true", ""},
				{ "10Rnd_338_Mag", 50, "true", ""},
				{ "30Rnd_65x39_caseless_green", 50, "true", ""},
				{ "30Rnd_65x39_caseless_black_mag", 50, "true", ""},
				{ "20Rnd_556x45_UW_mag", 50, "true", "Tasermagazin"},
				{ "11Rnd_45ACP_Mag", 50, "true", ""},
				{ "75rnd_762x39_AK12_Mag_F", 50, "true", ""},
				{ "30Rnd_65x39_caseless_msbs_mag", 50, "true", ""},
				{ "6Rnd_12Gauge_Pellets", 50, "true", ""},
				{ "200Rnd_65x39_cased_Box", 50, "true", ""},
				{ "10Rnd_93x64_DMR_05_Mag", 50, "true", ""},
				{ "7Rnd_408_Mag", 50, "true", ""},
				{ "10Rnd_50BWMag", 50, "true", ""},
				{ "6Rnd_12Gauge_Pellets", 50, "true", ""},
				{ "6Rnd_12Gauge_Slug", 50, "true", ""},
				{ "150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{ "20Rnd_650x39_Cased_Mag_F", 50, "true", ""},
				{ "ADR-97-Mag", 50, "true", ""},
				{ "20Rnd_650x39_Cased_Mag_F", 50, "true", ""}

			};
			attachments[] = {
				{ "muzzle_snds_L", 50, "true", ""},
				{ "optic_MRD", 50, "true", ""},
				{ "acc_flashlight_pistol", 50, "true", ""},
				{ "acc_flashlight", 50, "true", ""},
				{ "muzzle_snds_H", 50, "true", ""},
				{ "muzzle_snds_L", 50, "true", ""},
				{ "muzzle_snds_M", 50, "true", ""},
				{ "muzzle_snds_B", 50, "true", ""},
				{ "muzzle_snds_H_MG", 50, "true", ""},
				{ "optic_Arco", 50, "true", ""},
				{ "muzzle_snds_93mmg", 50, "true", ""},
				{ "optic_Hamr", 50, "true", ""},
				{ "optic_Aco", 50, "true", ""},
				{ "optic_Holosight", 50, "true", ""},
				{ "optic_Holosight_smg", 50, "true", ""},
				{ "acc_pointer_IR", 50, "true", ""},
				{ "optic_MRCO", 50, "true", ""},
				{ "optic_LRPS", 50, "true", ""},
				{ "optic_AMS", 50, "true", ""},
				{ "bipod_01_F_snd", 50, "true", ""},
				{ "bipod_01_F_blk", 50, "true", ""},
				{ "optic_ERCO_blk_F", 50, "true", ""},
				{ "optic_Holosight", 50, "true", ""},
				{ "optic_Arco", 50, "true", ""},
				{ "muzzle_snds_58_blk_F", 50, "true", ""},
				{ "muzzle_snds_H", 50, "true", ""}
			};
			items[] = {
				{ "Binocular", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "FirstAidKit", 50, "true", ""},
				{ "NVGoggles", 50, "true", ""},
				{ "Chemlight_red", 50, "true", ""},
				{ "Chemlight_yellow", 50, "true", ""},
				{ "Chemlight_green", 50, "true", ""},
				{ "Chemlight_blue", 50, "true", ""},
				{ "6Rnd_12Gauge_Pellets",1, "call life_coplevel >= 10", "" },
				{ "muzzle_snds_58_blk_F",1, "call life_coplevel >= 10", "" },
				{ "6Rnd_12Gauge_Slug",1, "call life_coplevel >= 10", "" },
      	{ "HandGrenade_Stone",100000, "call life_coplevel >= 6", "Blendgranate"}
			};
		};

		class SEK {
			title = "Spezial Einsatz Kommando Waffenkammer"; //--- Title of Shop
			condition = "call life_coplevel >= 22"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				{ "SMG_02_F", 1, "true", "Sting"},
				{ "arifle_MX_black_F", 1, "true", ""},
				{ "arifle_MXC_black_F", 1, "true", ""},
				{ "arifle_MX_SW_black_F", 1, "true", ""},
				{ "arifle_RPK12_F", 1, "true", ""},
				{ "arifle_SPAR_03_blk_F", 1, "true", ""},
				{ "arifle_SPAR_01_GL_blk_F", 1, "true", ""},
				{ "arifle_MX_GL_Black_F", 1, "true", ""},
				{ "srifle_DMR_02_F", 1, "true", ""},
				{ "srifle_DMR_07_blk_F", 1, "true", ""},
				{ "arifle_SPAR_02_blk_F", 1, "true", ""},
				{ "srifle_EBR_F", 1, "true", ""},
				{ "LMG_03_F", 1, "true", ""},
				{ "MMG_02_black_F", 1, "true", ""},
				{ "arifle_ARX_blk_F", 1, "true", ""},
				{ "srifle_DMR_05_blk_F", 1, "true", ""},
				{ "srifle_GM6_F", 1, "true", ""},
				{ "hgun_Pistol_heavy_01_MRD_F", 1, "true", ""},
				{ "srifle_LRR_F", 1, "true", ""}
			};

			magazines[] = {
				{ "30Rnd_65x39_caseless_black_mag_Tracer", 1, "true", ""},
				{ "20Rnd_762x51_Mag", 1, "true", ""},
				{ "20Rnd_650x39_Cased_Mag_F", 1, "true", ""},
				{ "10Rnd_338_Mag", 1, "true", ""},
				{ "30Rnd_65x39_caseless_green", 1, "true", ""},
				{ "5Rnd_127x108_Mag", 1, "true", ""},
				{ "5Rnd_127x108_APDS_Mag", 1, "true", ""},
				{ "NLAW_F", 1, "true", ""},
				{ "75rnd_762x39_AK12_Mag_F", 1, "true", ""},
				{ "130Rnd_338_Mag", 1, "true", ""},
				{ "10Rnd_50BW_Mag_F", 1, "true", ""},
				{ "30Rnd_65x39_caseless_green", 1, "true", ""},
				{ "200Rnd_556x45_Box_Tracer_F", 1, "true", ""},
				{ "150Rnd_556x45_Drum_Mag_F", 1, "true", ""},
				{ "10Rnd_93x64_DMR_05_Mag", 1, "true", ""},
				{ "30Rnd_556x45_Stanag", 1, "true", ""},
				{ "100Rnd_65x39_caseless_black_mag", 1, "true", ""},
				{ "150Rnd_556x45_Drum_Mag_Tracer_F", 1, "true", ""},
				{ "11Rnd_45ACP_Mag", 1, "true", ""},
				{ "7Rnd_408_Mag", 1, "true", ""},
				{ "1Rnd_SmokeGreen_Grenade_shell", 1, "true", ""},
				{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", 1, "true", ""}
			};

			attachments[] = {
				{ "muzzle_snds_L", 1, "true", ""},
				{ "muzzle_snds_I", 1, "true", ""},
				{ "muzzle_snds_b", 1, "true", ""},
				{ "muzzle_snds_338_black", 1, "true", ""},
				{ "muzzle_snds_65_TI_blk_F", 1, "true", ""},
			 { "ACC_pointer_IR", 1, "true", ""},
			 { "bipod_01_F_blk", 1, "true", ""},
			 { "muzzle_sdns_h", 1, "true", ""},
			 { "muzzle_sdns_m", 1, "true", ""},
			 { "optic_SOS", 1, "true", ""},
			 { "muzzle_snds_H", 1, "true", ""},
			 { "muzzle_snds_M", 1, "true", ""},
			 { "optic_Aco", 1, "true", ""},
			 { "optic_MRCO", 1, "true", ""},
			 { "optic_AMS", 1, "true", ""},
			 { "optic_Nightstalker", 1, "true", ""},
			 { "muzzle_snds_93mmg", 1, "true", ""},
			 { "optic_tws", 1, "true", ""},
			 { "optic_tws_mg", 1, "true", ""},
			 { "optic_KHS_blk", 1, "true", ""},
			 { "optic_LRPS", 1, "true", ""},
			 { "optic_DMS", 1, "true", ""},
			 { "optic_Hamr", 2, "true", ""},
			 { "optic_MRD", 1, "true", ""},
			 { "ACC_flashlight", 1, "true", ""}
			};
			items[] = {
				{ "Binocular", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "FirstAidKit", 50, "true", ""},
				{ "NVGoggles", 50, "true", ""},
				{ "NVGogglesB_blk_F", 50, "true", ""},
				{ "Chemlight_red", 50, "true", ""},
				{ "Chemlight_yellow", 50, "true", ""},
				{ "Chemlight_green", 50, "true", ""},
				{ "Chemlight_blue", 50, "true", ""},
				{ "B_UavTerminal", 50, "true", ""},
				{ "1Rnd_SmokeGreen_Grenade_shell", 10, "true", ""},
				{ "Laserdesignator_02", 50, "true", ""},
				{ "SmokeShellgreen", 50, "true", ""},
				{ "B_UavTerminal", 50, "true", ""},
				{ "launch_NLAW_F", 1, "true", ""},
      	{ "HandGrenade_Stone",100000, "call life_coplevel >= 6", "Blendgranate"}
			};
		};

		class med_shop {
			title = "Medizinscher Austatter"; //--- Title of Shop
			condition = "call life_mediclevel >= 1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {};

			magazines[] = {};

			attachments[] = {};

			items[] = {
				{ "Rangefinder", 50, "true", ""},
				{ "ItemGPS", 50, "true", ""},
				{ "ItemMap", 50, "true", ""},
				{ "ItemCompass", 50, "true", ""},
				{ "ItemWatch", 50, "true", ""},
				{ "Medikit", 50, "true", ""},
				{ "NVGoggles_OPFOR", 50, "true", ""},
				{ "Chemlight_red", 50, "true", ""},
				{ "Chemlight_yellow", 50, "true", ""},
				{ "Chemlight_green", 50, "true", ""},
				{ "Chemlight_blue", 50, "true", ""}
			};
		};

	};
};

#include "gui\weapon_gui_master.cpp"
