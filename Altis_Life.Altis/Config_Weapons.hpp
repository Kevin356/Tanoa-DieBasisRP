/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 9999, 500 },
            { "hgun_Pistol_heavy_02_F", "", 11676, -1 },
            { "hgun_ACPC2_F", "", 13496, -1 },
            { "hgun_PDW2000_F", "", 21369, -1 },
			{ "SMG_01_F", "", 22487, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 },
			{ "optic_Yorris", "", 2500, 250 },
			{ "V_Rangemaster_belt", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "arifle_Katiba_F", "", 49869, 1500 },
			{ "SMG_01_F", "", 22487, -1 },
			{ "arifle_SDAR_F", "", 58632, -1 },
			{ "arifle_TRG20_F", "", 54632, -1 },
			{ "arifle_MXC_F", "", 120562, 1500 },
			{ "arifle_MX_F", "", 150489, 1500 },
			{ "arifle_MXM_F", "", 252685, 1500 },
			{ "srifle_DMR_03_khaki_F", "", 869521, 1500 },
			{ "srifle_DMR_06_camo_F", "", 685421, 1500 },				//mk14
			{ "srifle_DMR_01_F", "", 249654, 1500 },					//Rahim
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "optic_LRPS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 1500, 1500 },
			{ "bipod_01_F_snd", "", 1500, 1500 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 125 },
			{ "20Rnd_556x45_UW_mag", "", 130 },
            { "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 },
			{ "10Rnd_762x54_Mag", "", 250 }	
        };
    };

    class gang {
        name = "Tanoa Gang Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "arifle_Katiba_F", "", 49869, 1500 },
			{ "SMG_01_F", "", 22487, -1 },
			{ "arifle_SDAR_F", "", 58632, -1 },
			{ "arifle_TRG20_F", "", 54632, -1 },
			{ "arifle_MXC_F", "", 120562, 1500 },
			{ "arifle_MX_F", "", 150489, 1500 },
			{ "arifle_MXM_F", "", 252685, 1500 },
			{ "srifle_DMR_03_khaki_F", "", 869521, 1500 },
			{ "srifle_DMR_06_camo_F", "", 685421, 1500 },
			{ "srifle_DMR_01_F", "", 249654, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "optic_LRPS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 1500, 1500 },
			{ "bipod_01_F_snd", "", 1500, 1500 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 125 },
			{ "20Rnd_556x45_UW_mag", "", 130 },
            { "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 },
			{ "10Rnd_762x54_Mag", "", 250 }	
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa Elektro Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Tanoa Tankstellen Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_pvt {
        name = "Tanoa Marine Corps";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
			{ "30Rnd_9x21_Mag", "", 45 }
        };
    };

    class cop_pfc {
        name = "Marine Corps Private First Class Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Du musst Private First Class sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "muzzle_snds_L", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 }
        };
    };

    class cop_lcpl {
        name = "Marine Corps Lance Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Du musst Lance Corporal sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 }
        };
    };
	
	class cop_cpl {
        name = "Marine Corps Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Du musst Corporal sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 }
        };
    };
	
	class cop_sgt {
        name = "Marine Corps Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Du musst Sergeant sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 }
        };
    };
	
	class cop_ssgt {
        name = "Marine Corps Staff Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Du musst Staff Sergeant sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 }			
        };
    };
	
	class cop_gsgt {
        name = "Marine Corps Gunnery Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Du musst Gunnery Sergeant sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "srifle_DMR_03_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 }			
        };
    };
	
	class cop_msgt {
        name = "Marine Corps Master Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Du musst Master Sergeant sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "srifle_DMR_03_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_AMS_snd", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_KHS_tan", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
			{ "bipod_01_F_snd", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 }			
        };
    };
	
	class cop_fsgt {
        name = "Marine Corps First Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Du musst First Sergeant sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "srifle_DMR_03_F", "", 7500, 1500 },
			{ "srifle_DMR_03_tan_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_AMS_snd", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_KHS_tan", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
			{ "bipod_01_F_snd", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 }			
        };
    };
	
	class cop_mgsgt {
        name = "Marine Corps Master Gunnery Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "Du musst Master Gunnery Sergeant sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "srifle_DMR_03_F", "", 7500, 1500 },
			{ "srifle_DMR_03_tan_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_AMS_snd", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_KHS_tan", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
			{ "bipod_01_F_snd", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 }			
        };
    };
	
	class cop_sgtmaj {
        name = "Marine Corps Sergeant Major Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 11, "Du musst Master Sergeant Major sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "srifle_DMR_03_F", "", 7500, 1500 },
			{ "srifle_DMR_03_tan_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_AMS_snd", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_KHS_tan", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
			{ "bipod_01_F_snd", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 }			
        };
    };
	
	class cop_sgtmajmc {
        name = "Marine Corps Sergeant Major of the Marine Corps Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 12, "Du musst Master Sergeant Major of the Marine Corps sein!" };
        items[] = {
            { "arifle_sdar_F", "Taser Gewehr", 20000, 7500 },
            { "hgun_P07_snds_F", "Taser Pistole", 2000, 650 },
			{ "SMG_02_ACO_F", "", 7500, 1500 },
			{ "arifle_MXC_Black_F", "", 7500, 1500 },
			{ "arifle_MX_Black_F", "", 7500, 1500 },
			{ "arifle_MXM_Black_F", "", 7500, 1500 },
			{ "arifle_MX_SW_Black_F", "", 7500, 1500 },
			{ "srifle_EBR_F", "", 7500, 1500 },
			{ "srifle_DMR_03_F", "", 7500, 1500 },
			{ "srifle_DMR_03_tan_F", "", 7500, 1500 },
			{ "srifle_DMR_02_F", "", 7500, 1500 },
			{ "optic_MRD", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Holosight_smg", "", 1500, 1500 },
			{ "optic_ACO_smg", "", 1500, 1500 },
			{ "optic_Arco", "", 1500, 1500 },
			{ "optic_Hamr", "", 1500, 1500 },
			{ "optic_MRCO", "", 1500, 1500 },
			{ "optic_DMS", "", 1500, 1500 },
			{ "optic_NVS", "", 1500, 1500 },
			{ "optic_AMS", "", 1500, 1500 },
			{ "optic_AMS_snd", "", 1500, 1500 },
			{ "optic_KHS_blk", "", 1500, 1500 },
			{ "optic_KHS_tan", "", 1500, 1500 },
			{ "optic_SOS", "", 1500, 1500 },
			{ "optic_LRPS", "", 1500, 1500 },
			{ "bipod_01_F_blk", "", 250, 75 },
			{ "bipod_01_F_snd", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
			{ "muzzle_snds_H", "", 650, -1 },
			{ "muzzle_snds_B", "", 650, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
			{ "Rangefinder", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 130 },
			{ "20Rnd_556x45_UW_mag", "Taser Gewehr Magazine", 45 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 },
			{ "10Rnd_338_Mag", "", 250 }				
        };
    };

    //Medic Shops
    class med_basic {
        name = "Rescue Service";
        side = "med";
        license = "";
        level[] = { "", "", -1, "Du bist nicht im Rescue Service" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 },
			{ "Chemlight_red", "", 200, 980 }
        };
        mags[] = {};
    };
};
