/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (AP5 & IED component).
 * Function to disarm AP-5 Bustard drones. This is to perent farming infinite MG from the drones.
 * Called from Rev_bustard_fnc_deploy.
 *
 * Arguments:
 * 0: UAV <OBJECT>
 *
 * Return Value: <BOOL>
 *
 * Example:
 * [_unit] call Rev_bustard_fnc_removeWeapon
 *
 */

params [
	["_uav",objNull,[objNull]]
];

if (count (_uav getVariable ["lxws_holdingWeapon",[]]) <= 0) exitWith {false};

private _weapon = _uav getVariable ["lxws_holdingWeapon",[]];
private _mag1 = _weapon # 4;
private _mag2 = _weapon # 5;

[_uav,[_weapon # 0,[0]]] remoteExecCall ["removeWeaponTurret",_uav];
{
	if (count _x != 0) then {[_uav,[_x # 0,[0]]] remoteExecCall ["removeMagazineTurret"] ;} ;
} forEach [_mag1,_mag2];

clearWeaponCargoGlobal _uav;

true;