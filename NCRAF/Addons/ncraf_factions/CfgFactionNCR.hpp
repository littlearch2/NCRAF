// SIDE 1 IS BLUFOR
// SIDE 2 IS INDEP
// SIDE 0 IS OPFOR
class CfgVehicles {
	// INFANTRY
	class armor_ncr_trooper_01;
	class ncraf_ncr_base: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 0;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 0;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 0;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "NCR Base";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {};				// Which items the character has.
		RespawnItems[] = {};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {};				// Which items the character has.
		respawnLinkedItems[] = {};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_recruit: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Recruit";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "wasteland_clothing_05_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_VarmintRifleNew, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_VarmintRifleNew, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {};				// Which items the character has.
		RespawnItems[] = {};			// Which items the character respawns with.
		magazines[] = {mag_5(5Rnd_556x45_SRP_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_5(5Rnd_556x45_SRP_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};

		class ncraf_ncr_trooper_conscript: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Conscript";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_HuntingRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_HuntingRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(5Rnd_308_Mag), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(5Rnd_308_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Trooper";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
		class O_Soldier_Melee;
		class ncraf_ncr_trooper_melee: O_Soldier_Melee
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Trooper (Melee)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "CQB";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_WBK_CombatKnife, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_WBK_CombatKnife, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_mp: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Military Police";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_mp_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_9mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_mp, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_mp, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_mp_melee: O_Soldier_Melee
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Military Police (Melee)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "CQB";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_mp_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_WBK_PoliceBaton, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_WBK_PoliceBaton, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_mp, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_mp, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_autorifle: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Autorifleman";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_MG_p";
		role = "Machinegunner";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		////editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		editorPreview = "";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_BAR, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_BAR, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(20Rnd_762x51_Mag), mag_3(10Rnd_9x21_HP_Mag) AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(20Rnd_762x51_Mag), mag_3(10Rnd_9x21_HP_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_trooper_grenadier: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Autorifleman";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_MG_p";
		role = "Machinegunner";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_M79, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_M79, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(1Rnd_HE_Grenade_shell), mag_6(30Rnd_9x21_Mag) AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(1Rnd_HE_Grenade_shell), mag_6(30Rnd_9x21_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_mg: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Machinegunner";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_MG_p";
		role = "Machinegunner";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_LMG, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_LMG, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_8(90Rnd_556x45_SRP_Box_Mag_F), mag_3(10Rnd_9x21_HP_Mag) AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_8(90Rnd_556x45_SRP_Box_Mag_F), mag_3(10Rnd_9x21_HP_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_mg_asst: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "MG Asst.";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "AmmoBearer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_9mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_8(30Rnd_9x21_Mag), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_8(30Rnd_9x21_Mag), mag_3(90Rnd_556x45_SRP_Box_Mag_F), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_trooper_launcher: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "AT Specialist (Launcher)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "AT soldiers";
		textSingular = "AT soldier";
		nameSound = "veh_infantry_AT_p";
		role = "MissileSpecialist";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_9mmSMG, AM_launch_MissileLauncher, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, AM_launch_MissileLauncher, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(30Rnd_9x21_Mag), mag_3(MissileLauncherAT_Rocket)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(30Rnd_9x21_Mag), mag_3(MissileLauncherAT_Rocket)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_launcher_asst: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "AT Assistant (Launcher)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "AmmoBearer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_HuntingRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_HuntingRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(5Rnd_308_Mag), MissileLauncherAT_Rocket, AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(5Rnd_308_Mag), MissileLauncherAT_Rocket, AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
		
		class ncraf_ncr_at_rifle: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "AT Specialist (Rifle)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "AT soldiers";
		textSingular = "AT soldier";
		nameSound = "veh_infantry_AT_p";
		role = "MissileSpecialist";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_AntiMatRifle, AM_9mmSMGOne, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_AntiMatRifle, AM_9mmSMGOne, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_8(8Rnd_127x99_AP_Mag), mag_2(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_8(8Rnd_127x99_AP_Mag), mag_2(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_BigBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_BigBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_marksman: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Marksman";		// The name of the soldier, which is displayed in the editor.
		textPlural = "snipers";
		textSingular = "sniper";
		nameSound = "veh_infantry_p";
		role = "Marksman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_HuntingRifle_Full, AM_9mmSMGOne, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_HuntingRifle_Full, AM_9mmSMGOne, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_01";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(5Rnd_308_Mag), mag_2(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(5Rnd_308_Mag), mag_2(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_BigBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_BigBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_medic: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Medic";		// The name of the soldier, which is displayed in the editor.
		textPlural = "medics";
		textSingular = "medic";
		nameSound = "veh_infantry_medic_p";
		role = "Medic";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_clothes_medic_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_03";
		Items[] = {Medikit};				// Which items the character has.
		RespawnItems[] = {Medikit};			// Which items the character respawns with.
		magazines[] = {mag_12(20Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(20Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_Medic, AM_BigBagInvis, ItemMap, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_Medic, AM_BigBagInvis, ItemMap, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_tl: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Corporal";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_sl: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Sergeant";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "SquadLeader";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, AM_M1911HD, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, AM_M1911HD, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_16(20Rnd_556x45_Mag), mag_3(9Rnd_45ACP_Mag_M1911), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_16(20Rnd_556x45_Mag), mag_3(9Rnd_45ACP_Mag_M1911), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_02, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_junior_officer: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Junior Officer";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_officer_p";
		role = "officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, AM_M1911HD, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, AM_M1911HD, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_16(20Rnd_556x45_Mag), mag_3(9Rnd_45ACP_Mag_M1911), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_16(20Rnd_556x45_Mag), mag_3(9Rnd_45ACP_Mag_M1911), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_green_beret, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_green_beret, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_senior_officer: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Senior Officer";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_officer_p";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mmag_3(6Rnd_357_Cyl), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_Black_beret, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_green_beret_beret, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_staff_officer: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Staff Officer";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_officer_p";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "U_O_ParadeUniform_01_CSAT_F";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mmag_3(6Rnd_357_Cyl), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {H_LIB_US_Pilot_Cap_Khaki, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {H_LIB_US_Pilot_Cap_Khaki, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_trooper_pilot: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Pilot";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "U_LIB_US_Pilot";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {H_LIB_US_Helmet_Pilot, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {H_LIB_US_Helmet_Pilot, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_trooper_crewman: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Crewman";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_p";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armornvncrtrooper_plain_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};				// What ammunition the character has.
		respawnMagazines[] = {mag_16(20Rnd_556x45_Mag), AM_dynamite_throw};		// What ammunition the character respawns with.
		linkedItems[] = {H_LIB_US_Helmet_Tank, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {H_LIB_US_Helmet_Tank, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	// MARINES AND NAVY
	
	class ncraf_ncr_sailor: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Sailor";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "petrochico_01_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_9mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_sailor_melee: O_Soldier_Melee
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Sailor (Melee)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "petrochico_01_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_WBK_knifespearClean, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_WBK_knifespearClean, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_marine: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Marine";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_patron_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_9mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_marine_cqc: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Marine (CQC)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_patron_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_HuntingShotgun, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_HuntingShotgun, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(5Rnd_12ga_pel_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(5Rnd_12ga_pel_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {combatarmor_medic_helm, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {combatarmor_medic_helm, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
		class ncraf_ncr_marine_autorifleman: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Autorifleman";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_MG_s";
		role = "Machinegunner";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_patron_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_AssaultCarbine, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_AssaultCarbine, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "BackpackNUKA_02";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(20Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(20Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};

	class ncraf_ncr_marine_medic: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Corpsman";		// The name of the soldier, which is displayed in the editor.
		textPlural = "medics";
		textSingular = "medic";
		nameSound = "veh_infantry_medic_s";
		role = "Medic";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_clothes_green_medic_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_9mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "Backpack_02";
		Items[] = {Medikit};				// Which items the character has.
		RespawnItems[] = {Medikit};			// Which items the character respawns with.
		magazines[] = {mag_10(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_green_medic, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_green_medic, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_marine_tl: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Team Leader";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_patron_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_9mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_9mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(30Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(30Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_marine_sl: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Squad Leader";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "SquadLeader";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_patron_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(20Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(20Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {armor_ncr_trooper_helm_green, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_marine_officer: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Officer";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_officer_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "armor_ncr_trooper_patron_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Marines";
		weapons[] = {AM_serviceRifle, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(20Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(20Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_Black_beret, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_Black_beret, AM_AvBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	// HEAVY TROOPERS
	
	class ncraf_ncr_heavy_trooper: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Heavy Trooper";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_G3AssaultRifleWooden, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_G3AssaultRifleWooden, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(24Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(24Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_heavy_trooper_cqc: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Heavy Trooper [CQC]";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_HuntingShotgun, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_HuntingShotgun, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(6Rnd_12ga_pel_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(6Rnd_12ga_pel_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_heavy_trooper_melee: O_Soldier_Melee
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Heavy Trooper";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "CQC";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_WBK_BigAxe, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_WBK_BigAxe, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_heavy_trooper_mg: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Heavy Trooper";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_MG_s";
		role = "Machinegunner";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_LMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_LMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_6(200Rnd_556x45_Box_Mag_F)};				// What ammunition the character has.
		respawnMagazines[] = {mag_6(200Rnd_556x45_Box_Mag_F)};		// What ammunition the character respawns with.
		linkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_heavy_trooper_tl: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Team Leader";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_G3AssaultRifleWooden, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_G3AssaultRifleWooden, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(24Rnd_556x45_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(24Rnd_556x45_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_heavy_trooper_sl: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Squad Leader";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "SquadLeader";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_SurvivalistRifleWood, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_SurvivalistRifleWood, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(20Rnd_50BW_Mag_F)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(20Rnd_50BW_Mag_F)};		// What ammunition the character respawns with.
		linkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {power_armor_helmet_t45d, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};

	class ncraf_ncr_heavy_trooper_officer: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Officer";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_powerarmor_uniform";
		nakedUniform = "bosunderarmor_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_HeavyTroopers";
		weapons[] = {AM_12_7mmSMG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_12_7mmSMG, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_12(21Rnd_127_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_12(21Rnd_127_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_green_beret, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_green_beret, AM_BigBagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	// RANGERS
	
	class ncraf_ncr_civil_ranger_01: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Civil Ranger 1";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_civ_01_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {cowboy_hat_04, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {cowboy_hat_04, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_civil_ranger_02: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Civil Ranger 2";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_civ_01_02_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {cowboy_hat_01, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {cowboy_hat_01, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_civil_ranger_03: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Civil Ranger 3";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_civ_01_03_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {cowboy_hat_05, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {cowboy_hat_05, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_civil_ranger_04: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Civil Ranger 4";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_civ_02_01_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {lucassimms_hat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {lucassimms_hat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_civil_ranger_05: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Civil Ranger 5";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_civ_02_02_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {cowboy_hat_03, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {cowboy_hat_03, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_civil_ranger_06: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Civil Ranger 6";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_civ_02_03_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {cowboy_hat_02, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {cowboy_hat_02, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_patrol_ranger_pistol: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Pistol)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "nv_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_patrol_ranger_repeater: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Repeater)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "nv_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_CowboyRepeater, AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_CowboyRepeater, AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(8Rnd_357), mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(8Rnd_357), mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_patrol_ranger_rifle: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Rifle)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "nv_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_serviceRifleN, AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifleN, AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(20Rnd_556x45_AP_Mag), mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(20Rnd_556x45_AP_Mag), mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_patrol_ranger_automatic: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Rifle)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "nv_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_AssaultCarbine, AM_357RevShort, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_AssaultCarbine, AM_357RevShort, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_14(20Rnd_556x45_Mag), mag_3(6Rnd_357_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_14(20Rnd_556x45_Mag), mag_3(6Rnd_357_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {rangerhat, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};

	class ncraf_ncr_vet_ranger_pistol: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Rifle)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "combat_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_Sequoia, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_Sequoia, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_5(5Rnd_45x70_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_5(5Rnd_45x70_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {combat_ranger_helmet, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {combat_ranger_helmet, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_vet_ranger_repeater: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Rifle)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "combat_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_BrushGun, AM_Sequoia, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_BrushGun, AM_Sequoia, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(8Rnd_45x70), mag_5(5Rnd_45x70_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(8Rnd_45x70), mag_5(5Rnd_45x70_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {combat_ranger_helmet, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {combat_ranger_helmet, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};

	class ncraf_ncr_vet_ranger_at: armor_ncr_trooper_01
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Patrol Ranger (Rifle)";		// The name of the soldier, which is displayed in the editor.
		textPlural = "officers";
		textSingular = "officer";
		nameSound = "veh_infantry_s";
		role = "Officer";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "combat_ranger_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Rangers";
		weapons[] = {AM_AntiMatRifle_Full, AM_Sequoia, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_AntiMatRifle_Full, AM_Sequoia, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(8Rnd_127x99_AP_Mag), mag_5(5Rnd_45x70_Cyl)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(8Rnd_127x99_AP_Mag), mag_5(5Rnd_45x70_Cyl)};		// What ammunition the character respawns with.
		linkedItems[] = {combat_ranger_helmet, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {combat_ranger_helmet, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};

	// FIRST RECON
	class ncraf_ncr_recon_sniper
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Sniper";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_Boone_02_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Recon";
		weapons[] = {AM_SniperRifle_Full, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_SniperRifle_Full, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(5Rnd_308_Mag), mag_5(10Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(5Rnd_308_Mag), mag_5(10Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_recon_spotter
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Spotter";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_Boone_02_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Recon";
		weapons[] = {AM_serviceRifle_Sniper, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle_Sniper, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(20Rnd_556x45_Mag), mag_5(10Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(20Rnd_556x45_Mag), mag_5(10Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_recon_scout
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Scout";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_Boone_02_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Recon";
		weapons[] = {AM_serviceRifle_Stealth, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_serviceRifle_Stealth, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(20Rnd_556x45_Mag), mag_5(10Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(20Rnd_556x45_Mag), mag_5(10Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	class ncraf_ncr_recon_leader
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Team Leader";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "SquadLeader";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "ncr_Boone_02_uniform";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Recon";
		weapons[] = {AM_CowboyRepeater, AM_browning9mm, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AM_CowboyRepeater, AM_browning9mm, Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {mag_10(8Rnd_357), mag_5(10Rnd_9x21_Mag)};				// What ammunition the character has.
		respawnMagazines[] = {mag_10(8Rnd_357), mag_5(10Rnd_9x21_Mag)};		// What ammunition the character respawns with.
		linkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {NCR_red_beret, AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	// MEN_STORY
	class ncraf_ncr_president
	{
		author = "Archr";	// The name of the author of the asset, which is displayed in the editor.
		scope = 2;				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		side = 1;
		faction = "ncraf_ncr";
		genericNames = "NATOMen";
		displayName = "Wendell Peterson";		// The name of the soldier, which is displayed in the editor.
		textPlural = "infantry";
		textSingular = "infantry";
		nameSound = "veh_infantry_s";
		role = "Rifleman";
		identityTypes[] =  {"Head_NATO","LanguageENG_F","G_NATO_pilot"};		// Identity Types are explained in the Headgear section of this guide.
		uniformClass = "U_C_FormalSuit_01_black_F";
		//editorPreview = "\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_01.paa";
		EditorSubcategory = "EdSubcat_Personnel_Story";
		weapons[] = {Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {Throw, Put};		// Which weapons the character respawns	with.
		backpack = "";
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};				// Which items the character has.
		respawnLinkedItems[] = {AM_BagInvis, ItemMap, ItemRadio, ItemCompass, ItemWatch};		// Which items the character respawns with.
	};
	
	/*// VEHICLES
	class LIB_US_NAC_Willys_MB;
	class ncraf_ncr_willys: LIB_US_NAC_Willys_MB
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quarterton Jeep";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};	
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = 
		{
			"\ncraf_vehicles\data\Mwillys_ncr_co.paa",
		};
	};
	
	class LIB_US_NAC_Willys_MB_M1919;
	class ncraf_ncr_willys_mg: LIB_US_NAC_Willys_MB_M1919
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quarterton Jeep (M1919)";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};		
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = 
		{
			"\ncraf_vehicles\data\Mwillys_ncr_co.paa",
		};
	};
	
	class LIB_US_NAC_M4A3_75;
	class ncraf_ncr_m4a3: LIB_US_NAC_M4A3_75
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper_crewman";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};
		hiddenSelections[] = {camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\ncraf_vehicles\data\m4a3_ncr.paa",
			"\ncraf_vehicles\data\m4a3turret_ncr.paa",
		};
	};
	
	class LIB_US_NAC_Scout_M3;
	class ncraf_ncr_scout_car: LIB_US_NAC_Scout_M3
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = 
		{
			"\ncraf_vehicles\data\m3a1_ncr.paa",
		};
	};
	
	class LIB_M3A3_Stuart;
	class ncraf_stuart_ncr: LIB_M3A3_Stuart
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper_crewman";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = 
		{
			"\ncraf_vehicles\data\m4a3_ncr.paa",
			"\ncraf_vehicles\data\m4a3turret_ncr.paa",
		};
	};
	
	class vurtual_m923;
	class ncraf_ncr_utilitytruck: vurtual_m923
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "5-Ton Truck";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = 
		{
			"\ncraf_vehicles\data\utilitytruck_co.paa",
		};
	};
	
	class B_T_VTOL_01_infantry_NCR_F;
	class ncraf_ncr_vertibird_infantry : B_T_VTOL_01_infantry_NCR_F
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "NCR XVB02 (Infantry)";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper_pilot";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};
	};
	
	class B_T_VTOL_01_armed_NCR_F;
	class ncraf_ncr_vertibird_armed : B_T_VTOL_01_armed_NCR_F
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "NCR XVB02 (Armed)";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper_pilot";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};	
	};
	
	class B_T_VTOL_01_vehicle_NCR_F;
	class ncraf_ncr_vertibird_vehicle : B_T_VTOL_01_vehicle_NCR_F
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "NCR XVB02 (Vehicle)";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper_pilot";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};		
	};
	
	class XVB_02_infantry_NCR_F;
	class ncraf_ncr_vertibird_original : XVB_02_infantry_NCR_F
	{
		author = "Archr";
        scope = 2;
        scopeCurator = 2;
        displayName = "XVB02 (Original)";
        side = 1;
        faction = "ncraf_ncr";
        crew = "ncraf_ncr_trooper_pilot";
		class TransportItems {};
		class TransportMagazines
		{
			class mag_xx{
				magazine =20Rnd_556x45_Mag;
				count = 8*1;
			};
		};
		
		class TransportWeapons 
		{
			class weap_xx{
				weapon =AM_serviceRifle;
				count = 1*1;
			};
		};		
	};
	
	class B_G_HMG_02_high_F;
	class ncraf_ncr_hmg_high: B_G_HMG_02_high_F
	{
		author = "Archr";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "ncraf_ncr";
		displayName = ".50 HMG (High)";
		crew = "ncraf_ncr_trooper";
	};
	
	class B_G_HMG_02_F;
	class ncraf_ncr_hmg: B_G_HMG_02_F
	{
		author = "Archr";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "ncraf_ncr";
		displayName = ".50 HMG (Low)";
		crew = "ncraf_ncr_trooper";
	};
	
	class LIB_M2_60;
	class ncraf_ncr_mortar_60: LIB_M2_60
	{
		author = "Archr";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "ncraf_ncr";
		displayName = "60mm Mortar";
		crew = "ncraf_ncr_trooper";
	};
	
	class LIB_leFH18;
	class ncraf_ncr_howitzer: LIB_leFH18
	{
		author = "Archr";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "ncraf_ncr";
		displayName = "105mm Howitzer";
		crew = "ncraf_ncr_trooper";
	};*/
};