/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (main component).
 * Client side preinit to add  custom arsenal category if ACE 3 -mod is in use.
 * I was never able to get related 3DEN eventhandlers to work, something with mod initilization timing (Ace function was recongnized when called).
 *
 * Arguments: NONE
 *
 * Return Value: Category index <NUMBER>
 *
 * Example:
 * call Rev_uav_fnc_arsenal
 *
 1.1
    Weapon classes renamed with mod rewrite
	Function rewritten to be more modular
	Added interface check
	Added return value to exits
 */

if !(hasInterface) exitWith {-1};
if !(isClass (configFile >> "CfgPatches" >> "ace_arsenal")) exitWith {-1};


private _drones = [
	"Rev_Darter",
	"Rev_Pelican",
	"Rev_Demine"
];

if (isClass (configFile >> "CfgPatches" >> "Rev_deployable_designator")) then {_drones pushBackUnique "Rev_Designator"};
if (isClass (configFile >> "CfgPatches" >> "Rev_deployable_ED")) then {_drones pushBackUnique "Rev_Pelter";_drones pushBackUnique "Rev_Roller"};
if (isClass (configFile >> "CfgPatches" >> "Rev_deployable_bustard")) then {_drones pushBackUnique "Rev_Bustard";_drones pushBackUnique "Rev_UAV_IED"};

private _id = [_drones, "Drones", "a3\drones_f\air_f_gamma\uav_01\data\ui\uav_01_ca.paa", -1] call ace_arsenal_fnc_addRightPanelButton;
_id;