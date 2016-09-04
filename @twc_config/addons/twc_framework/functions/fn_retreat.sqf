/*
*  Trigger ACT: (count thislist) < 4
*
*
*  _TWC = [thislist,"moveaway"] spawn TWC_fnc_Retreat
*
*
*
*/
//Check in case mission maker makes it global trigger.
if(!isServer)exitWith{};
params ["_thislist","_markerMoveTo",["_side",EAST],["_surrender",False]];
//Hint blocks to assist mission makers:
if(isNil "_thislist" || typeName _thislist != "ARRAY")exitWith{hint "You failed with TWC_fnc_retreat\n\n Check the Website for or Management for Help"};
if(isNil "_markerMoveTo" || typeName _markerMoveTo != "STRING")exitWith{hint "You failed with TWC_fnc_retreat\n\n Check the Website for or Management for Help"};
if(isNil "_side" || typeName _side != "SIDE")exitWith{hint "You failed with TWC_fnc_retreat\n\n Check the Website for or Management for Help"};
if(isNil "_surrender" || typeName _surrender != "BOOL")exitWith{hint "You failed with TWC_fnc_retreat\n\n Check the Website for or Management for Help"};

//Code
{
	if (side _x == _side) then{
		[ _x, getmarkerpos _markerMoveTo, 10, "MOVE", "AWARE", "BLUE", "FULL", "COLUMN","[this] call CBA_fnc_taskDefend"] call CBA_fnc_addWaypoint;
		if(_surrender)then{
			_x addEventHandler ["FiredNear",{
				if((side (_this select 7) == WEST) || (_this select 2) < 50)then{
					[(_this select 0), true] call ACE_captives_fnc_setSurrendered;
					_gun = primaryWeapon (_this select 0); 
					_ground = "groundweaponholder" createVehicle (getPos (_this select 0));
					_ground setPos (getPos (_this select 0));
					_ground addWeaponCargoGlobal [_gun,1];
					(_this select 0) removeWeapon _gun;
				};
			}];
		};
	};
}foreach _thislist; 