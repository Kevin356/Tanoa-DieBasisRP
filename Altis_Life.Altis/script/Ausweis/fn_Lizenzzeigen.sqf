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
   case 1: { _rang = "Polizeimeisteranwaerter"; };
   case 2: { _rang = "Polizeimeister"; };
   case 3: { _rang = "Polizeiobermeister"; };
   case 4: { _rang = "Polizeikommissar"; };
   case 5: { _rang = "Polizeioberkommissar"; };
   case 6: { _rang = "Polizeihauptkommissar"; };
   case 7: { _rang = "Erster Polizeihauptkommissar"; };
   case 8: { _rang = "Polizeirat"; };
   case 9: { _rang = "Polizeioberrrat"; };
   case 10: { _rang = "Polizeidirektor"; };
   case 11: { _rang = "Leitender Polizeidirektor"; };
   case 12: { _rang = "Direktor der Bundespolizei"; };
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
  }else{
   _rang = "Zivilist";
   _marke = "marke_abi";
   _org = "Republik Altis";
  };  
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];


[player, _message] remoteExecCall ["life_fnc_Lizenzsehen", _ziel];