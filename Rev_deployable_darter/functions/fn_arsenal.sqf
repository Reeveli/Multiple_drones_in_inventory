/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (main component).
 * Client side function to add items to the same custom ACE arsenal category as the drones in the mod.
 *
 * Arguments:
 * 0: Item(s) to add (STRING|ARRAY)
 *
 * Return Value: Category index <NUMBER>
 *
 * Examples:
 * ["ACE_Banana"] call Rev_uav_fnc_arsenal;
 * [["ACE_Canteen","ACE_CableTie"]] call Rev_uav_fnc_arsenal;
 *
 1.2
	Function completely re-written to account for dynamic items list
		Function no longer postInit
		Old functionality is now included in Rev_uav_fnc_init
 1.1
    Weapon classes renamed with mod rewrite
	Function rewritten to be more modular
	Added interface check
	Added return value to exits
 */

if !(hasInterface) exitWith {-1};
if !(isClass (configFile >> "CfgPatches" >> "ace_arsenal")) exitWith {-1};

params [
	["_item","",["",[]]]
];

private _drones = missionNameSpace getvariable ["Rev_uav_arsenalList",[]];

if (typeName _item isEqualTo "ARRAY") then {
	_drones insert [-1, _item, true];
} else {
	_drones pushBackUnique _item;
};

private _old = missionNameSpace getvariable ["Rev_uav_arsenalCategory",-1];
private _id = [_drones, "Drones", "a3\drones_f\air_f_gamma\uav_01\data\ui\uav_01_ca.paa", _old] call ace_arsenal_fnc_addRightPanelButton;

_id;