//1.1 Darter pushed to end of file and now inherits from demine
class CfgWeapons
{
	class ToolKit;
	class Rev_Pelican: ToolKit
	{
		author = "Reeveli";
		picture = "\Rev_deployable_darter\img\Rev_pelican_img_1.paa";
		displayName = "Deployable AL-6 Pelican";
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
	//Legacy compability
	class Rev_pelican_item: Rev_Pelican
	{		
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Deprecated legacy item";
	};

	class Rev_Demine: ToolKit
	{
		author = "Reeveli";
		picture = "\Rev_deployable_darter\img\Rev_demine_img_1.paa";
		displayName = "Deployable demining drone";
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
	//Legacy compability
	class Rev_demine_item: Rev_Demine
	{		
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Deprecated legacy item";
	};

	class Rev_darter: Rev_Demine
	{
		author = "Reeveli";
		picture = "\Rev_deployable_darter\img\Rev_uav_img_3.paa";
		displayName = "Deployable AR-2 Darter";
		descriptionShort = "Inventory item<br/>Douple click on the item to access menu";
		class ItemInfo
		{
			mass = 50;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
			type = 620;
			allowedSlots[] = {801,701,901};
			scope = 0;
		};
	};
	//Legacy compability
	class Rev_darter_item: Rev_darter
	{		
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Deprecated legacy item";
	};
};