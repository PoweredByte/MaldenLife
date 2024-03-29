/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Malden {
        class Civilian {
            class Arudy {
                displayName = "Arudy";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class La_Trinite {
                displayName = "La Trinite";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class La_Pessagne {
                displayName = "La Pessagne";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class Rebel {
                displayName = "Rebellenspawn";
                spawnMarker = "rebel_1";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };
/*
            class Athira {
                displayName = "Athira";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Sofia {
                displayName = "Sofia";
                spawnMarker = "civ_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class RebelN {
                displayName = $STR_SP_Reb_N;
                spawnMarker = "Rebelop";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelS {
                displayName = $STR_SP_Reb_S;
                spawnMarker = "Rebelop_1";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelE {
                displayName = $STR_SP_Reb_E;
                spawnMarker = "Rebelop_2";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };
*/
        };

        class Cop {
            class HauptHQ {
                displayName = "Haupt HQ";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class NordHQ {
                displayName = "Nord HQ";
                spawnMarker = "cop_spawn_7";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class SEKKaserne {
                displayName = "Sek Kaserne";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\bunker_CA.paa";
                conditions = "call life_coplevel >= 22";
            };
            class FlughafenHQ {
                displayName = "Flughafen HQ";
                spawnMarker = "cop_spawn_6";
                icon = "\a3\ui_f\data\map\MapControl\bunker_CA.paa";
                conditions = "call life_coplevel >= 22";
            };
/*
            class Athira {
                displayName = "Athira HQ";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = "Pyrgos HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class Air {
                displayName = $STR_MAR_Police_Air_HQ;
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
                conditions = "call life_coplevel >= 2 && {license_cop_cAir}";
            };

            class HW {
                displayName = $STR_MAR_Highway_Patrol;
                spawnMarker = "cop_spawn_5";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "call life_coplevel >= 3";
            };
*/
        };

        class Medic {
            class Krankenhaus {
                displayName = "Haupt HQ";
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class Fire_La_trinite {
                displayName = "Feuerwehr La Trinité";
                spawnMarker = "fire_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
/*
            class Athira {
                displayName = $STR_SP_EMS_Ath;
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class Pyrgos {
                displayName = $STR_SP_EMS_Pyr;
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
*/
        };

        class Adac {
            class Werkstatt {
            displayName = "Werkstatt HQ";
            spawnMarker = "adac_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            conditions = "";
            };
        };


    };
};
