/*
	File: fn_civInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Replaces the mass addactions for various cop actions towards another player.
*/

//Glitch Fix
if(player distance cursorTarget > 4) exitWith {};

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Title 37401

private["_display","_unit","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10"];
if(!dialog) then {
	createDialog "pInteraction_Menu";
};
disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!isPlayer _curTarget) exitWith {closeDialog 0;}; //Bad side check?
_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;


life_pInact_curTarget = _curTarget;

//Set Robber Button
_Btn1 ctrlSetText "STR_pInAct_Ausrauben";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_robAction; closeDialog 0;";

_Btn2 ctrlSetText "STR_pInAct_Verbinden";
_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_augenverbinden; closeDialog 0;";

_Btn3 ctrlSetText "STR_pInAct_ernähren";
_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_ernaehrenaction; closeDialog 0;";

//Set Escort Button
if((_curTarget getVariable["Escorting",false])) then {
	_Btn6 ctrlSetText localize "STR_pInAct_StopEscort";
	_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; [life_pInact_curTarget] call life_fnc_civInteractionMenu;";
} else {
	_Btn6 ctrlSetText localize "STR_pInAct_Escort";
	_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

_Btn5 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";
//Set Entfesseln Button
_Btn4 ctrlSetText "Uncuff";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn7 ctrlEnable false;
_Btn8 ctrlEnable false;
_Btn9 ctrlEnable false;
