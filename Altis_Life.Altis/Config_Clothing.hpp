/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Lachs", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt gestreift", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt dreifarbig", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Secon-Hand Kleidung", 50, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Grün gestreiftes Shirt mit Hose", 500, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Braune Jacke mit Hose", 500, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "Hill-Billy", 500, { "", "", -1 } },
            { "U_C_HunterBody_grn", "Jäger Kleidung", 500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechaniker Kleidung", 500, { "", "", -1 } },
            { "U_OrestesBody", "Surfer Kleidung", 500, { "", "", -1 } },
            { "U_NikosAgedBody", "Bürokaufmann", 650, { "", "", -1 } },
			{ "U_NikosBody", "Niko's Kleidung", 500, { "", "", -1 } },
			{ "U_Marshal", "Marshal Kleidung", 500, { "", "", -1 } },
			{ "U_C_Journalist", "Journalisten Kleidung", 500, { "", "", -1 } },
			{ "U_C_Poor_2", "Hello Kitty", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_gry", "Grauer Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 120, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 120, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 200, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 250, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 450, { "", "", -1 } },            
			{ "B_TacticalPack_oli", "", 350, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 300, { "", "", -1 } },			
			{ "B_Bergen_sgg", "", 450, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 450, { "", "", -1 } },
			{ "B_Carryall_oli", "", 500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 500, { "", "", -1 } }
		};
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Private Uniform", 35, { "", "", -1 } },
			{ "U_I_CombatUniform_tshirt", "Uniform Weiss", 500, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_worn", "Zoll Uniform", 500, { "life_coplevel", "SCALAR", 1 } },
            { "U_I_CombatUniform_shortsleeve", "Uniform Blau", 550, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_Wetsuit", "Taucher Anzug", 550, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_GhillieSuit", "Tarnkleidung", 550, { "life_coplevel", "SCALAR", 6 } },
			{ "U_I_CombatUniform", "Taucher Anzug", 550, { "life_coplevel", "SCALAR", 6 } }
			
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 100, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 120, { "life_coplevel", "SCALAR", 2 } },
            { "H_Beret_02", "", 100, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Watchcap_blk", "", 100, { "life_coplevel", "SCALAR", 6 } },
			
			{ "H_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 7 } },
			{ "H_CrewHelmetHeli_B", "SEK I", 100, { "life_coplevel", "SCALAR", 7 } },
			{ "H_HelmetB_black", "SEK II", 100, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Booniehat_mcamo", "", 100, { "life_coplevel", "SCALAR", 7 } },
			{ "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 7 } },
			{ "H_HelmetIA", "", 100, { "life_coplevel", "SCALAR", 7 } },
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 200, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 250, { "life_coplevel", "SCALAR", 2 } },
			{ "V_RebreatherB", "", 250, { "life_coplevel", "SCALAR", 2 } },
			{ "V_TacVestIR_blk", "", 300, { "life_coplevel", "SCALAR", 7 } },
			{ "V_PlateCarrier1_blk", "", 400, { "life_coplevel", "SCALAR", 6 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
            { "B_Bergen_sgg", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 200, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 250, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 250, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform", "Arbeitsuniform", 500, { "", "", -1 } },
			{ "U_Rangemaster", "Chef Kleidung", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blk", "", 10, { "", "", -1 } },
			{ "H_Cap_marshal", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Bergen_blk", "Rettungsrucksack", 250, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 3500, { "", "", -1 } },
		    { "U_BG_Guerrilla_6_1", "", 3500, { "", "", -1 } },
			{ "U_O_CombatUniform_ocamo", "", 3500, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 3500, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 3500, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 3500, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 3500, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 15000, { "", "", -1 } }
		    { "U_B_GhillieSuit", "", 15000, { "", "", -1 } }
			{ "U_I_GhillieSuit", "", 15000, { "", "", -1 } }
			{ "U_B_CTRG_1", "", 3500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 1000, { "", "", -1 } },
            { "H_Shemag_olive", "", 1000, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 1000, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 1000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1000, { "", "", -1 } },
            { "H_Bandanna_camo", "", 1000, { "", "", -1 } }
			{ "H_Watchcap_blk", "", 1000, { "", "", -1 } }
			{ "H_HelmetB", "", 15000, { "", "", -1 } }
			{ "H_HelmetB_plain_mcamo", "", 15000, { "", "", -1 } }
			{ "H_HelmetIA", "", 15000, { "", "", -1 } }
			{ "C_Kart_01_Blu_F", "", 25000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 100, { "", "", -1 } },
            { "G_Shades_Blue", "", 100, { "", "", -1 } },
            { "G_Sport_Blackred", "", 100, { "", "", -1 } },
            { "G_Sport_Checkered", "", 100, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 100, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 100, { "", "", -1 } },
            { "G_Squares", "", 100, { "", "", -1 } },
            { "G_Lowprofile", "", 100, { "", "", -1 } },
            { "G_Combat", "", 100, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 500, { "", "", -1 } },
            { "G_Balaclava_combat", "", 500, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 500, { "", "", -1 } },
            { "G_Balaclava_oli", "", 500, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 500, { "", "", -1 } },
            { "G_Bandanna_beast", "", 500, { "", "", -1 } },
            { "G_Bandanna_blk", "", 500, { "", "", -1 } },
            { "G_Bandanna_khk", "", 500, { "", "", -1 } },
            { "G_Bandanna_oli", "", 500, { "", "", -1 } },
            { "G_Bandanna_shades", "", 500, { "", "", -1 } },
            { "G_Bandanna_sport", "", 500, { "", "", -1 } },
            { "G_Bandanna_tan", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 17500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 15000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 10000, { "", "", -1 } }
			{ "V_PlateCarrier_Kerry", "", 17500, { "", "", -1 } }
			{ "V_TacVest_brn", "", 20000, { "", "", -1 } }
			{ "V_Chestrig_khk", "", 22500, { "", "", -1 } }
			{ "V_PlateCarrierH_CTRG", "", 30000, { "", "", -1 } }
			{ "V_PlateCarrierIA2_dgtl", "", 45000, { "", "", -1 } }
			{ "V_PlateCarrierIAGL_oli", "", 60000, { "", "", -1 } }
			{ "V_PlateCarrierSpec_mtp", "", 80000, { "", "", -1 } }
			{ "V_PlateCarrierGL_mtp", "", 100000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 250, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 250, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 250, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 250, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 250, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 250, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 250, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 350, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 450, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 450, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 450, { "", "", -1 } },
            { "B_Bergen_sgg", "", 450, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 450, { "", "", -1 } },
            { "B_Bergen_rgr", "", 450, { "", "", -1 } },
            { "B_Bergen_blk", "", 450, { "", "", -1 } },
            { "B_FieldPack_blk", "", 300, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 300, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 500, { "", "", -1 } },
            { "B_Carryall_oli", "", 500, { "", "", -1 } },
            { "B_Carryall_khk", "", 500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
