/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Uniform_Scientist_01_F", "", 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

	class adac {
		title = "STR_MAR_Adac_Clothing_Shop";
        conditions = "";
		side = "adac";
		uniforms[] = {
			{ "NONE", "Uniform entfernen", 0, { "", "", -1 } },
			{ "U_B_HeliPilotCoveralls", "ADAC Uniform", 50, { "", "", -1 } }
		};
	headgear[] = {
			{ "NONE", "Kopfbedeckung entfernen", 0, { "", "", -1 } },
			{ "H_Cap_marshal", "", 10, { "", "", -1 } }
		};
	goggles[] = {
			{ "NONE", "Brille etfernen", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 10, { "", "", -1 } },
			{ "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 10, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 10, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 10, { "", "", -1 } }
		};
	vests[] = {
			{ "NONE", "Weste entfernen", 0, { "", "", -1 } },
            { "V_Safety_yellow_F", "", 2000, { "", "", -1 } }
		};
	backpacks[] = {
			{ "NONE", "Rucksack entfernen", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "ADAC Rucksack", 3000, { "", "", -1 } }
		};
	};

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Kleidung entfernen", 0, { "", "", -1 } },
            { "U_Rangemaster", "Polizei-Kleidung", 25, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "Polizei-Kleidung", 25, { "", "", -1 } },
            { "U_B_GEN_Commander_F", "Polizei-Pullover", 25, { "", "", -1 } },
            { "U_C_Uniform_Scientist_01_F", "", 25, { "", "", -1 } },
            { "U_I_CombatUniform", "Taktische Uniform", 350, "call life_coplevel >= 2" },
            { "U_C_CBRN_Suit_01_Blue_F", "CSA", 350, "call life_coplevel >= 15" },
            { "U_O_R_Gorka_01_black_F", "Sneaky Peaky Uniform", 350, "call life_coplevel >= 15" },
            { "U_B_CombatUniform_mcam_vest", "Uniform", 350, "" },
	          { "U_B_Wetsuit", "", 2000, { "", "", -1 } },
            { "U_O_T_FullGhillie_tna_F", "SEK-Ghillie", 350, "call life_coplevel >= 22" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_02", "", 25, { "", "", -1 } },
            { "H_HelmetSpecB_blk", "", 25, { "", "", -1 } },
            { "H_Beret_Colonel", "", 25, "call life_coplevel >= 14" },
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 22" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 22" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 22" },
            { "H_HelmetCrew_I", "SEK HELM", 100, "call life_coplevel >= 22" },
			      { "H_CrewHelmetHeli_B", "GASMASKE", 2500, "call life_coplevel >= 22" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
			      { "G_Diving", "", 500, { "", "", -1 } },
			      { "G_RegulatorMask_F", "Atemschutzmaske", 500, "call life_coplevel >= 15" },
			      { "G_AirPurifyingRespirator_02_black_F", "Gasmaske", 500, "call life_coplevel >= 22" },
			      { "G_Balaclava_TI_blk_F", "SEK MASKE", 500, "call life_coplevel >= 22" },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "keine West", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", 1 } },
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 20" },
            { "V_PlateCarrier2_blk", "", 1500, { "life_coplevel", "SCALAR", 3 } },
            { "V_TacVest_gen_F", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrierGL_blk", "", 120, "call life_coplevel >= 22" },
            { "V_PlateCarrierSpec_blk", "", 120, "call life_coplevel >= 22" },
            { "V_PlateCarrierH_CTRG", "", 120, "call life_coplevel >= 22" },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "SEK WESTE", 1500, "call life_coplevel >= 22" }
        };
        backpacks[] = {
            { "NONE", "Kein Rucksack", 0, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 800, { "", "", -1 } },
            { "B_Bergen_Hex_F", "Unsichtbar", 800, { "", "", -1 } },
            { "B_SCBA_01_F", "Pressluftatmer", 500, "call life_coplevel >= 15" },
            { "B_UAV_01_backpack_F", "SEK DRONE", 350, "call life_coplevel >= 22" },
            { "B_ViperLightHarness_blk_F", "SEK VIPER", 350, "call life_coplevel >= 22" },
            { "B_Static_Designator_01_weapon_F", "Remote Designator", 350, "call life_coplevel >= 22" },
            { "B_Bergen_sgg", "SEK RUCKSACK", 350, "call life_coplevel >= 22" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 1900, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 1900, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 1900, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 1900, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 1900, "" },
            { "U_C_E_LooterJacket_01_F", "", 1900, "" },
            { "U_I_L_Uniform_01_tshirt_olive_F", "", 1900, "" },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 1900, "" },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 1900, "" },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 1900, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacWest_brn", "", 1900, "" },
            { "V_TacWest_khk", "", 1900, "" },
            { "V_TacWest_oli", "", 1900, "" },
            { "V_TacWest_camo", "", 1900, "" },

            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_cbr", "", 1900, "" },
            { "B_AssaultPack_sgg", "", 1900, "" },
            { "B_AssaultPack_rgr", "", 1900, "" },
            { "B_AssaultPack_ocamo", "", 1900, "" },
            { "B_AssaultPack_khk", "", 1900, "" },
            { "B_AssaultPack_mcamo", "", 1900, "" },
            { "B_AssaultPack_dgtl", "", 1900, "" },
            { "B_AssaultPack_tna_F", "", 1900, "" },
            { "B_Caryall_eaf_F", "", 1900, "" },
            { "B_Caryall_green_F", "", 1900, "" },
            { "B_Caryall_wdl_F", "", 1900, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_I_CombatUniform", "Einsatzuniform", 50, "" },
            { "U_I_CombatUniform_shortsleeve", "Einsatzuniform", 50, "" },
            { "U_BG_Guerilla2_1", $STR_C_EMS_uniforms, 50, "" },
            { "U_C_CBRN_Suit_01_Blue_F", "CSA", 350, "" },
            { "U_O_OfficerUniform_ocamo", "Einsatzuniform", 50, "" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_PASGT_basic_white_F", "", 10, "" },
            { "H_PASGT_basic_black_F", "", 10, "" },
            { "H_Beret_02", "", 10, "" },
            { "H_Beret_Colonel", "", 10, "" },
            { "H_Watchcap_blk", "", 10, "" },
            { "H_PilotHelmetHeli_B", "", 10, "" },
            { "H_MilCap_gry", "", 10, "" },
            { "H_HeadBandage_clean_F", "", 10, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Respirator_white_F", "", 150, { "", "", -1 } },
            { "G_Respirator_yellow_F", "", 150, { "", "", -1 } },
            { "G_Respirator_blue_F", "", 150, { "", "", -1 } },
			      { "G_RegulatorMask_F", "Atemschutzmaske", 500, "" },
            { "G_Aviator", "", 10, "" },
            { "G_Spectacles_Tinted", "", 10, "" },
            { "G_Tactical_Clear", "", 10, "" },
            { "G_B_Diving", "", 10, "" },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
            { "V_DeckCrew_violet_F", "", 10, "" },
            { "V_DeckCrew_brown_F", "", 10, "" },
            { "V_DeckCrew_white_F", "", 10, "" },
            { "V_DeckCrew_red_F", "", 10, "" },
            { "V_DeckCrew_green_F", "", 10, "" },
            { "V_DeckCrew_blue_F", "", 10, "" },
            { "V_DeckCrew_yellow_F", "", 10, "" },
            { "V_Safety_orange_F", "", 10, "" },
            { "V_Safety_yellow_F", "", 10, "" },
            { "V_EOD_blue_F", "", 10, "" },
            { "V_LegStrapBag_black_F", "", 10, "" },
            { "V_RebreatherB", "", 10, "" },
            { "V_Rangemaster_belt", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_SCBA_01_F", "Pressluftatmer", 500, "" },
            { "B_Bergen_hex_F ", "Unsichtbar", 500, "" },
            { "B_RadioBag_01_black_F ", "", 500, "" },
            { "B_TacticalPack_blk", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },

            { "U_B_CTRG_2", "", 50000, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 50000, "" },
            { "U_I_L_Uniform_01_camo_F", "", 50000, "" },
            { "U_I_L_Uniform_01_desserter_F", "", 50000, "" },
            { "U_B_CombatUniform_mcam_worn", "", 50000, "" },
            { "U_I_E_Uniform_01_shortsleeve_F", "", 50000, "" },
            { "U_I_E_ressistanceLeader_F", "", 50000, "" },
            { "U_O_PilotCoveralls", "", 50000, "" },
            { "U_O_SpecopsUniform_ocamo", "", 50000, "" },
            { "U_B_CombatUniform_mcam_vest", "", 50000, "" },

            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_BG_Guerrilla_6_1", "", 50020, "" },
            { "U_B_T_Soldier_AR_F", "", 50020, "" },
            { "U_O_T_FullGhillie_tna_F", "", 50020, "" },
            { "U_I_Wetsuit", "", 50020, "" },
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_PilotHelmetFighter_B", "", 850, "" },
            { "H_Helmet0_ocamo", "", 850, "" },
            { "H_HelmetB_TI_tna_F", "", 850, "" },
            { "H_Booniehat_mgm", "", 150, "" },
            { "H_Booniehat_khk_hs", "", 160, "" },
            { "H_Booniehat_khk", "", 165, "" },
            { "H_Booniehat_mcamo", "", 150, "" },
            { "H_Booniehat_oli", "", 160, "" },
            { "H_Booniehat_tan", "", 165, "" },
            { "H_Booniehat_tna_F", "", 150, "" },
            { "H_Booniehat_taiga", "", 160, "" },
            { "H_Booniehat_wdl", "", 165, "" },
            { "H_Booniehat_dgtl", "", 150, "" },
            { "H_Booniehat_eaf", "", 160, "" },
            { "H_HelmetB_Camo", "", 165, "" },
            { "H_HelmetB_grass", "", 150, "" },
            { "H_HelmetB_sand", "", 160, "" },
            { "H_HelmetB_snakeskin", "", 165, "" },
            { "H_HelmetB_Ina_F", "", 150, "" },
            { "H_HelmetB_plain_wdl", "", 160, "" },
            { "H_HelmetB_dessert", "", 165, "" },
            { "H_HelmetSpecB_paint2", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_PlateCarrier_Kerry", "", 7500, "" },
            { "V_RebreatherIA", "", 7500, "" },
            { "V_EOD_olive_F", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_PlateCarrierL_CTRG", "", 12500, "" },
            { "V_PlateCarrier2_rgr", "", 12500, "" },
            { "V_PlateCarrier_Kerry", "", 12500, "" },
            { "V_HarnessOGL_gry", "SELBSTMORDWESTE", 750000000, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_ViperLightHarness_ghex_F", "", 2000, "" },
            { "B_ViperLightHarness_khk_F", "", 2000, "" },
            { "B_ViperLightHarness_oli_F", "", 2000, "" },
            { "B_ViperLightHarness_hex_F", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class schwarzmarkt {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_schwarzmarkt";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_BG_Guerrilla_6_1", "", 50020, "" },
            { "U_B_CombatUniform_vest_mcam_wdl_F", "", 50000, "" }, //Apex DLC
            { "U_B_CTRG_3", "", 50000, "" }, //Apex DLC
            { "U_B_CTRG_1", "", 51000, "" }, //Apex DLC
            { "U_B_CTRG_Soldier_urb_1_F", "", 50032, "" }, //Apex DLC
            { "U_B_CTRG_Soldier_urb_3_F", "", 50020, "" }, //Apex DLC
            { "U_B_T_Soldier_SL_F", "", 50020, "" },
            { "U_O_T_Soldier_F", "", 50020, "" },
            { "U_B_T_Soldier_AR_F", "", 50020, "" },
            { "U_O_T_FullGhillie_tna_F", "", 50020, "" },
            { "U_I_Wetsuit", "", 50020, "" },
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_PilotHelmetFighter_B", "", 850, "" },
            { "H_Helmet0_ocamo", "", 850, "" },
            { "H_HelmetB_TI_tna_F", "", 850, "" },
            { "H_HelmetSpecB_paint2", "", 850, "" },
            { "H_HelmetHBK_chops_F", "", 850, "" },
            { "H_HelmetHBK_ear_F", "", 850, "" },
            { "H_HelmetHBK_F", "", 850, "" },
            { "H_HelmetB_TI_tna_F", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_PlateCarrier_Kerry", "", 7500, "" },
            { "V_RebreatherIA", "", 7500, "" },
            { "V_EOD_olive_F", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_PlateCarrierH_CTRG", "", 12500, "" },
            { "V_PlateCarrier2_wdl", "", 12500, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 12500, "" },
            { "V_PlateCarrier2_tna_F", "", 12500, "" },
            { "V_PlateCarrierSpec_tna_F", "", 500000, "" },
            { "V_PlateCarrierGL_tna_F", "", 500000, "" },
            { "V_PlateCarrier2_tna_F", "", 12500, "" },
            { "V_HarnessOGL_gry", "SELBSTMORDWESTE", 750000000, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_ViperHarness_ghex_F", "", 6500, "" },
            { "B_ViperHarness_khk_F", "", 6500, "" },
            { "B_ViperHarness_oli_F", "", 6500, "" },
            { "B_ViperHarness_hex_F", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
