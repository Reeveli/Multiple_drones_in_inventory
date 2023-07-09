/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side function called from CBA context menu of designators to assemble.
 * Can be called for others items as well if for whatever reason someone wants to do that.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [_unit] call Rev_designator_fnc_deploy;
 *
 */

if !(hasInterface) exitWith {false;};

params [
	["_unit",objNull,[objNull]]
];

closeDialog 602;
[_unit, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];

private _vehicletype = nil;


switch (side _unit) do {
    case west: {_vehicletype = "B_Rev_Designator"};
    case opfor: {_vehicletype = "O_Rev_Designator"};
    case independent: {_vehicletype = "I_Rev_Designator"};
    case civilian: {_vehicletype = "C_Rev_Designator"};
};


private _dir = getDir _unit;
private _uav = ([_unit getRelPos [1,0], _dir, _vehicletype,  side _unit] call BIS_fnc_spawnVehicle) select 0;

true;
