class CfgWeapons
{
	class ToolKit;
	class Rev_Bustard: ToolKit
	{
		author = "Reeveli";
		picture = "\Rev_deployable_bustard\img\Rev_bustard_img_1.paa";
		displayName = "Deployable AP-5 Bustard";
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
	class Rev_UAV_IED: ToolKit
	{
		author = "Reeveli";
		picture = "\Rev_deployable_bustard\img\Rev_IED_img_1.paa";
		displayName = "Deployable IED UAV";
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