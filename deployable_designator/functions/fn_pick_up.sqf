/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side function called from the user actions of drones to turn them into pickable items.
 * Can be called for others items as well if for whatever reason someone wants to do that.
 *
 * Arguments:
 * 0: Drone <OBJECT>
 *
 * Return Value: <NONE>
 *
 * Example:
 * [_drone] call Rev_designator_fnc_pick_up
 *
 */

if !(hasInterface) exitWith {};

params [
	["_drone",objNull,[objNull]]
];

if (isNull _drone) exitWith {}; 

private _pos = getPosATL _drone;
private _dir = getDir _drone;


deleteVehicle _drone;
[player, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];		
private _drone = createVehicle ["Item_Rev_Designator", _pos, [], 0, "CAN_COLLIDE"];
_drone setDir _dir;