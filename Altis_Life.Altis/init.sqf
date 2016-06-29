StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "script\welcome.sqf"; // Load Welcome Message
[] execVM "script\monitor.sqf"; // Load StatusBar
[] execVM "script\intlight.sqf"; // Load Innenbeleuchtung

StartProgress = true;