class CfgPatches
{
	class deployable_designator
	{
		name="Deployable Laser Designator";
		units[]=
		{
			"B_Rev_Designator",
			"O_Rev_Designator",
			"I_Rev_Designator",
			"C_Rev_Designator",
			"Item_Rev_Designator"
		};
		weapons[]=
		{
			"Rev_Designator"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Static_F_Mark_Designator_01",
			"A3_Static_F_Enoch_Designator_01",
			"cba_main",
			"deployable_darter"
		};
		author="Reeveli";
		authors[]= {"Reeveli"};
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		url = "https://www.youtube.com/@Reeveli";			
        version = 1.0;
        versionStr = "1.0.1";
        versionAr[] = {1, 0, 1};
	};
};

class CfgVehicles
{

	class Item_ToolKit;
	class Item_Rev_Designator: Item_ToolKit
	{
		author = "Reeveli";
		displayName = "Deployable remote designator";
		class TransportItems
		{
			class Rev_Designator
			{
				name = "Rev_Designator";
				count = 1;
			};
		};
	};

	class B_Static_Designator_01_F;
	class B_Rev_Designator: B_Static_Designator_01_F
	{
		
		author = "Reeveli";
		displayname = "Deployable Designator [NATO]";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};

		};
		class UserActions
		{
			class pick_up
			{
				userActionID = 52;
				displayName = "Dissassemble designator";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_designator_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};

	};
	class O_Static_Designator_02_F;
	class O_Rev_Designator: O_Static_Designator_02_F
	{
		
		author = "Reeveli";
		displayname = "Deployable Designator [CSAT]";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};

		};
		class UserActions
		{
			class pick_up
			{
				userActionID = 52;
				displayName = "Dissassemble designator";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_designator_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class B_W_Static_Designator_01_F;
	class I_Rev_Designator: B_W_Static_Designator_01_F
	{
		author = "Reeveli";
		crew = "I_UAV_AI_F";
		displayname = "Deployable Designator [AAF]";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "IND_F";
		side = 2;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};

		};
		class UserActions
		{
			class pick_up
			{
				userActionID = 52;
				displayName = "Dissassemble designator";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_designator_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class C_Rev_Designator: B_Static_Designator_01_F
	{
		author = "Reeveli";
		crew = "C_UAV_AI_F";
		displayname = "Deployable Designator [IDAP]";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "CIV_IDAP_F";
		side = 3;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};

		};
		class UserActions
		{
			class pick_up
			{
				userActionID = 52;
				displayName = "Dissassemble designator";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble designator</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_designator_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
};

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

class CfgFunctions
{
	class Rev_designator
	{
		class designator
		{
			file= "x\Rev\addons\designator\functions";
			class arsenal {preInit=1;};
			class deploy {};
			class init {preInit=1;};
			class pick_up;
		};
	};
};