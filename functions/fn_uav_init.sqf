/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod.
 * Client side preinit function to add CBA contect menu actions to drone items.
 *
 * Arguments: NONE
 *
 * Return Value: <NONE>
 *
 */

if !(hasInterface) exitWith {};

["Rev_darter_item", ["CONTAINER","CLOTHES"], ["Deploy UAV"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_uav_fnc_deploy_uav;
},true] call CBA_fnc_addItemContextMenuOption;

["Rev_pelican_item", ["CONTAINER","CLOTHES"], ["Deploy UAV"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_uav_fnc_deploy_uav;
},true] call CBA_fnc_addItemContextMenuOption;

["Rev_demine_item", ["CONTAINER","CLOTHES"], ["Deploy UAV"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_uav_fnc_deploy_uav;
},true] call CBA_fnc_addItemContextMenuOption;