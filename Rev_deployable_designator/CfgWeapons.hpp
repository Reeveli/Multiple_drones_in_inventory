class CfgWeapons
{
	class ToolKit;
	class Rev_Designator: ToolKit
	{
		author = "Reeveli";
		picture = "\A3\Weapons_F_Mark\Data\UI\gear_laserdesignator_ca.paa";
		displayName = "Deployable remote designator";
		descriptionShort = "Inventory item<br/>Douple click on the item to access menu";
		class ItemInfo
		{
			mass = 100;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
			type = 620;
			allowedSlots[] = {801,701,901};
			scope = 0;
		};
	};
};