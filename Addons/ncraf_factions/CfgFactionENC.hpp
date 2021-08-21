

	class ncraf_enc_base: combatarmor_enclave_body
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 0;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 0;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 0;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 0;
		faction = "aeote_enc";
		genericNames = "NATOMen";
			displayName = "APAMkII Base";		// The name of the soldier, which is displayed in the editor.
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
		identityTypes[] =  {"Head_PreWar","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "recruit_enclave_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\combatarmor.paa";
		EditorSubcategory = "EdSubcat_Personnel";
			weapons[] = {Throw, Put};				// Which weapons the character has.
			respawnWeapons[] = {Throw, Put};		// Which weapons the character respawns with.
			Items[] = {};				// Which items the character has.
			RespawnItems[] = {};			// Which items the character respawns with.
			magazines[] = {};				// What ammunition the character has.
			respawnMagazines[] = {};		// What ammunition the character respawns with.
			linkedItems[] = {};				// Which items the character has.
			respawnLinkedItems[] = {};		// Which items the character respawns with.
	};
	
	class ncraf_enc_recruit: ncraf_enc_base
	{
		author = "Archr";
		scope = 2;	
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1; 
        faction = "aeote_enc";
		genericNames = "NATOMen";
			displayName = "Recruit";
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
		uniformClass = "recruit_enclave_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\combatarmor.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		identityTypes[] =  {"Head_PreWar","LanguageENG_F","enc_infantry"};
			weapons[] = {Throw, Put};
			respawnWeapons[] = {Throw, Put};
			backpack = "";
			Items[] = {};
			RespawnItems[] = {};
			magazines[] = {};
			respawnMagazines[] = {};
			linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
			respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class ncraf_enc_soldier: ncraf_enc_base
	{
		author = "Archr";
		scope = 2;	
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1; 
        faction = "aeote_enc";
		genericNames = "NATOMen";
			displayName = "Soldier";
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
		uniformClass = "combatarmor_enclave_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\combatarmor.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		identityTypes[] =  {"Head_PreWar","LanguageENG_F","enc_infantry"};
			weapons[] = {AM_G3AssaultRifle, Throw, Put};
			respawnWeapons[] = {AM_G3AssaultRifle, Throw, Put};
			backpack = "";
			Items[] = {FirstAidKit};
			RespawnItems[] = {FirstAidKit};
			magazines[] = {mag_10(24Rnd_556x45_Mag)};
			respawnMagazines[] = {mag_10(24Rnd_556x45_Mag)};
			linkedItems[] = {AM_AvBagInvis, Army_Helmet_02, ItemMap, ItemCompass, ItemWatch, ItemRadio};
			respawnLinkedItems[] = {AM_AvBagInvis, Army_Helmet_02, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class ncraf_enc_soldier_pa: ncraf_enc_base
	{
		author = "Archr";
		scope = 2;	
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1; 
        faction = "aeote_enc";
		genericNames = "NATOMen";
			displayName = "Soldier (APA)";
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
		uniformClass = "ad_power_armor_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\combatarmor.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		identityTypes[] =  {"Head_PreWar","LanguageENG_F","enc_infantry"};
			weapons[] = {Krausk_PlasmaRifle, Throw, Put};
			respawnWeapons[] = {Krausk_PlasmaRifle, Throw, Put};
			backpack = "";
			Items[] = {FirstAidKit};
			RespawnItems[] = {FirstAidKit};
			magazines[] = {mag_10(Krausk_24rnd_P_MFC_Standard)};
			respawnMagazines[] = {mag_10(Krausk_24rnd_P_MFC_Standard)};
			linkedItems[] = {AM_AvBagInvis, ad_power_armor_helm, ItemMap, ItemCompass, ItemWatch, ItemRadio};
			respawnLinkedItems[] = {AM_AvBagInvis, ad_power_armor_helm, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class ncraf_enc_officer: ncraf_enc_base
	{
		author = "Archr";
		scope = 2;	
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1; 
        faction = "aeote_enc";
		genericNames = "NATOMen";
			displayName = "Officer";
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
		uniformClass = "enclave_officer_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\combatarmor.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		identityTypes[] =  {"Head_PreWar","LanguageENG_F","enc_infantry"};
			weapons[] = {Krausk_PlasmaRifle, Krausk_G86_PP, Throw, Put};
			respawnWeapons[] = {Krausk_PlasmaRifle, Krausk_G86_PP, Throw, Put};
			backpack = "";
			Items[] = {FirstAidKit};
			RespawnItems[] = {FirstAidKit};
			magazines[] = {mag_10(Krausk_24rnd_P_MFC_Standard), mag_5(Krausk_32rnd_PP_Stnd)};
			respawnMagazines[] = {mag_10(Krausk_24rnd_P_MFC_Standard), mag_5(Krausk_32rnd_PP_Stnd)};
			linkedItems[] = {AM_AvBagInvis, hat_enclave_officer, ItemMap, ItemCompass, ItemWatch, ItemRadio};
			respawnLinkedItems[] = {AM_AvBagInvis, hat_enclave_officer, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class ncraf_enc_colonel: ncraf_enc_base
	{
		author = "Archr";
		scope = 2;	
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1; 
        faction = "aeote_enc";
		genericNames = "NATOMen";
			displayName = "Colonel";
			textPlural = "infantry";
			textSingular = "infantry";
			nameSound = "veh_infantry_s";
			role = "Rifleman";
		uniformClass = "colonelautumn_enclave_uniform";
		editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\combatarmor.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		identityTypes[] =  {"Head_PreWar","LanguageENG_F","enc_infantry"};
			weapons[] = {Krausk_PlasmaAutogun, Krausk_G86_PP, Throw, Put};
			respawnWeapons[] = {Krausk_PlasmaAutogun, Krausk_G86_PP, Throw, Put};
			backpack = "";
			Items[] = {FirstAidKit};
			RespawnItems[] = {FirstAidKit};
			magazines[] = {mag_10(Krausk_30rnd_PA_Stnd), mag_5(Krausk_32rnd_PP_Stnd)};
			respawnMagazines[] = {mag_10(Krausk_30rnd_PA_Stnd), mag_5(Krausk_32rnd_PP_Stnd)};
			linkedItems[] = {AM_AvBagInvis, hat_enclave_officer, ItemMap, ItemCompass, ItemWatch, ItemRadio};
			respawnLinkedItems[] = {AM_AvBagInvis, hat_enclave_officer, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};