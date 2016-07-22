#include "..\..\script_macros.hpp"
/*
	File: fn_ernaehrenaction.sqf
	Author: Kevin Berger
	
	Description:
	This Function is for the Civillian Interaction to restraint People
*/
private["_target"];
_target = cursorTarget;

if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};

[player] remoteExecCall ["life_fnc_ernaeren",_target];
sleep 2
