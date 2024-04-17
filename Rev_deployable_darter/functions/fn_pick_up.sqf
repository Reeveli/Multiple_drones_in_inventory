/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (main component).
 * Client side function called from the user actions of drones to turn them into pickable items.
 * Can be called for others items as well if for whatever reason someone wants to do that.
 *
 * Arguments:
 * 0: Drone <OBJECT>
 * 1: Type (class name) <STRING>
 *
 * Return Value: <NONE>
 *
 * Example:
 * [_drone, 'Item_Rev_Darter'] call Rev_uav_fnc_pick_up
 *
 2.0
	Function rewritten with new parameter
    Animation stance is now based on player stance
 1.1
    All vehicle classes renamed with mod rewrite
	Fixed wrong info in header
 */

if !(hasInterface) exitWith {};

params [
	["_drone",objNull,[objNull]],
	["_type","Item_Rev_Darter",[""]]
];

if (isNull _drone) exitWith {}; 
if (_type isEqualTo "") exitWith {}; 

private _pos = getPosATL _drone;
private _dir = getDir _drone;
deleteVehicle _drone;
private _anim = if (stance player == "STAND") then {"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"} else {"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"};
[player, _anim] remoteExec ["switchMove", 0];	
private _new = createVehicle [_type, _pos, [], 0, "CAN_COLLIDE"];
_new setDir _dir;