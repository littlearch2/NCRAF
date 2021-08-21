class cfgWeapons {
	
	class AM_AntiMatRifle;
	class AM_HuntingRifle_Mod;
	class AM_SniperRifle;
	class AM_serviceRifle;
	
	class AM_AntiMatRifle_Full : AM_AntiMatRifle {
		scope = 1;
		class LinkedItems {
		
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_am_lrpsb";
			};
		};
	};
	
	class AM_HuntingRifle_Full : AM_HuntingRifle_Mod {
		scope = 1;
		class LinkedItems {
		
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_am_hrs";
			};
		};
	};

	class AM_SniperRifle_Full : AM_SniperRifle {
		scope = 1;
		class LinkedItems {
		
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_am_srs";
			};
		};
	};
	
	class AM_serviceRifle_Sniper : AM_serviceRifle {
		scope = 1;
		class LinkedItems {
		
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_khs_old";
			};
		};
	};
	
	class AM_serviceRifle_Stealth : AM_serviceRifle {
		scope = 1;
		class LinkedItems {
		
			class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "muzzle_snds_h";
			};
		};
	};
};