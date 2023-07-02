/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side function called from the user actions of drones to turn them into pickable items.
 * Can be called for others items as well if for whatever reason someone wants to do that. Items not configured by the mod are dissasembled into deployable darters.
 *
 * Arguments:
 * 0: Drone <OBJECT>
 *
 * Return Value: <NONE>
 *
 * Example:
 * [_drone] call Rev_uav_fnc_pick_drone
 *
 */

if !(hasInterface) exitWith {};

params [
	["_drone",objNull,[objNull]]
];

if (isNull _drone) exitWith {}; 

private _type = getText (configfile >> "CfgVehicles" >> typeOf _drone >> "Rev_uav_class");
private _pos = getPosATL _drone;
private _dir = getDir _drone;

switch (_type) do 
{
	case "scout": 
	{
		deleteVehicle _drone;
		[player, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];		
    	private _drone = createVehicle ["Rev_darter_packed", _pos, [], 0, "CAN_COLLIDE"];
		_drone setDir _dir;
	};	
	case "utility": 
	{
		deleteVehicle _drone;
		[player, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];		
    	private _drone = createVehicle ["Rev_pelican_packed", _pos, [], 0, "CAN_COLLIDE"];
		_drone setDir _dir;
	};
	case "demining": 
	{
		deleteVehicle _drone;
		[player, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];		
    	private _drone = createVehicle ["Rev_demine_packed", _pos, [], 0, "CAN_COLLIDE"];
		_drone setDir _dir;
	};
	default
	{
		deleteVehicle _drone;
		[player, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];		
    	private _drone = createVehicle ["Rev_darter_packed", _pos, [], 0, "CAN_COLLIDE"];
		_drone setDir _dir;
	};	
};