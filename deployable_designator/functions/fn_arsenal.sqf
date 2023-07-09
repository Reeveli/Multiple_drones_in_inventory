/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side preinit function to add  custom arsenal category if ACE 3 -mod is in use.
 *
 * Arguments: NONE
 *
 * Return Value: Category index <NUMBER>
 *
 */


if !(isClass (configFile >> "CfgPatches" >> "ace_arsenal")) exitWith {};



private _drones = [
	"Rev_darter_item",
	"Rev_pelican_item",
	"Rev_demine_item",
	"Rev_Designator"
];

private _id = [_drones, "Drones", "a3\drones_f\air_f_gamma\uav_01\data\ui\uav_01_ca.paa", -1] call ace_arsenal_fnc_addRightPanelButton;

_id;
