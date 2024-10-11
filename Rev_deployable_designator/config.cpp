class CfgPatches
{
	class Rev_deployable_designator
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
			"cba_ui",
			"Rev_deployable_darter"
		};
		author="Reeveli";
		authors[]= {"Reeveli"};
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		url = "https://www.youtube.com/@Reeveli";			
        version = 1.2;
        versionStr = "1.2.0";
        versionAr[] = {1, 2, 0};
	};
};


#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class CfgFunctions
{
	class Rev_designator
	{
		class Rev_designator
		{
			file= "\Rev_deployable_designator\functions";
			class deploy {};
			class init {preInit=1;};
		};
	};
};