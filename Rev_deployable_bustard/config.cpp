class CfgPatches
{
	class Rev_deployable_bustard
	{
		units[]=
		{
			"B_Rev_Bustard",
			"O_Rev_Bustard",
			"I_Rev_Bustard",
			"C_Rev_Bustard",
			"B_Rev_UAV_IED",
			"O_Rev_UAV_IED",
			"C_Rev_UAV_IED",
			"I_Rev_UAV_IED",
			"Item_Rev_Bustard",
			"Item_Rev_UAV_IED"
		};
		weapons[]=
		{
			"Rev_Bustard",
			"Rev_UAV_IED"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Drones_F",
			"data_f_lxWS_Loadorder",
			"cba_ui",
			"Rev_deployable_darter"
		};
		author="Reeveli";
		authors[]= {"Reeveli"};
		name="Deployable AP-5 Bustard";
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		url = "https://www.youtube.com/@Reeveli";			
        version = 1.1;
        versionStr = "1.1.0";
        versionAr[] = {1,1,0};
		skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
	#include "CfgBustard.hpp"
	#include "CfgIED.hpp"
};

#include "CfgWeapons.hpp"

class CfgFunctions
{
	class Rev_bustard
	{
		class Rev_bustard
		{
			file="\Rev_deployable_bustard\functions";
			class deploy {};
			class init {preInit=1;};
			class removeWeapon {};
		};
	};
};