if (!isDedicated) exitWith {};

["CBA_settingsInitialized", {
	// Don't run on public.
	if (TWC_Core_isPublic) exitWith {};

	/** Captures death events and stores the data. This is used for death screens and outros. **/
	TWC_Dead_Players = [];

	// Legacy support for bloodlust.
	["TWC_UnitVaporized", {
		params ["_unit"];

		["TWC_Unit_Perished", [_unit, "instant_death"]] call CBA_fnc_globalEvent;
	}] call CBA_fnc_addEventHandler;

	["TWC_addPerishedToServer", {
		params ["_unit", ["_reason", "clinical_death"]];
		
		if (getPlayerUID _unit == "" || getPlayerUID _unit == "_SP_AI_") exitWith {};
		
		_deathData = [_unit, _reason] call TWC_Deathscreen_fnc_getDeathData;
		TWC_Dead_Players pushBack [_unit, [_deathData]];
	}] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;