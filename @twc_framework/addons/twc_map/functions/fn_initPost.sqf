if !(hasInterface) exitWith {};

["visibleMap", {
	params ["", "_visible"];
	
	if (!_visible) then {
		if (twc_map_temporary) then {
			player unlinkItem "ItemMap";
			twc_map_temporary = false;
		};

		twc_map_lookingAt = 0; // assert reset
	};
}] call CBA_fnc_addPlayerEventHandler;

["twc_map_closed", {
	params ["_mapID"];

	if (!visibleMap) exitWith {};

	if (twc_map_lookingAt isEqualTo _mapID) then {
		twc_map_lookingAt = 0;
		[] call twc_map_fnc_removeTempMarkers;
		openMap false;
	};
}] call CBA_fnc_addEventHandler;

["twc_map_opened", {
	params ["_mapID"];

	twc_map_lookingAt = _mapID;
	_ownsAMap = ("ItemMap" in (vestItems player + uniformItems player + backpackItems player + assignedItems player));

	if !(_ownsAMap) then {
		twc_map_temporary = true;
		player linkItem "ItemMap";
	};

	openMap true;
	ctrlSetFocus ((findDisplay 12) displayCtrl 51);
}] call CBA_fnc_addEventHandler;

["ace_settingsInitialized", {
	["twc_map_newMarker", {
		params ["_caller", "_markerArray"];

		// safety check
		if ((player distance _caller) > ace_map_gestures_maxRange) exitWith {};
		if !(_markerArray isEqualTo []) exitWith {};

		// create the new marker locally
		_newMarker = createMarkerLocal [_markerArray select 0, _markerArray select 2];
		
		if ((_markerArray select 1) == "ICON") then {
			_newMarker setMarkerTypeLocal (_markerArray select 5);
			_newMarker setMarkerTextLocal (_markerArray select 7);
		} else {
			_newMarker setMarkerShapeLocal (_markerArray select 1);
			_newMarker setMarkerBrushLocal (_markerArray select 6);
			_newMarker setMarkerSizeLocal (_markerArray select 8);
		};

		_newMarker setMarkerColorLocal (_markerArray select 3);
		_newMarker setMarkerDirLocal (_markerArray select 4);
	}] call CBA_fnc_addEventHandler;
	
	// Used for when copying a lot of markers, say from a map board etc.
	["twc_map_newMarkers", {
		params ["_caller", "_markersArray"];

		// helps cut performance loss, even if a bit redundant
		if ((player distance _caller) > ace_map_gestures_maxRange) exitWith {};
		if !(_markersArray isEqualTo []) exitWith {};

		{
			["twc_map_newMarker", [_caller, _x]] call CBA_fnc_localEvent;
		} forEach _markersArray;
	}] call CBA_fnc_addEventHandler;
	
	/* ["created", {
		params ["_marker"];
		
		
	}] call CBA_fnc_addMarkerEventHandler;
	
	["deleted", {
		params ["_marker"];
		
		
	}] call CBA_fnc_addMarkerEventHandler; */
}] call CBA_fnc_addEventHandler;

//Adding mission event handlers for map creation and deletion
addMissionEventHandler ["MarkerCreated",{
	params ["_marker", "_channelNumber", "_owner", "_local"];
	
	//Ignores code when created by server or triggers
	if(!(_local))exitWith{};
	
	//Gets markerInfo needed to copy
	_pos = getMarkerPos _marker;
	_dir = markerDir _marker;
	_type = getMarkerType _marker;
	_shape = markerShape _marker;
	_size = getMarkerSize _marker;
	_text = markerText _marker;
	_alpha = markerAlpha _marker;
	
	_markerInfo = [_marker, _pos, _dir, _type, _shape, _size, _text, _alpha];
	_array = _owner getVariable ["twc_localMarkers", []];
	_array pushback _markerInfo;
	_owner setVariable ["twc_localMarkers", _array, true];
}];

addMissionEventHandler ["MarkerDeleted", {
	params ["_marker", "_local"];
	
	//If the server deletes a marker it won't affect us
	if(!(_local))exitWith {};
	
	//We need to delete this marker from the players twc_localMarkers
	_array = player getVariable ["twc_localMarkers",[]];
	{
		_delete = 0;
		if((_x select 1) == _marker)then{
			_delete = 1;
		};
		if(_delete == 1)then{
			_array = _array - _x;
		};
	}forEach _array;
}];