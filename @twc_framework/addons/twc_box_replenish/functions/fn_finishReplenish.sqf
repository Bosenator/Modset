params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_source", "_type", "_target"];

// inform the user of the outcome
_targetDisplayName = getText (configFile >> "CfgVehicles" >> typeOf _target >> "displayName");

// if no error, proceed!
if (_errorCode == 0) then {
	// delete the target box and decrement counter on supply box
	_boxString = format ["TWC_Replenish_%1", _type];
	_previousCount = _source getVariable [_boxString, 0];
	
	_previousType = typeOf _target;
	_previousPos = getPosATL _target;
	_previousDir = getDir _target;

	// in the case of 0, we ignore it as it's disabled. -1 is infinite.
	if (_previousCount != 0) then {
		_source setVariable [_boxString, (_previousCount - 1), true];
	};

	// spawn a new one of the target box, at the previous location
	deleteVehicle _target;
	_newBox = createVehicle [_previousType, _previousPos, [], 0, "CAN_COLLIDE"];
	_newBox setDir _previousDir;
};

private _structuredOutputText = if (_errorCode == 0) then {
	parsetext (("<t align='center'><t size='1.5'><t color='#ffbf00'>Replenish Complete</t></t></t><br/>Replenished ") + _targetDisplayName);
} else {
	parsetext (("<t align='center'><t size='1.5'><t color='#ff0000'>Replenish Interrupted</t></t></t><br/>Replenish halted on ") + _targetDisplayName);
};

[_structuredOutputText, false, 2.5] call ace_common_fnc_displayText;