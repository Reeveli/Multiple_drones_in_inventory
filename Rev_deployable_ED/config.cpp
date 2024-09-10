class CfgPatches
{
	class Rev_deployable_ED
	{
		name="Deployable ED Pelter";
		units[]=
		{
			"B_Rev_Pelter",
			"O_Rev_Pelter",
			"I_Rev_Pelter",
			"C_Rev_Pelter",
			"B_Rev_Roller",
			"O_Rev_Roller",
			"I_Rev_Roller",
			"C_Rev_Roller",
			"Item_Rev_Pelter",
			"Item_Rev_Roller"
		};
		weapons[]=
		{
			"Rev_Pelter",
			"Rev_Roller"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Static_F_Mark_Designator_01",
			"A3_Static_F_Enoch_Designator_01",
			"A3_Soft_F_Enoch_UGV_02",
			"cba_main",
			"Rev_deployable_darter"
		};
		author="Reeveli";
		authors[]= {"Reeveli"};
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		url = "https://www.youtube.com/@Reeveli";			
        version = 1.1;
        versionStr = "1.1.0";
        versionAr[] = {1, 1, 0};
	};
};


class CfgVehicles
{
	#include "CfgPelter.hpp"
	#include "CfgRoller.hpp"
};



#include "CfgWeapons.hpp"

class CfgFunctions
{
	class Rev_ED
	{
		class Rev_ED
		{
			file= "\Rev_deployable_ED\functions";
			class deploy {};
			class init {preInit=1;};
		};
	};
};