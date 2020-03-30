/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops

    //DONE
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

//Done
class schwarzmarkt {
        name = "Schwarzmarkt";
        side = "civ";
        license = "schwarzmarkt";
        level[] = { "", "", -1, "" };
        items[] = {
			      { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
      			{ "srifle_EBR_F", "", 20000, 7500 },
      			{ "srifle_DMR_06_camo_F", "", 20000, 7500 },
      			{ "arifle_AK12_F", "", 20000, 7500 },
      			{ "arifle_AKM_F", "", 20000, 7500 },
      			{ "srifle_DMR_02_F", "", 250000000, 7500 },
      			{ "srifle_DMR_02_camo_F", "", 250000000, 7500 },
      			{ "srifle_DMR_02_sniper_F", "", 250000000, 7500 },
      			{ "SMG_01_F", "", 20000000, 7500 },
      			{ "srifle_DMR_03_F", "", 20000, 7500 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 150, 980 },
      			{ "srifle_LRR_camo_F", "", 70000000, 7500 },
      			{ "srifle_LRR_tna_F", "", 70000000, 7500 },
      			{ "arifle_MXC_F", "", 20000, 7500 },
            { "arifle_RPK12_F", "", 20000, 7500},
      			{ "arifle_MXC_khk_F", "", 20000, 7500 },
      			{ "arifle_MX_F", "", 20000, 7500 },
      			{ "arifle_MX_khk_F", "", 20000, 7500 },
      			{ "arifle_MXM_F", "", 20000, 7500 },
      			{ "arifle_MXM_khk_F", "", 20000, 7500 },
      			{ "launch_RPG7_F", "", 1000000000, 7500 },
      			{ "LMG_Mk200_F", "", 400000000, 7500 },
      			{ "arifle_CTARS_blk_F", "", 7500, 7500 },
      			{ "arifle_CTARS_hex_F", "", 7500, 7500 },
      			{ "arifle_CTARS_ghex_F", "", 7500, 7500 },
      			{ "LMG_Zafir_F", "", 500000000, 7500 },
      			{ "arifle_MX_SW_khk_F", "", 20000000, 7500 },
      			{ "arifle_MX_SW_pointer_F", "", 20000000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "30Rnd_9x21_Mag", "", 125 },
			{ "20Rnd_762x51_Mag", "", 125 },
			{ "7Rnd_408_Mag", "", 125 },
			{ "200Rnd_65x39_cased_Box", "", 125 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 125 },
			{ "150Rnd_762x54_Box", "", 125 },
			{ "150Rnd_762x54_Box_Tracer", "", 125 },
			{ "30Rnd_762x39_Mag_F", "", 125 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 125 },
			{ "30Rnd_762x39_Mag_Green_F", "", 125 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 125 },
			{ "10Rnd_338_Mag", "", 125 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 125 },
      { "75rnd_762x39_AK12_Mag_F", "", 130, 65, "" },
			{ "30Rnd_65x39_caseless_mag", "", 125 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 125 },
			{ "100Rnd_65x39_caseless_mag", "", 125 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 125 },
			{ "RPG7_F", "", 250000000 },
			{ "RPG32_F", "", 250000000 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "muzzle_snds_H", "", 7500, 3750, "" },
            { "muzzle_snds_L", "", 7500, 3750, "" },
            { "muzzle_snds_M", "", 7500, 3750, "" },
            { "optic_Arco", "", 7500, 3750, "" },
            { "optic_SOS", "", 7500, 3750, "" },
            { "acc_flashlight", "", 7500, 3750, "" },
            { "optic_MRCO", "", 7500, 3750, "" },
            { "optic_DMS", "", 7500, 3750, "" },
            { "optic_LRPS", "", 7500, 3750, "" },
            { "optic_AMS_snd", "", 7500, 3750, "" },
            { "optic_KHS_old", "", 7500, 3750, "" },
            { "bipod_01_F_snd", "", 7500, 3750, "" },
            { "bipod_01_F_blk", "", 7500, 3750, "" },
            { "bipod_01_F_mtp", "", 7500, 3750, "" },
            { "bipod_02_F_blk", "", 7500, 3750, "" },
            { "bipod_02_F_tan", "", 7500, 3750, "" },
            { "bipod_02_F_hex", "", 7500, 3750, "" },
            { "muzzle_snds_B", "", 7500, 3750, "" },
            { "muzzle_snds_H_MG", "", 7500, 3750, "" },
            { "muzzle_snds_338_sand", "", 7500, 3750, "" },
            { "muzzle_snds_338_green", "", 7500, 3750, "" },
            { "muzzle_snds_338_black", "", 7500, 3750, "" },
            { "optic_AMS", "", 7500, 3750, "" },
            { "muzzle_snds_H_khk_F", "", 7500, 3750, "" },
            { "muzzle_snds_H_snd_F", "", 7500, 3750, "" },
            { "muzzle_snds_m_khk_F", "", 7500, 3750, "" },
            { "muzzle_snds_m_snd_F", "", 7500, 3750, "" },
            { "muzzle_snds_58_blk_F", "", 7500, 3750, "" },
            { "muzzle_snds_58_wdm_F", "", 7500, 3750, "" },
            { "muzzle_snds_58_ghex_F", "", 7500, 3750, "" },
            { "muzzle_snds_58_hex_F ", "", 7500, 3750, "" },
            { "optic_KHS_blk", "", 7500, 3750, "" },
            { "muzzle_snds_B_khk_F", "", 7500, 3750, "" },
            { "muzzle_snds_B_snd_F", "", 7500, 3750, "" },
            { "bipod_03_F_blk", "", 7500, 3750, "" },
            { "muzzle_snds_65_TI_blk_F", "", 7500, 3750, "" },
            { "muzzle_snds_65_TI_hex_F", "", 7500, 3750, "" },
            { "muzzle_snds_65_TI_ghex_F", "", 7500, 3750, "" },
            { "muzzle_snds_H_MG_blk_F", "", 7500, 3750, "" },
            { "muzzle_snds_H_MG_khk_F", "", 7500, 3750, "" },
            { "muzzle_snds_m_khk_F", "", 7500, 3750, "" },
            { "muzzle_snds_65_TI_hex_F", "", 7500, 3750, "" },
            { "optic_ERCO_snd_F", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };
//Done
class rebel {
        name = "Rebellenmarkt";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			{ "srifle_EBR_F", "", 20000, 7500 },
			{ "srifle_DMR_06_camo_F", "", 20000, 7500 },
			{ "arifle_AK12_F", "", 20000, 7500 },
			{ "srifle_DMR_07_ghex_F", "", 20000, 7500 },
			{ "srifle_DMR_07_hex_F", "", 20000, 7500 },
			{ "arifle_AKM_F", "", 20000, 7500 },
			{ "arifle_CTAR_hex_F", "", 20000, 7500 },
      { "arifle_MSBS65_Mark_F", "", 20000, 7500 },
      { "arifle_MSBS65_Mark_black_F", "", 20000, 7500 },
			{ "arifle_CTAR_ghex_F", "", 20000, 7500 },
			{ "SMG_01_F", "", 20000, 7500 },
			{ "srifle_DMR_03_F", "", 20000, 7500 },
			{ "srifle_DMR_03_woodland_F", "", 20000, 7500 },
			{ "srifle_DMR_03_multicam_F", "", 20000, 7500 },
			{ "srifle_DMR_03_khaki_F", "", 20000, 7500 },
			{ "srifle_DMR_03_tan_F", "", 20000, 7500 },

      { "arifle_MSBS65_F", "", 20000, 7500 },
      { "arifle_MSBS65_sand_F", "", 20000, 7500 },
      { "arifle_MSBS65_Mark_F", "", 20000, 7500 },
      { "arifle_MSBS65_Mark_sand_F", "", 20000, 7500 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "30Rnd_9x21_Mag", "", 125 },
			{ "20Rnd_762x51_Mag", "", 125 },
			{ "7Rnd_408_Mag", "", 125 },
			{ "200Rnd_65x39_cased_Box", "", 125 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 125 },
			{ "150Rnd_762x54_Box", "", 125 },
			{ "150Rnd_762x54_Box_Tracer", "", 125 },
      { "30Rnd_65x39_caseless_msbs_mag", "", 125 },
      { "6Rnd_12Gauge_Pellets", "", 130, 65, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 125 },
			{ "30Rnd_762x39_Mag_F", "", 125 },
			{ "30Rnd_762x39_Mag_Green_F", "", 125 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 125 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 125 },
			{ "10Rnd_338_Mag", "", 125 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 125 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 125 }
        };
        accs[] = {
			{ "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 },
//			{ "muzzle_snds_H", "", 125 },
//			{ "muzzle_snds_L", "", 125 },
//			{ "muzzle_snds_M", "", 125 },
//			{ "muzzle_snds_B", "", 125 },
//			{ "muzzle_snds_H_MG", "", 125 },
			{ "optic_Arco", "", 125 },
			{ "optic_SOS", "", 125 },
			{ "acc_pointer_IR", "", 125 },
			{ "optic_MRCO", "", 125 },
			{ "optic_DMS", "", 125 },
			{ "optic_LRPS", "", 125 },
//			{ "muzzle_snds_93mmg", "", 125 },
//			{ "muzzle_snds_93mmg_tan", "", 125 },
//			{ "muzzle_snds_58_blk_F", "", 125 },
//			{ "muzzle_snds_58_wdm_F", "", 125 },
//			{ "muzzle_snds_58_ghex_F", "", 125 },
//			{ "muzzle_snds_58_hex_F", "", 125 },
//			{ "muzzle_snds_B_khk_F", "", 125 },
			{ "bipod_01_F_snd", "", 125 },
			{ "bipod_01_F_blk", "", 125 },
			{ "bipod_01_F_mtp", "", 125 },
			{ "bipod_02_F_blk", "", 125 },
			{ "bipod_01_F_khk", "", 125 },
			{ "bipod_02_F_tan", "", 125 },
			{ "bipod_02_F_hex", "", 125 },
			{ "bipod_03_F_blk", "", 125 },
			{ "bipod_03_F_oli", "", 125 },
			{ "optic_AMS_khk", "", 125 },
			{ "optic_DMS_ghex_F", "", 125 },
			{ "optic_ERCO_snd_F", "", 125 },
			{ "optic_SOS_khk_F", "", 125 },
			{ "optic_ERCO_blk_F", "", 125 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };


    //Done
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

   class cop_basic {
        name = "Malden Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "Rangefinder", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", "Blendgranate", 100000, 0, "call life_coplevel >= 6" },
            //Praktikant
            { "hgun_P07_snds_F", "Taser", 1, 0, "call life_coplevel >= 1" },
            //Rekrut
            { "arifle_SDAR_F", "Tasergewehr", 1, 0, "call life_coplevel >= 2" },
            { "SMG_02_F", "", 1, 0, "call life_coplevel >= 2" },
            { "SMG_05_F", "", 1, 0, "" },
            //Polizist
            { "arifle_MXC_Black_F", "", 1, 0, "call life_coplevel >= 3" },
            { "30Rnd_65x39_caseless_black_mag", "", 1, 0, "call life_coplevel >= 3" },
            { "SMG_03_TR_black", "", 1, 0, "call life_coplevel >= 3" },
            //Polizeimeister
            { "arifle_Katiba_F", "", 1, 0, "call life_coplevel >= 4" },
            { "arifle_MX_Black_F", "", 1, 0, "call life_coplevel >= 4" },
            //Polizeiobermeister
            { "arifle_MXM_Black_F", "", 1, 0, "call life_coplevel >= 5" },
            { "arifle_SPAR_01_blk_F", "", 1, 0, "call life_coplevel >= 5" },
            //Polizeihauptmeister
            { "arifle_MSBS65_black_F", "", 1, 0, "call life_coplevel >= 6" },
            { "arifle_SPAR_02_blk_F", "", 1, 0, "call life_coplevel >= 6" },
            { "SMG_03_TR_black", "", 1, 0, "call life_coplevel >= 6" },
            //Polizeikommissar
            { "arifle_MX_SW_Black_F", "", 500000, 0, "call life_coplevel >= 7" },
            { "arifle_MSBS65_Mark_black_F", "", 1, 0, "call life_coplevel >= 7" },
            //PolizeiOberKOmmissar
            { "srifle_EBR_F", "", 1, 0, "call life_coplevel >= 8" },
            { "srifle_DMR_03_F", "", 1, 0, "call life_coplevel >= 8" },
            { "srifle_DMR_07_blk_F_arco_flash_F", "", 1, 0, "call life_coplevel >= 8" },
            //Polizeihauptkommissar
            { "srifle_DMR_02_F", "", 1, 0, "call life_coplevel >= 9" },
            { "arifle_SPAR_03_blk_F", "", 1, 0, "call life_coplevel >= 9" },
            { "arifle_MSBS65_UBS_black_ico_F", "", 1, 0, "call life_coplevel >= 9" },
            //Polizeirat
            { "arifle_ARX_blk_F", "", 1, 0, "call life_coplevel >= 10" },
            //Polizeiboerrat
            //{ "LMG_Mk200_black_F", "", 1, 0, "call life_coplevel >= 11" }, //Vlt.Raus MK200
            //L.Polizeidirektor
            { "arifle_RPK12_F", "", 1, 0, "call life_coplevel >= 13" },
            { "6Rnd_12Gauge_Pellets", "", 1, 0, "call life_coplevel >= 10" },
            { "muzzle_snds_58_blk_F", "", 1, 0, "call life_coplevel >= 10" },
            { "6Rnd_12Gauge_Slug", "", 1, 0, "call life_coplevel >= 10" }
            //PoizeiVizepräsident / Polizeipräsident
            //{ "srifle_LRR_F", "", 1, 0, "call life_coplevel >= 14" } //Vlt.Raus


        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "30Rnd_9x21_Mag", "", 125, 60, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 125, 60, "" },
            { "50Rnd_570x28_SMG_03", "", 125, 60, "" },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 125, 60, "" },
            { "30Rnd_65x39_caseless_black_mag_Tracer", "", 125, 60, "" },
            { "30Rnd_556x45_Stanag", "", 125, 60, "" },
            { "30Rnd_556x45_Stanag_green", "", 125, 60, "" },
            { "100Rnd_65x39_caseless_black_mag", "", 125, 60, "" },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 125, 60, "" },
            { "20Rnd_762x51_Mag", "", 125, 60, "" },
            { "10Rnd_338_Mag", "", 125, 60, "" },
            { "30Rnd_65x39_caseless_green", "", 125, 60, "" },
            { "30Rnd_65x39_caseless_black_mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", "TaserMagazin", 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "" },
            { "75rnd_762x39_AK12_Mag_F", "", 130, 65, "" },
            { "30Rnd_65x39_caseless_msbs_mag", "", 130, 65, "" },
            { "6Rnd_12Gauge_Pellets", "", 130, 65, "" },
            { "200Rnd_65x39_cased_Box", "", 130, 65, "" },
            { "10Rnd_93x64_DMR_05_Mag", "", 130, 65, "" },
            { "7Rnd_408_Mag", "", 130, 65, "" },
            { "10Rnd_50BWMag", "", 130, 65, "" },
            { "6Rnd_12Gauge_Pellets", "", 130, 65, "" },
            { "6Rnd_12Gauge_Slug", "", 130, 65, "" },
            { "150Rnd_556x45_Drum_Mag_F", "", 200, 100, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "" },
            { "ADR-97-Mag", "", 200, 100, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "" },
            { "acc_flashlight_pistol", "", 250, 125, "" },
            { "acc_flashlight", "", 750, 375, "" },
            { "muzzle_snds_H", "", 750, 375, "" },
            { "muzzle_snds_L", "", 750, 375, "" },
            { "muzzle_snds_M", "", 750, 375, "" },
            { "muzzle_snds_B", "", 750, 375, "" },
            { "muzzle_snds_H_MG", "", 750, 375, "" },
            { "optic_Arco", "", 750, 375, "" },
         		{ "muzzle_snds_93mmg", "", 3500 },
            { "optic_Hamr", "", 750, 375, "" },
            { "optic_Aco", "", 750, 375, "" },
            { "optic_Holosight", "", 750, 375, "" },
            { "optic_Holosight_smg", "", 750, 375, "" },
            { "acc_pointer_IR", "", 750, 375, "" },
            { "optic_MRCO", "", 750, 375, "" },
            { "optic_LRPS", "", 750, 375, "" },
            { "optic_AMS", "", 750, 375, "" },
            { "bipod_01_F_snd", "", 750, 375, "" },
            { "bipod_01_F_blk", "", 750, 375, "" },
            { "optic_ERCO_blk_F", "", 750, 375, "" },
            { "optic_Holosight", "", 1200, 600, "" },
            { "optic_Arco", "", 2500, 1250, "" },
            { "muzzle_snds_58_blk_F", "", 2500, 1250, "" },
            { "muzzle_snds_H", "", 2750, 1375, "" }
        };
    };

    class SEK {
         name = "SEK";
         side = "cop";
         license = "";
         conditions = "call life_coplevel >= 22";
         items[] = {
             { "hgun_P07_snds_F", "Taser", 2000, 650, "" },
             { "SMG_02_F", "Sting", 2000, 650, "" },
             { "arifle_MX_black_F", "", 2000, 650, "" },
             { "arifle_MXC_black_F", "", 2000, 650, "" },
             { "arifle_MX_SW_black_F", "", 2000, 650, "" },
             { "arifle_RPK12_F", "", 2000, 650, "" },
             { "arifle_SPAR_03_blk_F", "", 2000, 650, "" },
             { "arifle_SPAR_01_GL_blk_F", "", 2000, 650, "" },
             { "arifle_MX_GL_Black_F", "", 2000, 650, "" },
             { "srifle_DMR_02_F", "", 2000, 650, "" },
             { "srifle_DMR_07_blk_F", "", 2000, 650, "" },
             { "arifle_SPAR_02_blk_F", "", 2000, 650, "" },
             { "srifle_EBR_F", "", 2000, 650, "" },
             { "LMG_03_F", "", 2000, 650, "" },
             { "MMG_02_black_F", "", 2000, 650, "" },
             { "launch_NLAW_F", "", 2000, 650, "" },
             { "arifle_ARX_blk_F", "", 2000, 650, "" },
             { "srifle_DMR_05_blk_F", "", 2000, 650, "" },
             { "srifle_GM6_F", "", 2000, 650, "" },
             { "HandGrenade_Stone", "Blendgranate", 1700, -1, "" },
             { "Binocular", "", 150, -1, "" },
             { "ItemGPS", "", 100, 45, "" },
             { "FirstAidKit", "", 150, 65, "" },
             { "Rangefinder", "", 150, 65, "" },
             { "B_UavTerminal", "", 150, 65б, "" },
             { "hgun_Pistol_heavy_01_MRD_F", "", 2000, 650, "" },
             { "Laserdesignator_02", "", 150, 65б, "" },
             { "SmokeShellgreen", "Tränengas", 150, 65б, "" },
             { "NVGoggles", "", 2000, 980, "" },
             { "1Rnd_SmokeGreen_Grenade_shell", "", 1, 0, "" },
             { "srifle_LRR_F", "", 1, 0, "" }
         };
         mags[] = {
             { "30Rnd_9x21_Mag", "Taser Munition", 45 },
             { "30Rnd_65x39_caseless_black_mag_Tracer", "", 45 },
             { "20Rnd_762x51_Mag", "", 45 },
             { "20Rnd_650x39_Cased_Mag_F", "", 45 },
             { "10Rnd_338_Mag", "", 45 },
             { "30Rnd_65x39_caseless_green", "", 45 },
             { "5Rnd_127x108_Mag", "", 45 },
             { "5Rnd_127x108_APDS_Mag", "", 45 },
             { "NLAW_F", "", 45 },
             { "75rnd_762x39_AK12_Mag_F", "", 130, 65, "" },
             { "130Rnd_338_Mag", "", 45 },
             { "10Rnd_50BW_Mag_F", "", 45 },
             { "30Rnd_65x39_caseless_green", "", 125, 60, "" },
             { "200Rnd_556x45_Box_Tracer_F", "", 45 },
             { "150Rnd_556x45_Drum_Mag_F", "", 200, 100, "" },
             { "10Rnd_93x64_DMR_05_Mag", "", 45 },
             { "30Rnd_556x45_Stanag", "", 45 },
             { "100Rnd_65x39_caseless_black_mag", "", 45 },
             { "150Rnd_556x45_Drum_Mag_Tracer_F", "", 45 },
             { "11Rnd_45ACP_Mag", "", 45 },
             { "7Rnd_408_Mag", "", 130, 65, "" },
             { "1Rnd_SmokeGreen_Grenade_shell", "", 130, 65, "" },
 			       { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 45 }
         };
         accs[] = {
             { "muzzle_snds_L", "", 650 },
             { "muzzle_snds_I", " ", 650 },
             { "muzzle_snds_b", "", 650 },
             { "muzzle_snds_338_black", "", 650 },
             { "muzzle_snds_65_TI_blk_F", "", 650 },
         			{ "ACC_pointer_IR", "", 3500 },
         			{ "bipod_01_F_blk", "", 3500 },
         			{ "muzzle_sdns_h", "", 3500 },
         			{ "muzzle_sdns_m", "", 3500 },
         			{ "optic_SOS", "", 3500 },
         			{ "muzzle_snds_H", "", 3500 },
         			{ "muzzle_snds_M", "", 3500 },
         			{ "optic_Aco", "", 3500 },
         			{ "optic_MRCO", "", 3500 },
         			{ "optic_AMS", "", 3500 },
         			{ "optic_Nightstalker", "", 3500 },
         			{ "muzzle_snds_93mmg", "", 3500 },
         			{ "optic_tws", "", 3500 },
         			{ "optic_tws_mg", "", 3500 },
         			{ "optic_KHS_blk", "", 3500 },
         			{ "optic_LRPS", "", 3500 },
         			{ "optic_DMS", "", 3500 },
         			{ "optic_Hamr", "", 3500 },
         			{ "optic_MRD", "", 3500 },
         			{ "ACC_flashlight", "", 3500 }
         };
     };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "Medikit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
