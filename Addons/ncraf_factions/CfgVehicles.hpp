class CfgEditorSubcategories 
{
	class EdSubcat_Marines
	{
		displayName = "Men (Navy & Marines)";
	};
			
	class EdSubcat_HeavyTroopers
	{
		displayName = "Men (Heavy Troopers)";
	};
			
	class EdSubcat_Rangers
	{
		displayName = "Men (Rangers)";
	};
			
	class EdSubcat_Recon
	{
		displayName = "Men (1st Recon)";		
	};
	
	class EdSubcat_Knights
	{
		displayName = "Men (Knights)";
	};
	
	class EdSubcat_Paladins
	{
		displayName = "Men (Paladins)";
	};
};

class CfgFactionClasses
{
	class ncraf_ncr
    { 
        displayName = "[NCRAF] NCR Military"; 
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		scopeCurator = 2;
        icon = ""; //Custom Icon 
    };
	
	class ncraf_BoS
    { 
        displayName = "[NCRAF] Brotherhood of Steel"; 
        priority = 1; // Position in list. 
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2. 
		scopeCurator = 2;
        icon = ""; //Custom Icon 
    };

    class ncraf_enc 
    { 
        displayName = "[NCRAF] Enclave Remnants"; 
        priority = 1; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
		scopeCurator = 2;
        icon = ""; //Custom Icon 
    };
};
/*class CfgVehicles {

	class EventHandlers;
	
	// MELEE
	
	class B_soldier_Melee;
	class O_soldier_Melee;
	
	// SHARED
	
	class LIB_M2_60;
	class LIB_leFH18;
	
	class B_Mortar_01_F;
	class B_G_HMG_02_high_F;
	class B_G_HMG_02_F;
	class B_HMG_01_A_F;
	
	class LIB_US_NAC_Scout_M3;
	class LIB_US_NAC_M4A3_75;
	class LIB_M3A3_Stuart;
	class LIB_US_NAC_Willys_MB;
	
	class HTNK_us_desert;
	
	class vurtual_m923;

	class B_MRAP_01_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_box_F;
	class B_Truck_01_ammo_F;
	class B_APC_Wheeled_01_cannon_F;
	
	class B_UAV_05_F;
	class B_UAV_01_F;
	};*/