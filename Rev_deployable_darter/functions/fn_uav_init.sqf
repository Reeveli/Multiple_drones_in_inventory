/*
 * Author: Reeveli 
 * Part of Multiple drones in inventory mod (main component).
 * Client side preinit function to add CBA contect menu actions to drone items.
 * Also created assembly/dissassembly Ace actions if mod is present.
 *
 * Arguments: NONE
 *
 * Return Value: <NONE>
 *
 2.0
    All weapon classes renamed with mod rewrite
    Added Ace actions
 */

if !(hasInterface) exitWith {};

["Rev_Darter", ["CONTAINER","CLOTHES"], ["Deploy UAV"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_uav_fnc_deploy_uav;
},true] call CBA_fnc_addItemContextMenuOption;

["Rev_Pelican", ["CONTAINER","CLOTHES"], ["Deploy UAV"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_uav_fnc_deploy_uav;
},true] call CBA_fnc_addItemContextMenuOption;

["Rev_Demine", ["CONTAINER","CLOTHES"], ["Deploy UAV"], [], "", [{true},{params ["_unit", "_container", "_item", "_slot", "_params"];_unit == vehicle _unit}], {  
    params ["_unit", "_container", "_item", "_slot", "_params"]; 
    [_unit,_item] call Rev_uav_fnc_deploy_uav;
},true] call CBA_fnc_addItemContextMenuOption;


//Ace actions
if !(isClass (configFile >> "CfgPatches" >> "ace_interaction")) exitWith {};

private _dissassemble =
[
    "Rev_dissassemble",
    "Dissassemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_target,'Item_Rev_Darter'] call Rev_uav_fnc_pick_up},
    {alive _target && vehicle _player == _player && ((UAVControl _target) select 1 isEqualto '')}
] call ace_interact_menu_fnc_createAction;

private _dissassemble2 =
[
    "Rev_dissassemble2",
    "Dissassemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_target,'Item_Rev_Pelican'] call Rev_uav_fnc_pick_up},
    {alive _target && vehicle _player == _player && ((UAVControl _target) select 1 isEqualto '')}
] call ace_interact_menu_fnc_createAction;

private _dissassemble3 =
[
    "Rev_dissassemble3",
    "Dissassemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_target,'Item_Rev_Demine'] call Rev_uav_fnc_pick_up},
    {alive _target && vehicle _player == _player && ((UAVControl _target) select 1 isEqualto '')}
] call ace_interact_menu_fnc_createAction;

["B_Rev_Darter", 0, ["ACE_MainActions"], _dissassemble,false] call ace_interact_menu_fnc_addActionToClass;
["O_Rev_Darter", 0, ["ACE_MainActions"], _dissassemble,false] call ace_interact_menu_fnc_addActionToClass;
["I_Rev_Darter", 0, ["ACE_MainActions"], _dissassemble,false] call ace_interact_menu_fnc_addActionToClass;
["C_Rev_Darter", 0, ["ACE_MainActions"], _dissassemble,false] call ace_interact_menu_fnc_addActionToClass;

["B_Rev_Pelican", 0, ["ACE_MainActions"], _dissassemble2,false] call ace_interact_menu_fnc_addActionToClass;
["O_Rev_Pelican", 0, ["ACE_MainActions"], _dissassemble2,false] call ace_interact_menu_fnc_addActionToClass;
["I_Rev_Pelican", 0, ["ACE_MainActions"], _dissassemble2,false] call ace_interact_menu_fnc_addActionToClass;
["C_Rev_Pelican", 0, ["ACE_MainActions"], _dissassemble2,false] call ace_interact_menu_fnc_addActionToClass;

["B_Rev_Demine", 0, ["ACE_MainActions"], _dissassemble3,false] call ace_interact_menu_fnc_addActionToClass;
["O_Rev_Demine", 0, ["ACE_MainActions"], _dissassemble3,false] call ace_interact_menu_fnc_addActionToClass;
["I_Rev_Demine", 0, ["ACE_MainActions"], _dissassemble3,false] call ace_interact_menu_fnc_addActionToClass;
["C_Rev_Demine", 0, ["ACE_MainActions"], _dissassemble3,false] call ace_interact_menu_fnc_addActionToClass;

private _asassemble =
[
    "Rev_assemble",
    "Assemble UAV",
    "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa",
    {[_player,typeOf _target,_target] call Rev_uav_fnc_deploy_uav},
    {true}
] call ace_interact_menu_fnc_createAction;

["Item_Rev_Darter", 0, ["ACE_MainActions"], _asassemble,false] call ace_interact_menu_fnc_addActionToClass;
["Item_Rev_Pelican", 0, ["ACE_MainActions"], _asassemble,false] call ace_interact_menu_fnc_addActionToClass;
["Item_Rev_Demine", 0, ["ACE_MainActions"], _asassemble,false] call ace_interact_menu_fnc_addActionToClass;