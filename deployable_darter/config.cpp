class CfgPatches
{
	class deployable_darter
	{
		name="Deployable AR-2 Darter";
		units[]=
		{
			"Rev_darter_b",
			"Rev_darter_o",
			"Rev_darter_i",
			"Rev_darter_c",
			"Rev_pelican_b",
			"Rev_pelican_o",
			"Rev_pelican_i",
			"Rev_pelican_c",
			"Rev_demine_b",
			"Rev_demine_o",
			"Rev_demine_i",
			"Rev_demine_c",
			"Rev_darter_packed",
			"Rev_pelican_packed",
			"Rev_demine_packed"
		};
		weapons[]=
		{
			"Rev_darter_item",
			"Rev_pelican_item",
			"Rev_demine_item"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Drones_F",
			"cba_main"
		};
		author="Reeveli";
		authors[]= {"Reeveli"};
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		url = "https://www.youtube.com/@Reeveli";			
        version = 2.0;
        versionStr = "2.0.1";
        versionAr[] = {2, 0,1};
	};
};

class CfgVehicles
{

	class B_UAV_01_F;
	class Rev_darter_b: B_UAV_01_F
	{
		author = "Reeveli";
		displayName = "Deployable AR-2 Darter";
		Rev_uav_class = "scout";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};	
	};
	class O_UAV_01_F;
	class Rev_darter_o: O_UAV_01_F
	{
		author = "Reeveli";
		displayName = "Deployable AR-2 Tayran";
		Rev_uav_class = "scout";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};
	class I_UAV_01_F;
	class Rev_darter_i: I_UAV_01_F
	{
		author = "Reeveli";
		displayName = "Deployable AR-2 Darter";
		Rev_uav_class = "scout";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};
	class C_IDAP_UAV_01_F;
	class Rev_darter_c: C_IDAP_UAV_01_F
	{
		author = "Reeveli";
		displayName = "Deployable AR-2 Darter";
		Rev_uav_class = "scout";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};

	class B_UAV_06_F;
	class Rev_pelican_b: B_UAV_06_F
	{
		author = "Reeveli";
		displayName = "Deployable AL-6 Pelican";
		Rev_uav_class = "utility";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};

	class O_UAV_06_F;
	class Rev_pelican_o: O_UAV_06_F
	{
		author = "Reeveli";
		displayName = "Deployable AL-6 Jinaah";
		Rev_uav_class = "utility";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};

	class I_UAV_06_F;
	class Rev_pelican_i: I_UAV_06_F
	{
		author = "Reeveli";
		displayName = "Deployable AL-6 Pelican";
		Rev_uav_class = "utility";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};

	class C_UAV_06_F;
	class Rev_pelican_c: C_UAV_06_F
	{
		author = "Reeveli";
		displayName = "Deployable AL-6 Pelican";
		Rev_uav_class = "utility";
		faction = "CIV_IDAP_F";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};		
	};

	class C_IDAP_UAV_06_antimine_F;
	class Rev_demine_b: C_IDAP_UAV_06_antimine_F
	{
		author = "Reeveli";
		displayName = "Deployable demining drone";
		Rev_uav_class = "demining";
		faction = "BLU_F";
		side = 1;
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class Rev_demine_o: C_IDAP_UAV_06_antimine_F
	{
		author = "Reeveli";
		displayName = "Deployable demining drone";
		Rev_uav_class = "demining";
		faction = "OPF_F";
		side = 0;
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class Rev_demine_i: C_IDAP_UAV_06_antimine_F
	{
		author = "Reeveli";
		displayName = "Deployable demining drone";
		Rev_uav_class = "demining";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class Rev_demine_c: C_IDAP_UAV_06_antimine_F
	{
		author = "Reeveli";
		displayName = "Deployable demining drone";
		Rev_uav_class = "demining";
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
				displayName = "Dissassemble UAV";
				displayNameDefault = "<t align='center'><img image='\A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' size='2' /><br/></t><t align='center'>Dissassemble UAV</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call Rev_uav_fnc_pick_up";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};
	class Item_ToolKit;
	class Rev_darter_packed: Item_ToolKit
	{
		author = "Reeveli";
		displayName = "Deployable AR-2 Darter";
		class TransportItems
		{
			class Rev_darter_item
			{
				name = "Rev_darter_item";
				count = 1;
			};
		};
	};
	class Rev_pelican_packed: Rev_darter_packed
	{
		displayName = "Deployable AL-6 Pelican";
		class TransportItems
		{
			class Rev_pelican_item
			{
				name = "Rev_pelican_item";
				count = 1;
			};
		};
	};
	class Rev_demine_packed: Rev_darter_packed
	{
		displayName = "Deployable demining drone";
		class TransportItems
		{
			class Rev_demine_item
			{
				name = "Rev_demine_item";
				count = 1;
			};
		};
	};	
};

class CfgWeapons
{
	class ToolKit;
	class Rev_darter_item: ToolKit
	{
		author = "Reeveli";
		picture = "\deployable_darter\img\Rev_uav_img_3.paa";
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
	class Rev_pelican_item: ToolKit
	{
		author = "Reeveli";
		picture = "\deployable_darter\img\Rev_pelican_img_1.paa";
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
	class Rev_demine_item: ToolKit
	{
		author = "Reeveli";
		picture = "\deployable_darter\img\Rev_demine_img_1.paa";
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
};

class CfgFunctions
{
	class Rev_uav
	{
		class UAV
		{
			file="\deployable_darter\functions";
			class uav_init {postInit=1;};
			class deploy_uav {};
			class pick_up {};
		};
	};
};