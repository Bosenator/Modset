params ["_caller", "_target"];

_unCon = _target getVariable ["ace_medical_inReviveState", false];

if (_unCon) then {
	_reviveStartTime = _target getVariable ["ace_medical_reviveStartTime", 0];

	if (_reviveStartTime > 0) then {
		_bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodVolume;
		_numOfNearPeople = count ((allUnits select {_x distance _target < 2}) - [_caller, _target]);

		if (_numOfNearPeople > 0) then {
			_timeToAdd = (_reviveStartTime + 15) + ((30 * _bloodVolume) / _numOfNearPeople);
		} else {
			_timeToAdd = (_reviveStartTime + 15) + (30 * _bloodVolume);
		};

		_target setVariable ["ace_medical_reviveStartTime", _timeToAdd min CBA_missionTime, true];
	};
};

_target getVariable "ace_medical_reviveStartTime";