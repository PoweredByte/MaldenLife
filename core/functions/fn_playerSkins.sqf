#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civ\SpawnUniform.jpg"];
            };

    };
    case west: {
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 1) then {
				player setObjectTextureGlobal [0, "textures\polizei\1.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 2) then {
				player setObjectTextureGlobal [0, "textures\polizei\2.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 3) then {
				player setObjectTextureGlobal [0, "textures\polizei\3.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 4) then {
				player setObjectTextureGlobal [0, "textures\polizei\4.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 5) then {
				player setObjectTextureGlobal [0, "textures\polizei\5.jpg"]
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 6) then {
				player setObjectTextureGlobal [0, "textures\polizei\6.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 7) then {
				player setObjectTextureGlobal [0, "textures\polizei\7.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 8) then {
				player setObjectTextureGlobal [0, "textures\polizei\8.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 9) then {
				player setObjectTextureGlobal [0, "textures\polizei\9.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 10) then {
				player setObjectTextureGlobal [0, "textures\polizei\10.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 11) then {
				player setObjectTextureGlobal [0, "textures\polizei\11.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 12) then {
				player setObjectTextureGlobal [0, "textures\polizei\12.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 13) then {
				player setObjectTextureGlobal [0, "textures\polizei\13.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 14) then {
				player setObjectTextureGlobal [0, "textures\polizei\14.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 15) then {
				player setObjectTextureGlobal [0, "textures\polizei\15.jpg"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 16) then {
				player setObjectTextureGlobal [0, "textures\polizei\16.jpg"];
			};
        //EinsatzUniform
      if ((uniform player) isEqualTo "U_B_CombatUniform_mcam_vest" && FETCH_CONST(life_coplevel) >= 1 ) then {
  				player setObjectTextureGlobal [0, "textures\polizei\Einsatz_Uniform.paa"];
  			};

    if ((uniform player) isEqualTo "U_B_GEN_Commander_F" && FETCH_CONST(life_coplevel) >= 1 ) then {
				player setObjectTextureGlobal [0, "textures\polizei\Polizei_Pullover.paa"];
			};

      if ((uniform player) isEqualTo "U_C_Uniform_Scientist_01_F" && FETCH_CONST(life_coplevel) >= 1 ) then {
  				player setObjectTextureGlobal [0, "textures\hemd.paa"];
  				player setObjectTextureGlobal [1, "textures\id.paa"];          
  			};


      //Einsatz SEK
      if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 22) then {
            player setObjectTextureGlobal [0, "textures\polizei\Einsatz_Uniform.paa"];
        };
    if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 23) then {
            player setObjectTextureGlobal [0, "textures\polizei\Einsatz_Uniform.paa"];
        };
    if ((uniform player) isEqualTo "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) isEqualTo 24) then {
            player setObjectTextureGlobal [0, "textures\polizei\Einsatz_Uniform.paa"];
        };
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam_vest" && FETCH_CONST(life_coplevel) isEqualTo 22) then {
				player setObjectTextureGlobal [0, "textures\sek\SEK.paa"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam_vest" && FETCH_CONST(life_coplevel) isEqualTo 23) then {
				player setObjectTextureGlobal [0, "textures\sek\SEK.paa"];
			};
		if ((uniform player) isEqualTo "U_B_CombatUniform_mcam_vest" && FETCH_CONST(life_coplevel) isEqualTo 24) then {
				player setObjectTextureGlobal [0, "textures\sek\SEK.paa"];
			};
    //SEK GHILLIE
    if (uniform player isEqualTo "U_O_T_FullGhillie_tna_F") then {
            player setObjectTextureGlobal [0, "textures\sek\SEKGhillie.jpg"];
        };
      //RANGEMASTER
    if (uniform player isEqualTo "U_Rangemaster") then {
                player setObjectTextureGlobal [0, "textures\polizei\Rangemaster.jpg"];
        };
      //TAKTISCHE UNIFORM
    if (uniform player isEqualTo "U_I_CombatUniform") then {
                player setObjectTextureGlobal [0, "textures\polizei\bfe.jpg"];
        };

		if (backpack player isEqualTo "B_ViperLightHarness_blk_F") then {
			(backpackContainer player) setObjectTextureGlobal[0,"textures\sek\ViperRucksack.jpg"];
		};
    if (backpack player isEqualTo "B_SCBA_01_F") then {
			(backpackContainer player) setObjectTextureGlobal[0,"textures\Pressluftatmer.paa"];
		};
		if (backpack player isEqualTo "B_Bergen_mcamo") then {
			(backpackContainer player) setObjectTextureGlobal[0,"textures\polizei\polizeibag.paa"];
		};
		if (backpack player isEqualTo "B_Bergen_sgg") then {
			(backpackContainer player) setObjectTextureGlobal[0,"textures\sek\sekBACKPACK.paa"];
		};
		if ((backpack player) == "B_Bergen_Hex_F") then {
			    (unitbackpack player) setObjectTextureGlobal [0,""];
			};
	};

    case independent: {
        if (uniform player isEqualTo "U_BG_Guerilla2_1") then {
            player setObjectTextureGlobal [0, "textures\medic\medNotarzt.jpg"];
        };
		if (backpack player isEqualTo "B_TacticalPack_blk") then {
			(backpackContainer player) setObjectTextureGlobal[0,"textures\medic\medBACKPACK.jpg"];
		};
    };

	case east: {
		if(uniform player isEqualTo "U_B_HeliPilotCoveralls") then {
			player setObjectTextureGlobal [0, "textures\adac\adac_uniform.jpg"];
		};
		if(backpack player isEqualTo "B_Kitbag_cbr") then {
			(backpackContainer player) setObjectTextureGlobal[0, "textures\adac\adac_backpack.jpg"];
		};
	};
};
