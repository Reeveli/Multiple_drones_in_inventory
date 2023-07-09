/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side preinit function to add CBA contect menu actions to designator items.
 * Additional functionality of creating a custom arsenal category if ACE 3 -mod is in use.
 *
 * Arguments: NONE
 *
 * Return Value: <NONE>
 *
 */

if !(hasInterface) exitWith {};

["Rev_Designator", ["CONTAINER","CLOTHES"], ["Assemble designator"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit] call Rev_designator_fnc_deploy;
},true] call CBA_fnc_addItemContextMenuOption;