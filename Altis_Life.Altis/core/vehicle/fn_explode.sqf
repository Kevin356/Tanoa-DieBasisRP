//////////////////////////////////////////
//	File: fn_explode.sqf				//
//	Author: Keivn						//
//										//
//////////////////////////////////////////

private ["_vehicle"];
_vehicle = vehicle player;





if(typeOf _curTarget == "I_MRAP_03_F") then {
hint "Das Fahrzeug wird nun Zerstört";
sleep 10;
_vehicle setDamage 100;
} else {
Hint "Das Farzeug darfst du nicht Zerstören!";
};