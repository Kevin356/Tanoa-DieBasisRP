class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 3333, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 33333, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 19666, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 40000, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 266666, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 60000, { "driver" }, { "", "", -1 } },
			{ "C_Van_01_fuel_F",80000, { "driver" }, { "", "" , -1 }},
			{ "C_Offroad_02_unarmed_F", 21333, { "driver" }, { "", "", -1} }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 20000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 20000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 20000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 20000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 3375, { "" }, { "", "", -1 } },
			{ "B_Quadbike_01_F", 2000, { "" }, { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", 2356, {""}, { "life_medicLevel", "SCALAR", 2} },
			{ "B_T_LSV_01_unarmed_F", 4500, { ""}, {"life_medicLevel", "SCALAR", 4} },
			{ "C_Hatchback_01_F", 3500, { "" }, { "life_medicLevel", "SCALAR", 3} },
			{ "C_Offroad_01_repair_F", 3500, { ""}, { "life_medicLevel", "SCALAR", 2} },
			{ "C_SUV_01_F", 3666, { ""}, { "life_medicLevel", "SCALAR", 4} },
			{ "C_Hatchback_01_sport_F", 5000, { ""}, { "life_medicLevel", "SCALAR", 5} },
			{ "B_MRAP_01_F", 6000, { ""}, { "life_medicLevel", "SCALAR", 6} }
/*				
			{ "I_Truck_02_medical_F", 25000, { "" }, { "", "", -1 } },
            { "O_Truck_03_medical_F", 45000, { "" }, { "", "", -1 } },
            { "B_Truck_01_medical_F", 60000, { "" }, { "", "", -1 } }
*/
        };
    };
	
	class med_boat {
		side = "med";
		vehicles[] = {
			{ "C_Scooter_Transport_01_F", 3375, {""}, {"", "", -1} },
			{ "I_C_Boat_Transport_02_F", 5470, {""}, {"life_medicLevel", "SCALAR", 3}	}
		};
	};

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 16666, { "mAir" }, { "life_medicLevel", "SCALAR", 1 } },
            { "O_Heli_Light_02_unarmed_F", 27777, { "mAir" }, { "life_medicLevel", "SCALAR", 4 } },
			{ "B_Heli_Transport_03_unarmed_F", 50000, { "mAir" }, { "life_medicLevel", "SCALAR", 5 } },
			{ "C_Plane_Civil_01_F", 28555, { "mAir" }, { "life_medicLevel","SCALAR", 3} }

        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 93333, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 120000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 150000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 200000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_transport_F", 297132, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 332530, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 259132, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 2666666, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 3333, { "rebel" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 19666, { "rebel" }, { "", "", -1 } },
            { "O_MRAP_02_F", 1000000, { "rebel" }, { "", "", -1 } },
			{ "I_MRAP_03_F", 1333333, { "rebel" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 500466, { "rebel" }, { "", "", -1 } },
			{ "B_T_LSV_01_unarmed_F", 35000, { "rebel" }, { "", "", -1} },
			{ "O_T_LSV_02_unarmed_F", 35000, { "rebel" }, { "", "", -1} },
			{ "O_T_LSV_02_armed_F", 4500000, { "rebel" }, { "", "", -1} }
 //			{ "B_G_Offroad_01_armed_F", 750000, { "rebel" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "B_Quadbike_01_F", 1000, { "" }, { "", "", -1 } },
            { "C_Offroad_01_F", 2333, { "" }, { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", 2333, { "" } ,{ "", "", -1} },
            { "C_Hatchback_01_F", 3000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C_SUV_01_F", 3666, { "" }, { "life_coplevel", "SCALAR", 3 } },
			{ "B_T_LSV_01_unarmed_F", 3666, { "" }, { "life_coplevel", "SCALAR", 4} },
			{ "O_T_LSV_02_unarmed_F", 3666, { "" }, { "life_coplevel", "SCALAR", 4} },
            { "B_MRAP_01_F", 750000, { "" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 657621, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 1177315, { "pilot" }, { "", "", -1 } },
			{ "I_Heli_Transport_02_F", 3317594, { "pilot" }, { "", "", -1 } },
			{ "C_Plane_Civil_01_F", 166666, { "pilot" }, { "", "", -1} }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 13333, { "cAir" }, { "life_coplevel", "SCALAR", 2 } },
            { "O_Heli_light_02_unarmed_F", 23333, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
			{ "B_Heli_Transport_03_unarmed_F", 50000, { "cAir" }, { "life_coplevel", "SCALAR", 4 } },
			{ "I_Heli_light_03_unarmed_F", 33333, { "cAir" }, { "life_coplevel", "SCALAR", 5 } },
			{ "B_Heli_Transport_01_F", 43333, { "cAir" }, { "life_coplevel", "SCALAR", 6 } },
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 20000, { "cg" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "life_coplevel", "SCALAR", 3 } },
			{ "I_C_Boat_Transport_02_F", 2000, { "cg" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_SDV_01_F", 100000, { "cg" }, { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 5000, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 22000, { "boat" }, { "", "", -1 } },
			{ "I_C_Boat_Transport_02_F", 22000, { "boat" }, { "", "", -1 } },
			{ "C_Scoooter_Transport_01_F", 2500, { "boat" }, { "", "", -1 } },
//            { "B_SDV_01_F", 150000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    	INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };
/*
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 3000, 0 };
        garageSell[] = { 0, 0, 10000, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 6500, 0 };
        garageSell[] = { 0, 0, 25000, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {};
    };
*/
    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
        garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 1000;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] = {
			{ "Polizei", "cop", {
				"textures\polizei\air\polizei_ghosthawk_ext1.paa",
				"textures\polizei\air\polizei_ghosthawk_ext2.paa"
			} },
			{ "Navy Seals", "cop", {
				"textures\polizei\air\sek_ghosthawk_ext1.paa",
				"textures\polizei\air\sek_ghosthawk_ext2.paa"
			} }
		};
    };

    class B_MRAP_01_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = {
            { "Polizei", "cop", {
				"textures\polizei\car\polizei_hunter_base.paa",
				"textures\polizei\car\polizei_hunter_adds.paa"
            } },
			{ "Navy Seals", "cop", {
				"textures\polizei\car\sek_hunter_base.paa",
				"textures\polizei\car\sek_hunter_adds.paa"
			}},
			{ "Resque", "med", {
				"textures\resque\car\ehs_hunter_base.paa",
				"textures\resque\car\ehs_hunter_adds.paa"
			} },
			{ "Camo", "civ", {
				"textures\civ\car\civ_hunter_camo_base.paa",
				"textures\civ\car\civ_hunter_camo_adds.paa"
			} }
        };
    };
/*
    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
*/
    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
        garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
/*
    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
*/
    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {									// Tempest Transport
        vItemSpace = 1000;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 600000;
        textures[] = { 
			{"Camo", "civ", {
				"\a3\soft_f_epc\truck_03\Data\truck_03_ext01_co.paa",
				"\a3\soft_f_epc\truck_03\Data\truck_03_ext02_co.paa",
				"\a3\soft_f_epc\truck_03\Data\truck_03_cargo_co.paa"
			} }
		};
    };

    class O_Truck_03_device_F {										// Tempest Gerät
        vItemSpace = 1100;
        storageFee[] = { 95000, 0, 0, 0 };
        garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 1500000;
        textures[] = { 
			{"Camo", "civ", {
				"\a3\soft_f_epc\truck_03\Data\truck_03_ext01_co.paa",
				"\a3\soft_f_epc\truck_03\Data\truck_03_ext02_co.paa"
			} }
		};
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 400;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 250;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 500;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F {										// Rebellen Offorader
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = { };
    };
/*
    class B_G_Offroad_01_armed_F {									//Rebellen Offorader Bewaffnet
        vItemSpace = 65;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 10;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
*/
    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 11000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
        garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
/*
    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
*/
    class B_Truck_01_box_F {									//Hemmet Box
        vItemSpace = 750;
        storageFee[] = { 35000, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 216666;
        textures[] = {
			{"Grün", "civ", {
				"\a3\soft_f_beta\truck_01\Data\truck_01_ext_01_co.paa",
				"\a3\soft_f_beta\truck_01\Data\truck_01_ext_02_co.paa"
			} },
			{"Devil", "civ", {
				"textures\civ\car\civ_hemtt_devil_ext1.paa",
				"textures\civ\car\civ_hemtt_devil_ext2.paa"
			} },
			{"Hello Kitty", "civ", {
				"textures\civ\car\civ_hemtt_kitty_ext1.paa",
				"textures\civ\car\civ_hemtt_kitty_ext2.paa"
			} }
		};
    };

    class B_Truck_01_transport_F {								//Hemet Transport
        vItemSpace = 350;
        storageFee[] = { 25650, 0, 0, 0 };
        garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 127500;
        textures[] = {
			{"Grün", "civ", {
				"\a3\soft_f_beta\truck_01\Data\truck_01_ext_01_co.paa",
				"\a3\soft_f_beta\truck_01\Data\truck_01_ext_02_co.paa"
			} },
			{"Devil", "civ", {
				"textures\civ\car\civ_hemtt_devil_ext1.paa",
				"textures\civ\car\civ_hemtt_devil_ext2.paa"
			} },
			{"Hello Kitty", "civ", {
				"textures\civ\car\civ_hemtt_kitty_ext1.paa",
				"textures\civ\car\civ_hemtt_kitty_ext2.paa"
			} }
		};
    };

    class O_MRAP_02_F {											// Ifrit
        vItemSpace = 75;
        storageFee[] = { 45000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {
			{"Camo", "civ", {
				"textures\civ\car\civ_ifrit_ext1_rot.paa",
				"textures\civ\car\civ_ifrit_ext2_rot.paa"
			} }
		};
    };

    class I_MRAP_03_F {											//Srtyder
        vItemSpace = 125;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
			{"Camo", "civ", {
				"textures\civ\car\civ_stider_camo.paa"
			} },
			{"Polizei", "cop", {
				"textures\polizei\car\polizei_strider.paa"
			} },
			{"Navy Seals", "cop", {
				"textures\polizei\car\sek_strider.paa"
			} }
		};
    };

    class C_Offroad_01_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = {
            { "Rot", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Gelb", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "Weiss", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blau", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dunkel Rot", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blau Weiss", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Dodge", "civ", {
                "textures\civ\car\civ_offroad_dodge.paa"
            } },
            { "Dragonball", "civ", {
                "textures\civ\car\civ_offroad_dragonball.paa"
            } },
			{ "Raptor", "civ", {
				"textures\civ\car\civ_offroader_raptor_beast.paa"
			} },
			{ "Moondye7", "civ", {
				"textures\civ\car\civ_offroad_moondye7.paa"
			} },
			{ "Fox Racing", "civ", {
				"textures\civ\car\civ_offroad_fox.paa"
			} },
			{ "Schwarz", "civ", {
				"textures\civ\car\civ_offroad_schwarz.paa"
			} },
			{ "Polizei", "cop", {
				"textures\polizei\car\polizei_offroad.paa"
			} },
			{ "Resque", "med", {
				"textures\resque\car\ehs_offroad.paa"
			}}
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 60;
        storageFee[] = { 2500, 1000, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 15000;
        textures[] = {
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dunkel Blau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Schwarz Weiss", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Grün", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
			{ "Schwarz", "civ", {
				"\a3\soft_f_gamma\hatchback_01\Data\Hatchback_01_ext_base09_co.paa"
			} },
			{ "Monster", "civ", {
				"textures\civ\car\civ_hatchback_sport_ken_block.paa"
			} },
			{ "Get Right", "civ", {
				"textures\civ\car\civ_hatchback_get_right.paa"
			} },
			{ "Polizei", "cop", {
                "textures\polizei\car\autobahnpolizei_hatchback.paa"
            } },
			{ "Resque", "med", {
				"textures\resque\car\ehs_hatchback.paa"
			} }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1250;
        textures[] = {
            { "Braun", "civ", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Schwarz", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blau", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Rot", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "Weiss", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
			{ "Polizei", "cop", {
				"textures\polizei\car\polizei_quadbike.paa"
			} },
			{ "Resque", "med", {
				"textures\resque\car\ehs_quadbike.paa"
			} }			
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
        garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 50000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Red Bull", "civ", {
                "textures\civ\car\civ_zamak_redbull_ext1.paa",
				"textures\civ\car\civ_zamak_redbull_ext2.paa"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 225;
        storageFee[] = { 12000, 0, 0, 0 };
        garageSell[] = { 49800, 3500, 0, 0 };
        insurance = 6500;
        chopShop = 37500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Red Bull", "civ", {
                "textures\civ\car\civ_zamak_redbull_ext1.paa",
				"textures\civ\car\civ_zamak_redbull_ext2.paa"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 1500;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
			{"Camo", "civ", {
				"\a3\soft_f_epc\truck_03\Data\truck_03_ext01_co.paa",
				"\a3\soft_f_epc\truck_03\Data\truck_03_ext02_co.paa",
				"\a3\soft_f_epc\truck_03\Data\truck_03_cargo_co.paa",
				"\a3\soft_f_epc\truck_03\Data\truck_03_cover_co.paa"
			} }
		};
    };

    class C_Hatchback_01_F {
        vItemSpace = 60;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 4750;
        textures[] = {
			{ "Rot", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dunkel Blau", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Schwarz Weiss", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Grün", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
			{ "Schwarz", "civ", {
				"\a3\soft_f_gamma\hatchback_01\Data\Hatchback_01_ext_base09_co.paa"
			} },
			{ "Monster", "civ", {
				"textures\civ\car\civ_hatchback_sport_ken_block.paa"
			} },
			{ "Get Right", "civ", {
				"textures\civ\car\civ_hatchback_get_right.paa"
			} },
			{ "Polizei", "cop", {
                "textures\polizei\car\autobahnpolizei_hatchback.paa"
            } },
			{ "Resque", "med", {
				"textures\resque\car\ehs_hatchback.paa"
			} }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 75;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Dunkel Rot", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silber", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
			{ "Bifi", "civ", {
				"textures\civ\car\civ_suv_bifi.paa"
			} },
			{ "Camo", "civ", {
				"textures\civ\car\civ_suv_camo.paa"
			} },
			{ "Pokemon", "civ", {
				"textures\civ\car\civ_suv_pokemon.paa"
			} },
			{ "Hello Kitty", "civ", {
				"textures\civ\car\civ_suv_kitty.paa"
			} },
			{ "Monster Energy", "civ", {
				"textures\civ\car\civ_suv_monster.paa"
			} },
			{ "Star Wars", "civ", {
				"textures\civ\car\civ_suv_starwars.paa"
			} },
			{ "E-Sports", "civ", {
				"textures\civ\car\civ_suv_esports.paa"
			} },
			{ "Resque", "med", {
				"textures\resque\car\ehs_suv.paa"
			} },
			{ "Polizei", "cop", {
               "textures\polizei\car\polizei_suv.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {
            { "Weiss", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Schwarz", "civ", {
				"\a3\soft_f_gamma\van_01\Data\van_01_ext_black_co.paa"
			} }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 200;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {
			{ "Weiss", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Schwarz", "civ", {
				"\a3\soft_f_gamma\van_01\Data\van_01_ext_black_co.paa"
			} }
        };
    };

/*    class B_MRAP_01_hmg_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };
*/
    class B_Heli_Light_01_F {
        vItemSpace = 100;
        storageFee[] = { 45000, 19500, 0, 0 };
        garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
            { "ION", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Blau", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Redbull", "civ", {
				"textures\civ\air\civ_hummingbird_redbull.paa"
			} },
			{ "Asimov", "civ", {
				"textures\civ\air\civ_hummingbird_asimov.paa"
			} },
			{ "Hyperbeast", "civ", {
				"textures\civ\air\civ_hummingbird_hyperbeast.paa"
			} },
			{ "Polizei", "cop", {
				"textures\polizei\air\polizei_hummingbird.paa"
			} },
            { "Resque", "med", {
                "textures\resque\air\ehs_hummingbird.paa"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 350;
        storageFee[] = { 55000, 0, 22000, 0 };
        garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 375000;
        textures[] = {
            { "Polizei", "cop", {
                "textures\polizei\air\polizei_orca.paa"
            } },
            { "Blau Weiss", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Grün", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "Resque", "med", {
                "textures\resque\air\ehs_orca.paa"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 1000;
        storageFee[] = { 75000, 0, 0, 0 };
        garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        storageFee[] = { 37500, 10000, 0, 0 };
        garageSell[] = { 75000, 50000, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {};
    };
	
	class C_Offroad_02_unarmed_F {
		vItemSpace = 125;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
		textures[] = {};
	};
	
		class B_T_LSV_01_unarmed_F {
		vItemSpace = 150;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
		textures[] = {};
	};
		
		class O_T_LSV_02_armed_F {
		vItemSpace = 150;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 0;
		textures[] = {};
	};
		
		class O_T_LSV_02_unarmed_F {
		vItemSpace = 150;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
		textures[] = {};
	};
		
		class C_Plane_Civil_01_F {
		vItemSpace = 200;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
		textures[] = {};
	};
		
		class I_C_Boat_Transport_02_F {
		vItemSpace = 200;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
		textures[] = {};
	};
		
		class C_Scoooter_Transport_01_F {
		vItemSpace = 35;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
		textures[] = {};
	};
};
