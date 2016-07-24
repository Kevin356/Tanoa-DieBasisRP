/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if(playerSide == west && side _unit == west) exitWith {};
if((player distance _unit > 3)) exitWith {};
if((_unit getVariable "restrained")) exitWith {};
//if(side _unit == west) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
//Broadcast!

/*_unit setVariable["restrained",true,true];
[[player], "life_fnc_restrain", _unit, false] call life_fnc_MP;
[[0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]],"life_fnc_broadcast",west,false] call life_fnc_MP;*/

if(life_inv_handcuffs < 1) then 
{
    hint "Du besitzt keine Handschellen";
} else {
    life_inv_handcuffs = life_inv_handcuffs - 1;
    //_unit say3D "handcuffs";
    _unit setVariable["restrained",true,true];
    hint "Spieler ist nun gefesselt.";
    [[player], "life_fnc_restrain", _unit, false] spawn life_fnc_MP;
    [[0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
}; 
