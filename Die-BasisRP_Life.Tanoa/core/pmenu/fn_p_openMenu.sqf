#include "..\..\script_macros.hpp"
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens the players virtual inventory menu
*/
if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch(playerSide) do {
	case west: {
		ctrlShow[2011,false];
		ctrlShow[20210,false];	//admin Icon
		ctrlShow[2021,false];	//Admin Menü
		ctrlShow[2028,false];	//Craft
		ctrlShow[1258,false];	//Craft Icon
		ctrlShow[20212,false];	//Support Icon
		ctrlShow[1207,false];	//Gang Icon
		ctrlShow[1209,false];	//Gang
		ctrlShow[9800,true];	//Wantedadd Icon
		ctrlShow[9801,true];	//Wantedadd
	};

	case civilian: {
		ctrlShow[1210,false];	//Wanted Icon
		ctrlShow[2008,false];	//Wanted
		ctrlShow[20210,false];	//Admin Icon
		ctrlShow[2021,false];	//Admin Menü
		ctrlShow[20212,false];	//support Icon
		ctrlShow[2025,false];	//Support Menü
		ctrlShow[9800,false];	//Wantedadd Icon
		ctrlShow[9801,false];	//Wantedadd
	};
	
	case independent:
	{

		ctrlShow[1210,false];	//Wantet Icon
		ctrlShow[2008,false];	//Wanted
		ctrlShow[20210,false];	//Admin Icon
		ctrlShow[2021,false];	//Admin Menü
		ctrlShow[2028,false];	//craft
		ctrlShow[1258,false];	//Craft Icon
		ctrlShow[1207,false];	//Gang Icon
		ctrlShow[1209,false];	//Gang
		ctrlShow[9800,false];	//Wantedadd Icon
		ctrlShow[9801,false];	//Wantedadd
	};
};

if(FETCH_CONST(life_adminlevel) > 1) then {
	ctrlShow[20210,true]; //Admin Menü Icon
	ctrlShow[2021,true]; //Admin Menü	Knopf
	
};

[] call life_fnc_p_updateMenu;