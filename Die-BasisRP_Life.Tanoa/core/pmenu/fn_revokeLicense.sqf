/*
	File: fn_revokeLicense.sqf

	Description:
	Allows cops to revoke individual licenses, or all licenses. Vehicle related only.
*/
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8"];
createDialog "revokeLicense_Menu";
disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _curTarget) exitWith {hintSilent "Wrong target!"; closeDialog 0;}; //Bad target
if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {hintSilent "Cannot perform this action!"; closeDialog 0;}; //Bad side check?

_display = findDisplay 41000;
_Btn1 = _display displayCtrl 41002;
_Btn2 = _display displayCtrl 41003;
_Btn3 = _display displayCtrl 41004;
_Btn4 = _display displayCtrl 41005;
_Btn5 = _display DisplayCtrl 41006;
_Btn6 = _display DisplayCtrl 41007;
_Btn7 = _display DisplayCtrl 41008;
_Btn8 = _display DisplayCtrl 41009;
life_pInact_curTarget = _curTarget;

//Driver License
_Btn1 buttonSetAction "[10] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//Truck License
_Btn2 buttonSetAction "[11] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//Pilot License
_Btn3 buttonSetAction "[12] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//Boating License
_Btn4 buttonSetAction "[13] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//Diving License
_Btn5 buttonSetAction "[14] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//Taxi License
_Btn6 buttonSetAction "[15] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//All Motor Vehicle Licenses
_Btn7 buttonSetAction "[16] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";

//Firearm License
_Btn8 buttonSetAction "[17] remoteExecCall [""life_fnc_removeLicenses"", life_pInact_curTarget]; closeDialog 0;";