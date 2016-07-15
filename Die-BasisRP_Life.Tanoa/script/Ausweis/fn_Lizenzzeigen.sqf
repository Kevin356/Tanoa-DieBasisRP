//Author: PierreAmyf edit by Kevin
if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];


if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};    
if(!(_ziel isKindOf "Man")) then {_ziel = player;};  
if(!(alive _ziel)) then {_ziel = player;};


switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Private"; };
   case 2: { _rang = "Private First Class"; };
   case 3: { _rang = "Lance Corporal"; };
   case 4: { _rang = "Corporal"; };
   case 5: { _rang = "Sergeant"; };
   case 6: { _rang = "Staff Sergeant"; };
   case 7: { _rang = "Gunnery Sergeant"; };
   case 8: { _rang = "Master Sergeant"; };
   case 9: { _rang = "First Sergeant"; };
   case 10: { _rang = "Master Gunnery Sergeant"; };
   case 11: { _rang = "Sergeant Major"; };
   case 12: { _rang = "Sergeant Major of the Marine Corps"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Polizei Altis";
 };

 case independent:{
  switch (call life_mediclevel) do{
   case 1: { _rang = "Sanitaeter"; };
   case 2: { _rang = "ADAC Mitglied"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_ziv";
  _org = "Republik Altis";
 };
 case civilian:{
  if(playerSide == civilian)then{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = "Republik Altis";
  };  
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];


[player, _message] remoteExecCall ["life_fnc_Lizenzsehen", _ziel];