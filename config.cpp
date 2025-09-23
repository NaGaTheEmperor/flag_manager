class CfgPatches {
	class flag_manager {
		units[] = {"flag_ban_manager_austria","flag_ban_manager_baltia","flag_ban_manager_bel","flag_ban_manager_bosnia","flag_ban_manager_Bulgaria","flag_ban_manager_Canada","flag_ban_manager_chechen_ka","flag_ban_manager_china","flag_ban_manager_CRI","flag_ban_manager_croat","flag_ban_manager_Cuba","flag_ban_manager_Cuban","flag_ban_manager_Czech","flag_ban_manager_emirat","flag_ban_manager_Estonia","flag_ban_manager_France","flag_ban_manager_frg","flag_ban_manager_fsb","flag_ban_manager_GDR","flag_ban_manager_German","flag_ban_manager_herzBos","flag_ban_manager_herzBos","flag_ban_manager_Iran","flag_ban_manager_Iraq","flag_ban_manager_isis","flag_ban_manager_Israel","flag_ban_manager_Italy","flag_ban_manager_Japan","flag_ban_manager_Jordan","flag_ban_manager_KoreaN","flag_ban_manager_KoreaS","flag_ban_manager_kz","flag_ban_manager_Latvia","flag_ban_manager_Litva","flag_ban_manager_Livan","flag_ban_manager_Marine","flag_ban_manager_Mexico","flag_ban_manager_Moldova","flag_ban_manager_monten","flag_ban_manager_novros","flag_ban_manager_odkb","flag_ban_manager_Pakistan","flag_ban_manager_Palestine","flag_ban_manager_Poland","flag_ban_manager_redcross","flag_ban_manager_Reich","flag_ban_manager_Romania","flag_ban_manager_serb_kraina","flag_ban_manager_serb_resp","flag_ban_manager_serbia","flag_ban_manager_Slovakia","flag_ban_manager_slovenia","flag_ban_manager_Syria","flag_ban_manager_Taiwan","flag_ban_manager_talib","flag_ban_manager_Turkey","flag_ban_manager_ukr","flag_ban_manager_Ussrr","flag_ban_manager_Victory","flag_ban_manager_vv","flag_Manager_austria","flag_manager_baltia","flag_manager_bel","flag_manager_bosnia","flag_Manager_Bulgaria","flag_Manager_Canada","flag_manager_chechen_ka","flag_Manager_china","flag_Manager_CRI","flag_manager_croat","flag_Manager_Cuba","flag_Manager_Cuban","flag_Manager_Czech","flag_manager_emirat","flag_Manager_Estonia","flag_Manager_France","flag_Manager_frg","flag_manager_fsb","flag_Manager_GDR","flag_Manager_German","flag_manager_herzBos","flag_Manager_Hungary","flag_Manager_Iran","flag_Manager_Iraq","flag_manager_isis","flag_Manager_Israel","flag_Manager_Italy","flag_Manager_Japan","flag_Manager_Jordan","flag_Manager_KoreaN","flag_Manager_KoreaS","flag_manager_kz","flag_Manager_Latvia","flag_Manager_Litva","flag_Manager_Livan","flag_Manager_Marine","flag_Manager_Mexico","flag_Manager_Moldova","flag_manager_monten","flag_manager_novros","flag_manager_odkb","flag_Manager_Pakistan","flag_Manager_Palestine","flag_Manager_Poland","flag_manager_redcross","flag_Manager_Reich","flag_Manager_Romania","flag_manager_serb_kraina","flag_manager_serb_resp","flag_manager_serbia","flag_Manager_Slovakia","flag_manager_slovenia","flag_Manager_Syria","flag_Manager_Taiwan","flag_manager_talib","flag_Manager_Turkey","flag_manager_ukr","flag_Manager_Ussrr","flag_Manager_Victory","flag_manager_vv"};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMods {
	author = "$STR_DOG_author";
};

class CfgVehicles {
	class FlagCarrier;
	class Banner_01_F;
	
	
	class flag_Manager_australia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_australia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_australia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_australia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_australia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_australia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_australia_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_airustr : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_airustr_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_airustr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_airustr : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_airustr_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_airustr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_airustr_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_adfaustr : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_adfaustr_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_adfaustr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_adfaustr : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_adfaustr_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_adfaustr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_adfaustr_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_navalaustr : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_navalaustr_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_navalaustr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_navalaustr : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_navalaustr_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_navalaustr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_navalaustr_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_adm : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_adm_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_adm_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_adm : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_adm_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_adm_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_adm_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippines : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippines_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippines_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippines : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippines_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippines_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippines_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippineswarflag : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippineswarflag_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippineswarflag_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippineswarflag : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippineswarflag_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippineswarflag_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippineswarflag_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesaf : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesaf_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesaf_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesaf : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesaf_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesaf_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesaf_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesairforce : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesairforce_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesairforce_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesairforce : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesairforce_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesairforce_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesairforce_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesarmy : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesarmy_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesarmy_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesarmy : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesarmy_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesarmy_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesarmy_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesnavy : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesnavy_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesnavy_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesnavy : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesnavy_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesnavy_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesnavy_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesmarine : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesmarine_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesmarine_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesmarine : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesmarine_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesmarine_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesmarine_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesnavaljack : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesnavaljack_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesnavaljack_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesnavaljack : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesnavaljack_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesnavaljack_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesnavaljack_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesmoronat : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesmoronat_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesmoronat_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesmoronat : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesmoronat_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesmoronat_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesmoronat_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesmoromuslim : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesmoromuslim_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesmoromuslim_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesmoromuslim : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesmoromuslim_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesmoromuslim_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesmoromuslim_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesdemnat : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesdemnat_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesdemnat_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesdemnat : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesdemnat_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesdemnat_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesdemnat_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinescommunist : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinescommunist_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinescommunist_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinescommunist : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinescommunist_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinescommunist_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinescommunist_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_philippinesworker : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesworker_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesworker_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_philippinesworker : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_philippinesworker_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_philippinesworker_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_philippinesworker_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_racs : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_racs_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_racs_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_racs : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_racs_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_racs_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_racs_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_sla : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sla_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sla_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_sla : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sla_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_sla_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sla_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_ardistan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_ardistan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ardistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_ardistan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_ardistan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_ardistan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ardistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_takistann : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_takistann_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_takistann_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_takistann : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_takistann_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_takistann_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_takistann_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_karzeghistan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_karzeghistan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_karzeghistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_karzeghistan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_karzeghistan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_karzeghistan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_karzeghistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_grozovia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_grozovia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_grozovia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_grozovia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_grozovia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_grozovia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_grozovia_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_chernarus : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_chernarus_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chernarus_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_chernarus : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_chernarus_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_chernarus_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chernarus_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_eternal : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_eternal_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_eternal_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_eternal : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_eternal_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_eternal_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_eternal_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_arstochka : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_arstochka_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_arstochka_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_arstochka : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_arstochka_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_arstochka_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_arstochka_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_kiwi : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kiwi_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kiwi_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kiwi : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kiwi_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kiwi_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kiwi_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_newzealand : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_newzealand_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_newzealand_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_newzealand : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_newzealand_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_newzealand_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_newzealand_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_irland : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_irland_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_irland_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_irland : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_irland_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_irland_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_irland_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_welsh : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_welsh_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_welsh_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_welsh : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_welsh_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_welsh_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_welsh_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_shotland : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_shotland_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_shotland_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_shotland : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_shotland_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_shotland_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_shotland_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_spain : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_spain_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_spain_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_spain : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_spain_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_spain_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_spain_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_albania : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_albania_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_albania_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_albania : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_albania_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_albania_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_albania_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_grece : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_grece_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_grece_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_grece : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_grece_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_grece_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_grece_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_netherlands : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_netherlands_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_netherlands_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_netherlands : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_netherlands_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_netherlands_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_netherlands_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_luxemburg : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_luxemburg_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_luxemburg_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_luxemburg : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_luxemburg_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_luxemburg_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_luxemburg_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_belgia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_belgia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_belgia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_belgia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_belgia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_belgia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_belgia_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_sheizar : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sheizar_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sheizar_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_sheizar : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sheizar_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_sheizar_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sheizar_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_finland : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_finland_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_finland_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_finland : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_finland_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_finland_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_finland_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_norwegian : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_norwegian_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_norwegian_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_norwegian : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_norwegian_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_norwegian_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_norwegian_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_sweden : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sweden_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sweden_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_sweden : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sweden_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_sweden_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sweden_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_denmark : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_denmark_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_denmark_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_denmark : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_denmark_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_denmark_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_denmark_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_georgiaussr : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_georgiaussr_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_georgiaussr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_georgiaussr : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_georgiaussr_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_georgiaussr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_georgiaussr_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_georgia90s : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_georgia90s_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_georgia90s_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_georgia90s : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_georgia90s_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_georgia90s_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_georgia90s_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_peru : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_peru_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_peru_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_peru : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_peru_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_peru_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_peru_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_chile : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_chile_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chile_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_chile : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_chile_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_chile_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chile_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_argentina : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_argentina_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_argentina_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_argentina : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_argentina_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_argentina_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_argentina_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_venesuela : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_venesuela_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_venesuela_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_venesuela : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_venesuela_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_venesuela_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_venesuela_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_colombia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_colombia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_colombia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_colombia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_colombia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_colombia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_colombia_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_brazil : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_brazil_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_brazil_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_brazil : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_brazil_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_brazil_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_brazil_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_bokoharam : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_bokoharam_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bokoharam_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_bokoharam : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_bokoharam_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_bokoharam_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bokoharam_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_abusayyaf : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_abusayyaf_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_abusayyaf_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_abusayyaf : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_abusayyaf_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_abusayyaf_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_abusayyaf_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_irgc : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_irgc_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_irgc_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_irgc : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_irgc_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_irgc_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_irgc_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_india : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_india_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_india_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_india : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_india_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_india_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_india_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_hezbola : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_hezbola_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_hezbola_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_hezbola : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_hezbola_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_hezbola_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_hezbola_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_ansarallah : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_ansarallah_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ansarallah_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_ansarallah : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_ansarallah_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_ansarallah_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ansarallah_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_rusempire : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_rusempire_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_rusempire_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_rusempire : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_rusempire_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_rusempire_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_rusempire_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_naziitaly : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_naziitaly_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_naziitaly_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_naziitaly : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_naziitaly_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_naziitaly_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_naziitaly_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_spainanarcho : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_spainanarcho_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_spainanarcho_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_spainanarcho : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_spainanarcho_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_spainanarcho_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_spainanarcho_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_spainrepublic : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_spainrepublic_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_spainrepublic_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_spainrepublic : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_spainrepublic_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_spainrepublic_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_spainrepublic_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_nazispain : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_nazispain_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_nazispain_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_nazispain : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_nazispain_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_nazispain_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_nazispain_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_chaos : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_chaos_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chaos_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_chaos : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_chaos_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_chaos_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chaos_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_gok : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_gok_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_gok_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_gok : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_gok_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_gok_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_gok_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_umbrella : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_umbrella_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_umbrella_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_umbrella : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_umbrella_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_umbrella_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_umbrella_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_scp : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_scp_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_scp_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_scp : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_scp_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_scp_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_scp_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_lospolos : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_lospolos_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_lospolos_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_lospolos : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_lospolos_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_lospolos_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_lospolos_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_kavkazemiratv2 : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kavkazemiratv2_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kavkazemiratv2_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kavkazemiratv2 : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kavkazemiratv2_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kavkazemiratv2_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kavkazemiratv2_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_kavkazemiratv1 : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kavkazemiratv1_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kavkazemiratv1_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kavkazemiratv1 : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kavkazemiratv1_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kavkazemiratv1_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kavkazemiratv1_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_gruzija : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_gruzija_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_gruzija_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_gruzija : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_gruzija_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_gruzija_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_gruzija_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_azer : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_azer_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_azer_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_azer : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_azer_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_azer_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_azer_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_armenia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_armenia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_armenia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_armenia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_armenia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_armenia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_armenia_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_karabax : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_karabax_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_karabax_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_karabax : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_karabax_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_karabax_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_karabax_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_kurdistan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kurdistan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kurdistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kurdistan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kurdistan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kurdistan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kurdistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_alnusra : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_alnusra_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_alnusra_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_alnusra : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_alnusra_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_alnusra_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_alnusra_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_syrianacarmija : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_syrianacarmija_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_syrianacarmija_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_syrianacarmija : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_syrianacarmija_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_syrianacarmija_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_syrianacarmija_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_afgan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_afgan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_afgan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_afgan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_afgan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_afgan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_afgan_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_aok : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_aok_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_aok_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_aok : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_aok_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_aok_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_aok_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_kosovo : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kosovo_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kosovo_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kosovo : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kosovo_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kosovo_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kosovo_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_kongo : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kongo_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kongo_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kongo : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_kongo_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kongo_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kongo_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_drkongo : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_drkongo_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_drkongo_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_drkongo : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_drkongo_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_drkongo_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_drkongo_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_centralafrica : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_centralafrica_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_centralafrica_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_centralafrica : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_centralafrica_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_centralafrica_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_centralafrica_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_nigeria : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_nigeria_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_nigeria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_nigeria : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_nigeria_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_nigeria_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_nigeria_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_niger : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_niger_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_niger_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_niger : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_niger_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_niger_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_niger_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_angola : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_angola_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_angola_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_angola : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_angola_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_angola_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_angola_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_mali : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_mali_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_mali_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_mali : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_mali_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_mali_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_mali_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_sudan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sudan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sudan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_sudan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_sudan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_sudan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_sudan_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_egipet : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_egipet_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_egipet_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_egipet : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_egipet_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_egipet_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_egipet_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_somali : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_somali_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_somali_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_somali : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_somali_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_somali_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_somali_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_alzir : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_alzir_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_alzir_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_alzir : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_alzir_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_alzir_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_alzir_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_tunis : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_tunis_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_tunis_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_tunis : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_tunis_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_tunis_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_tunis_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_livija : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_livija_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_livija_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_livija : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_livija_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_livija_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_livija_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	
	class flag_Manager_morokko : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_morokko_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_morokko_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_morokko : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_morokko_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_morokko_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_morokko_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	
	class flag_Manager_forward : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_forward_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_forward_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_forward : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_forward_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_forward_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_forward_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	
	class flag_Manager_mozart : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_mozart_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_mozart_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_mozart : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_mozart_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_mozart_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_mozart_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	class flag_Manager_blackwater : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_blackwater_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_blackwater_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_blackwater : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_blackwater_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_blackwater_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_blackwater_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	
	class flag_Manager_wagner : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_wagner_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_wagner_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_wagner : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_wagner_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_wagner_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_wagner_CO.paa'";
		};
		scopeCurator = 2;
	};
	
	
	class flag_Manager_GDR : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_GDR_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_gdr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_GDR : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_GDR_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_gdr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_gdr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_frg : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_frg_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_frg_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_frg : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_frg_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_frg_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_frg_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Victory : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Victory_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_victory_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Victory : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Victory_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_victory_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_victory_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Hungary : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Hungary_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_vengria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Hungary : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Hungary_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_vengria_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_vengria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Ussrr : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Ussrr_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ussr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Ussrr : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Ussrr_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_ussr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ussr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Turkey : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Turkey_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_turkey_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Turkey : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Turkey_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_turkey_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_turkey_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Taiwan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Taiwan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_taiwan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Taiwan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Taiwan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_taiwan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_taiwan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Syria : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Syria_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_syria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Syria : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Syria_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_syria_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_syria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Slovakia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Slovakia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_slovakia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Slovakia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Slovakia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_slovakia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_slovakia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Romania : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Romania_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_romania_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Romania : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Romania_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_romania_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_romania_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Reich : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Reich_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_reih_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Reich : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Reich_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_reih_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_reih_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Poland : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Poland_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_poland_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Poland : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Poland_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_poland_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_poland_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Palestine : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Palestine_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_palestine_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Palestine : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Palestine_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_palestine_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_palestine_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Pakistan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Pakistan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_Pakistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Pakistan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Pakistan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_Pakistan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_Pakistan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_KoreaS : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_KoreaS_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_Skorea_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_KoreaS : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_KoreaS_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_Skorea_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_Skorea_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_KoreaN : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_KoreaN_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_Nkorea_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_KoreaN : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_KoreaN_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_Nkorea_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_Nkorea_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Moldova : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Moldova_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_moldova_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Moldova : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Moldova_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_moldova_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_moldova_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Mexico : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Mexico_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_mexica_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Mexico : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Mexico_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_mexica_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_mexica_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Litva : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Litva_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_litva_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Litva : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Litva_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_litva_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_litva_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Livan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Livan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_livan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Livan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Livan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_livan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_livan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Latvia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Latvia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_latvia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Latvia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Latvia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_latvia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_latvia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Cuba : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Cuba_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kuba_kastro_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Cuba : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Cuba_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kuba_kastro_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kuba_kastro_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Cuban : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Cuban_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kuba_new_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Cuban : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Cuban_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kuba_new_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kuba_new_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Jordan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Jordan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_jordan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Jordan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Jordan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_jordan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_jordan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Marine : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Marine_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_marine_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Marine : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Marine_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_marine_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_marine_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Japan : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Japan_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_japan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Japan : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Japan_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_japan_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_japan_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Italy : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Italy_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_italy_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Italy : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Italy_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_italy_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_italy_CO.paa'";
		};
		scopeCurator = 2;
	};	
	class flag_Manager_Israel : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Israel_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_israel_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Israel : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Israel_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_israel_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_israel_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Iraq : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Iraq_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_iraq_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Iraq : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Iraq_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_iraq_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_iraq_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Iran : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Iran_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_iran_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Iran : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Iran_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_iran_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_iran_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_German : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_German_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_german_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_German : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_German_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_german_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_german_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_France : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_France_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_france_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_France : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_France_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_france_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_france_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_Estonia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Estonia_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_estonia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Estonia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Estonia_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_estonia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_estonia_CO.paa'";
		};
		scopeCurator = 2;
	};	
	class flag_Manager_Czech : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Czech_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_czech_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Czech : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Czech_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_czech_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_czech_CO.paa'";
		};
		scopeCurator = 2;
	};	
	class flag_Manager_china : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_china_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_china_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_china : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_china_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_china_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_china_CO.paa'";
		};
		scopeCurator = 2;
	};	
	class flag_Manager_Canada : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Canada_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_canada_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Canada : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Canada_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_canada_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_canada_CO.paa'";
		};
		scopeCurator = 2;
	};	
	class flag_Manager_Bulgaria : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Bulgaria_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bolgaria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_Bulgaria : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_Bulgaria_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_bolgaria_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bolgaria_CO.paa'";
		};
		scopeCurator = 2;
	};	
	class flag_Manager_austria : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_austria_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_austria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_austria : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_austria_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_austria_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_austria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_Manager_CRI : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_CRI_f";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_CRI_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_CRI : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_CRI_b";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_CRI_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_austria_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_serbia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_serb";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_serbiaa_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_serb_kraina : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_serb_krain";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_serb_kraina_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_serb_resp : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_serb_rep";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_resp_srbska_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_odkb : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_odkb";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_odkb_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_redcross : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_redcross";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_redcross_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_vv : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_vv";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_vv_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_fsb : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_fsb";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_fsb_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_novros : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_novros";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_novrus_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_chechen_ka : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_chechen_ka";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_che_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_bel : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_bel";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bulba_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_isis : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_isis";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_isis_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_ukr : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_ukr";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ukr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_croat : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_croat";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_croatian_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_bosnia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_bosnia";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bosnia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_slovenia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_slovenia";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_slovenia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_herzBos : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_herzBos";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_BosnoXorvat_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_monten : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_monten";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chernogoria_Serbia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_kz : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_kz";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kz_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_talib : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_talib";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_taliban_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_emirat : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_emirat";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_afganEmirat_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_manager_baltia : FlagCarrier {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_FLAG_baltia";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_baltia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_emirat : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_emirat";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_afganEmirat_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_afganEmirat_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_baltia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_baltia";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_baltia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_baltia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_serbia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_serb";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_serbiaa_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_serbiaa_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_serb_kraina : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_serb_krain";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_serb_kraina_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_serb_kraina_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_serb_resp : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_serb_rep";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_resp_srbska_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_resp_srbska_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_odkb : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_odkb";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_odkb_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_odkb_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_redcross : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_redcross";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_redcross_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_redcross_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_vv : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_vv";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_vv_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_vv_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_fsb : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_fsb";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_fsb_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_fsb_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_novros : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_novros";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_novrus_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_novrus_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_chechen_ka : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_chechen_ka";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_che_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_che_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_bel : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_bel";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_bulba_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bulba_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_isis : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_isis";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_isis_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_isis_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_ukr : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_ukr";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_ukr_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_ukr_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_croat : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_croat";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_croatian_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_croatian_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_bosnia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_bosnia";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_bosnia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_bosnia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_slovenia : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_slovenia";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_slovenia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_slovenia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_herzBos : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_herzBos";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_BosnoXorvat_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_BosnoXorvat_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_monten : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_monten";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_chernogoria_Serbia_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_chernogoria_Serbia_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_kz : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_kz";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_kz_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_kz_CO.paa'";
		};
		scopeCurator = 2;
	};
	class flag_ban_manager_talib : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "$STR_DOG_BAN_talib";
		hiddenSelectionsTextures[] = {"flag_manager\data\flag_Manager_taliban_CO.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'flag_manager\data\flag_Manager_taliban_CO.paa'";
		};
		scopeCurator = 2;
	};
};

class Cfg3DEN {
	class Object {
		class AttributeCategories {
			class flagtoveh {
				displayName = "$STR_DOG_CAT_NAME";
				collapsed = 0;
				class Attributes {
					class markflag {
						displayName = "$STR_DOG_ATR2_NAME";
						tooltip = "$STR_DOG_TOOLTIP";
						property = "marktheflag";
						control = "Combo";
						//expression = "_this setVariable ['%s',_value];[_this,_value] call dog_fnc_vegFlag";
						expression = "if (_value != 'NULL') then {_this forceFlagTexture _value};";
						defaultValue = 0;
						unique = 0;
						condition = "objectVehicle";
						typeName = STRING;
						class values {
							class none {
								name = "$STR_DOG_none";
								value = "NULL";
								defaultValue = 0;
							};
							//Цвета Colours
							class color {
								name = "$STR_DOG_COLOR";
								value = "NULL";
							};
							class red {
								name = "$STR_DOG_red";
								value = "\A3\Data_F\Flags\flag_red_CO.paa";
							};
							class green {
								name = "$STR_DOG_green";
								value = "\A3\Data_F\Flags\flag_green_CO.paa";
							};
							class blue {
								name = "$STR_DOG_blue";
								value = "\A3\Data_F\Flags\flag_blue_CO.paa";
							};
							class white {
								name = "$STR_DOG_white";
								value = "\A3\Data_F\Flags\flag_white_CO.paa";
							};
							
							
							//Арма 3 ванила A3 Vanilla
							class armacoutry {
								name = "$STR_DOG_COUNTRY_ARMA";
								value = "NULL";
							};							
							class altis {
								name = "$STR_DOG_altis";
								value = "\A3\Data_F\Flags\flag_Altis_CO.paa";
							};
							class altis_col {
								name = "$STR_DOG_altis_col";
								value = "\A3\Data_F\Flags\flag_AltisColonial_CO.paa";
							};
							class tanoa {
								name = "$STR_DOG_tanoa";
								value = "\A3\Data_F_Exp\Flags\flag_Tanoa_CO.paa";
							};
							class livonia {
								name = "$STR_DOG_livonia";
								value = "\A3\Data_F_Enoch\Flags\flag_Enoch_CO.paa";
							};
							class grozovia {
								name = "$STR_DOG_grozovia";
								value = "flag_manager\data\flag_Manager_grozovia_CO.paa";
							};
							class takistan {
								name = "$STR_DOG_takistan";
								value = "\UK3CB_Factions\addons\UK3CB_Factions_TKA\Flag\tka_flag_co.paa";
							};
							class takistann {
								name = "$STR_DOG_takistann";
								value = "flag_manager\data\flag_Manager_takistann_CO.paa";
							};
							class ardistan {
								name = "$STR_DOG_ardistan";
								value = "flag_manager\data\flag_Manager_ardistan_CO.paa";
							};
							class karzeghistan {
								name = "$STR_DOG_karzeghistan";
								value = "flag_manager\data\flag_Manager_karzeghistan_CO.paa";
							};
							class cdf {
								name = "$STR_DOG_cdf";
								value = "\A3\Air_F\Data\plane_flag_CO.paa";
							};
							class chernarus {
								name = "$STR_DOG_chernarus";
								value = "flag_manager\data\flag_Manager_chernarus_CO.paa";
							};
							class cdhkz {
								name = "$STR_DOG_chdkz";
								value = "\rhsafrf\addons\rhs_c_cti_indep\flag_chdkz_co.paa";
							};
							class NAPA {
								name = "$STR_DOG_napa";
								value = "\UK3CB_Factions\addons\UK3CB_Factions_NAP\Flag\nap_flag_co.paa";
							};
							class dog {
								name = "$STR_DOG_dog1";
								value = "flag_manager\data\dog_flag_co.paa";
							};
							class dog_af {
								name = "$STR_DOG_dog2";
								value = "flag_manager\data\dog_flag_af_co.paa";
							};
							class baltia {
								name = "$STR_DOG_baltia";
								value = "flag_manager\data\flag_Manager_baltia_CO.paa";
							};
							class sla {
								name = "$STR_DOG_sla";
								value = "flag_manager\data\flag_Manager_sla_CO.paa";
							};
							class racs {
								name = "$STR_DOG_racs";
								value = "flag_manager\data\flag_Manager_racs_CO.paa";
							};
							
							
							//Europe
							class armacoutryeur {
								name = "$STR_DOG_COUNTRY_EUR";
								value = "NULL";
							};
							class rus {
								name = "$STR_DOG_rus";
								value = "\A3\Data_F_Enoch\Flags\flag_rus_co.paa";
							};
							class uk {
								name = "$STR_DOG_uk";
								value = "\A3\Data_F\Flags\flag_uk_CO.paa";
							};
							class pred {
								name = "$STR_DOG_trn";
								value = "rhsafrf\addons\rhs_main\data\flag_trn_co.paa";
							};
							class oset {
								name = "$STR_DOG_oset";
								value = "rhsafrf\addons\rhs_main\data\flag_ose_co.paa";
							};
							class abk {
								name = "$STR_DOG_abx";
								value = "rhsafrf\addons\rhs_main\data\flag_abk_co.paa";
							};
							class kz {
								name = "$STR_DOG_kz";
								value = "flag_manager\data\flag_Manager_kz_CO.paa";
							};
							class batko {
								name = "$STR_DOG_bel";
								value = "flag_manager\data\flag_Manager_bulba_CO.paa";
							};
							class ukr {
								name = "$STR_DOG_ukr";
								value = "flag_manager\data\flag_Manager_ukr_CO.paa";
							};
							class german {
								name = "$STR_DOG_German";
								value = "flag_manager\data\flag_Manager_german_CO.paa";
							};
							class frg {
								name = "$STR_DOG_frg";
								value = "flag_manager\data\flag_Manager_frg_CO.paa";
							};
							class gdr {
								name = "$STR_DOG_GDR";
								value = "flag_manager\data\flag_Manager_gdr_CO.paa";
							};
							class austria {
								name = "$STR_DOG_austria";
								value = "flag_manager\data\flag_Manager_austria_CO.paa";
							};
							class vengria {
								name = "$STR_DOG_Hungary";
								value = "flag_manager\data\flag_Manager_vengria_CO.paa";
							};
							class Bulgaria {
								name = "$STR_DOG_Bulgaria";
								value = "flag_manager\data\flag_Manager_bolgaria_CO.paa";
							};
							class Czech {
								name = "$STR_DOG_Czech";
								value = "flag_manager\data\flag_Manager_czech_CO.paa";
							};
							class Estonia {
								name = "$STR_DOG_Estonia";
								value = "flag_manager\data\flag_Manager_estonia_CO.paa";
							};
							class Litva {
								name = "$STR_DOG_Litva";
								value = "flag_manager\data\flag_Manager_litva_CO.paa";
							};
							class Latvia {
								name = "$STR_DOG_Latvia";
								value = "flag_manager\data\flag_Manager_latvia_CO.paa";
							};
							class France {
								name = "$STR_DOG_France";
								value = "flag_manager\data\flag_Manager_france_CO.paa";
							};
							class Italy {
								name = "$STR_DOG_Italy";
								value = "flag_manager\data\flag_Manager_italy_CO.paa";
							};
							class Moldova {
								name = "$STR_DOG_Moldova";
								value = "flag_manager\data\flag_Manager_moldova_CO.paa";
							};
							class Poland {
								name = "$STR_DOG_Poland";
								value = "flag_manager\data\flag_Manager_poland_CO.paa";
							};
							class Romania {
								name = "$STR_DOG_Romania";
								value = "flag_manager\data\flag_Manager_romania_CO.paa";
							};
							class Slovakia {
								name = "$STR_DOG_Slovakia";
								value = "flag_manager\data\flag_Manager_slovakia_CO.paa";
							};
							class albania {
								name = "$STR_DOG_albania";
								value = "flag_manager\data\flag_Manager_albania_CO.paa";
							};
							class sheizar {
								name = "$STR_DOG_sheizar";
								value = "flag_manager\data\flag_Manager_sheizar_CO.paa";
							};
							class belgia {
								name = "$STR_DOG_belgia";
								value = "flag_manager\data\flag_Manager_belgia_CO.paa";
							};
							class luxemburg {
								name = "$STR_DOG_luxemburg";
								value = "flag_manager\data\flag_Manager_luxemburg_CO.paa";
							};
							class netherlands {
								name = "$STR_DOG_netherlands";
								value = "flag_manager\data\flag_Manager_netherlands_CO.paa";
							};
							class grece {
								name = "$STR_DOG_grece";
								value = "flag_manager\data\flag_Manager_grece_CO.paa";
							};
							class spain {
								name = "$STR_DOG_spain";
								value = "flag_manager\data\flag_Manager_spain_CO.paa";
							};
							class shotland {
								name = "$STR_DOG_shotland";
								value = "flag_manager\data\flag_Manager_shotland_CO.paa";
							};
							class welsh {
								name = "$STR_DOG_welsh";
								value = "flag_manager\data\flag_Manager_welsh_CO.paa";
							};
							class irland {
								name = "$STR_DOG_irland";
								value = "flag_manager\data\flag_Manager_irland_CO.paa";
							};
							
							
							//Asia
							class armacoutryasia {
								name = "$STR_DOG_asia";
								value = "NULL";
							};
							class China {
								name = "$STR_DOG_china";
								value = "flag_manager\data\flag_Manager_china_CO.paa";
							};
							class Taiwan {
								name = "$STR_DOG_Taiwan";
								value = "flag_manager\data\flag_Manager_taiwan_CO.paa";
							};
							class Japan {
								name = "$STR_DOG_Japan";
								value = "flag_manager\data\flag_Manager_japan_CO.paa";
							};
							class KoreaN {
								name = "$STR_DOG_KoreaN";
								value = "flag_manager\data\flag_Manager_Nkorea_CO.paa";
							};
							class Koreas {
								name = "$STR_DOG_KoreaS";
								value = "flag_manager\data\flag_Manager_Skorea_CO.paa";
							};
							class india {
								name = "$STR_DOG_india";
								value = "flag_manager\data\flag_Manager_india_CO.paa";
							};
							class abusayyaf {
								name = "$STR_DOG_abusayyaf";
								value = "flag_manager\data\flag_Manager_abusayyaf_CO.paa";
							};
							
							
							//Africa
							class armacoutryafrica {
								name = "$STR_DOG_africa";
								value = "NULL";
							};
							class morokko {
								name = "$STR_DOG_morokko";
								value = "flag_manager\data\flag_Manager_morokko_CO.paa";
							};
							class livija {
								name = "$STR_DOG_livija";
								value = "flag_manager\data\flag_Manager_livija_CO.paa";
							};
							class tunis {
								name = "$STR_DOG_tunis";
								value = "flag_manager\data\flag_Manager_tunis_CO.paa";
							};
							class alzir {
								name = "$STR_DOG_alzir";
								value = "flag_manager\data\flag_Manager_alzir_CO.paa";
							};
							class somali {
								name = "$STR_DOG_somali";
								value = "flag_manager\data\flag_Manager_somali_CO.paa";
							};
							class egipet {
								name = "$STR_DOG_egipet";
								value = "flag_manager\data\flag_Manager_egipet_CO.paa";
							};
							class sudan {
								name = "$STR_DOG_sudan";
								value = "flag_manager\data\flag_Manager_sudan_CO.paa";
							};
							class mali {
								name = "$STR_DOG_mali";
								value = "flag_manager\data\flag_Manager_mali_CO.paa";
							};
							class angola {
								name = "$STR_DOG_angola";
								value = "flag_manager\data\flag_Manager_angola_CO.paa";
							};
							class niger {
								name = "$STR_DOG_niger";
								value = "flag_manager\data\flag_Manager_niger_CO.paa";
							};
							class nigeria {
								name = "$STR_DOG_nigeria";
								value = "flag_manager\data\flag_Manager_nigeria_CO.paa";
							};
							class centralafrica {
								name = "$STR_DOG_centralafrica";
								value = "flag_manager\data\flag_Manager_centralafrica_CO.paa";
							};
							class drkongo {
								name = "$STR_DOG_drkongo";
								value = "flag_manager\data\flag_Manager_drkongo_CO.paa";
							};
							class kongo {
								name = "$STR_DOG_kongo";
								value = "flag_manager\data\flag_Manager_kongo_CO.paa";
							};
							class bokoharam {
								name = "$STR_DOG_bokoharam";
								value = "flag_manager\data\flag_Manager_bokoharam_CO.paa";
							};
							class adm {
								name = "$STR_DOG_adm";
								value = "flag_manager\data\flag_Manager_adm_CO.paa";
							};
							
							
							//Nato and ODKB and UN
							class armacoutryorg {
								name = "$STR_DOG_ORG";
								value = "NULL";
							};
							class odkb {
								name = "$STR_DOG_odkb";
								value = "flag_manager\data\flag_Manager_odkb_CO.paa";
							};
							class NATO {
								name = "$STR_DOG_NATO";
								value = "\A3\Data_F\Flags\flag_NATO_CO.paa";
							};
							class UN {
								name = "$STR_DOG_UN";
								value = "\A3\Data_F\Flags\Flag_uno_CO.paa";
							};
							class redcross {
								name = "$STR_DOG_redcross";
								value = "flag_manager\data\flag_Manager_redcross_CO.paa";
							};
							
							
							//fictive org
							class armacoutryorgfictive {
								name = "$STR_DOG_ORGf";
								value = "NULL";
							};
							class scp {
								name = "$STR_DOG_scp";
								value = "flag_manager\data\flag_Manager_scp_CO.paa";
							};
							class gok {
								name = "$STR_DOG_gok";
								value = "flag_manager\data\flag_Manager_gok_CO.paa";
							};
							class chaos {
								name = "$STR_DOG_chaos";
								value = "flag_manager\data\flag_Manager_chaos_CO.paa";
							};
							class umbrella {
								name = "$STR_DOG_umbrella";
								value = "flag_manager\data\flag_Manager_umbrella_CO.paa";
							};
							class lospolos {
								name = "$STR_DOG_lospolos";
								value = "flag_manager\data\flag_Manager_lospolos_CO.paa";
							};
							
							
							//PMC
							class armapmc {
								name = "$STR_DOG_Pmc";
								value = "NULL";
							};
							class wagner {
								name = "$STR_DOG_wagner";
								value = "flag_manager\data\flag_Manager_wagner_CO.paa";
							};
							class blackwater {
								name = "$STR_DOG_blackwater";
								value = "flag_manager\data\flag_Manager_blackwater_CO.paa";
							};
							class mozart {
								name = "$STR_DOG_mozart";
								value = "flag_manager\data\flag_Manager_mozart_CO.paa";
							};
							class forward {
								name = "$STR_DOG_forward";
								value = "flag_manager\data\flag_Manager_forward_CO.paa";
							};
							
							
							//In Russia|russian
							class armacoutryinrus {
								name = "$STR_DOG_InRussia";
								value = "NULL";
							};
							class rus_rhs {
								name = "$STR_DOG_ru_rhs";
								value = "\rhsafrf\addons\rhs_main\data\Flag_rus_CO.paa";
							};
							class rus_vdv {
								name = "$STR_DOG_vdv";
								value = "rhsafrf\addons\rhs_main\data\flag_vdv_co.paa";
							};
							class rus_vmf {
								name = "$STR_DOG_vmf";
								value = "rhsafrf\addons\rhs_main\data\flag_vmf_co.paa";
							};
							class rus_vv {
								name = "$STR_DOG_vv";
								value = "flag_manager\data\flag_Manager_vv_CO.paa";
							};
							class rus_fsb {
								name = "$STR_DOG_fsb";
								value = "flag_manager\data\flag_Manager_fsb_CO.paa";
							};
							class chechen {
								name = "$STR_DOG_chechen";
								value = "rhsafrf\addons\rhs_main\data\flag_che_co.paa";
							};
							class chechen_kad {
								name = "$STR_DOG_chechen_ka";
								value = "flag_manager\data\flag_Manager_che_CO.paa";
							};
							class CRI {
								name = "$STR_DOG_CRI";
								value = "flag_manager\data\flag_Manager_CRI_CO.paa";
							};
							class novros {
								name = "$STR_DOG_novros";
								value = "flag_manager\data\flag_Manager_novrus_CO.paa";
							};
							class dnr {
								name = "$STR_DOG_dnr";
								value = "rhsafrf\addons\rhs_main\data\flag_dnr_co.paa";
							};
							class lnr {
								name = "$STR_DOG_lnr";
								value = "rhsafrf\addons\rhs_main\data\flag_lnr_co.paa";
							};
							
							
							//Кавказ
							class armacoutrycaucsus {
								name = "$STR_DOG_kavkaz";
								value = "NULL";
							};
							class karabax {
								name = "$STR_DOG_karabax";
								value = "flag_manager\data\flag_Manager_karabax_CO.paa";
							};
							class armenia {
								name = "$STR_DOG_armenia";
								value = "flag_manager\data\flag_Manager_armenia_CO.paa";
							};
							class azer {
								name = "$STR_DOG_azer";
								value = "flag_manager\data\flag_Manager_azer_CO.paa";
							};
							class gruzija {
								name = "$STR_DOG_gruzija";
								value = "flag_manager\data\flag_Manager_gruzija_CO.paa";
							};
							class georgiaussr {
								name = "$STR_DOG_georgiaussr";
								value = "flag_manager\data\flag_Manager_georgiaussr_CO.paa";
							};
							class georgia90s {
								name = "$STR_DOG_georgia90s";
								value = "flag_manager\data\flag_Manager_georgia90s_CO.paa";
							};
							class kavkazemiratv1 {
								name = "$STR_DOG_kavkazemiratv1";
								value = "flag_manager\data\flag_Manager_kavkazemiratv1_CO.paa";
							};
							class kavkazemiratv2 {
								name = "$STR_DOG_kavkazemiratv2";
								value = "flag_manager\data\flag_Manager_kavkazemiratv2_CO.paa";
							};
							
							
							
							//EAST
							class armacoutryeast {
								name = "$STR_DOG_East";
								value = "NULL";
							};
							class Turkey {
								name = "$STR_DOG_Turkey";
								value = "flag_manager\data\flag_Manager_turkey_CO.paa";
							};
							class Syria {
								name = "$STR_DOG_Syria";
								value = "flag_manager\data\flag_Manager_syria_CO.paa";
							};
							class Iran {
								name = "$STR_DOG_Iran";
								value = "flag_manager\data\flag_Manager_iran_CO.paa";
							};
							class Iraq {
								name = "$STR_DOG_Iraq";
								value = "flag_manager\data\flag_Manager_iraq_CO.paa";
							};
							class Jordan {
								name = "$STR_DOG_Jordan";
								value = "flag_manager\data\flag_Manager_jordan_CO.paa";
							};
							class Palestine {
								name = "$STR_DOG_Palestine";
								value = "flag_manager\data\flag_Manager_palestine_CO.paa";
							};
							class Livan {
								name = "$STR_DOG_Livan";
								value = "flag_manager\data\flag_Manager_livan_CO.paa";
							};
							class Pakistan {
								name = "$STR_DOG_Pakistan";
								value = "flag_manager\data\flag_Manager_Pakistan_CO.paa";
							};
							class Israel {
								name = "$STR_DOG_Israel";
								value = "flag_manager\data\flag_Manager_israel_CO.paa";
							};
							class isis {
								name = "$STR_DOG_isis";
								value = "flag_manager\data\flag_Manager_isis_CO.paa";
							};
							class talib {
								name = "$STR_DOG_talib";
								value = "flag_manager\data\flag_Manager_taliban_CO.paa";
							};
							class emirat {
								name = "$STR_DOG_emirat";
								value = "flag_manager\data\flag_Manager_afganEmirat_CO.paa";
							};
							class afg {
								name = "$STR_DOG_afg";
								value = "\UK3CB_Factions\addons\UK3CB_Factions_ANA\Flag\afg_13_flag_co.paa";
							};
							class afgan {
								name = "$STR_DOG_afgan";
								value = "flag_manager\data\flag_Manager_afgan_CO.paa";
							};
							class syrianacarmija {
								name = "$STR_DOG_syrianacarmija";
								value = "flag_manager\data\flag_Manager_syrianacarmija_CO.paa";
							};
							class alnusra {
								name = "$STR_DOG_alnusra";
								value = "flag_manager\data\flag_Manager_alnusra_CO.paa";
							};
							class kurdistan {
								name = "$STR_DOG_CRI";
								value = "flag_manager\data\flag_Manager_kurdistan_CO.paa";
							};
							class ansarallah {
								name = "$STR_DOG_ansarallah";
								value = "flag_manager\data\flag_Manager_ansarallah_CO.paa";
							};
							class hezbola {
								name = "$STR_DOG_hezbola";
								value = "flag_manager\data\flag_Manager_hezbola_CO.paa";
							};
							class irgc {
								name = "$STR_DOG_irgc";
								value = "flag_manager\data\flag_Manager_irgc_CO.paa";
							};
							
							
							//History
							class armacoutryistoria {
								name = "$STR_DOG_HISTORY";
								value = "NULL";
							};
							class rusempire {
								name = "$STR_DOG_rusempire";
								value = "flag_manager\data\flag_Manager_rusempire_CO.paa";
							};
							class ussr {
								name = "$STR_DOG_ussr";
								value = "\UK3CB_Factions\addons\UK3CB_Factions_CW_SOV\Flag\cw_sov_flag_co.paa";
							};
							class ussrr {
								name = "$STR_DOG_Ussrr";
								value = "flag_manager\data\flag_Manager_ussr_CO.paa";
							};
							class victory {
								name = "$STR_DOG_Victory";
								value = "flag_manager\data\flag_Manager_victory_CO.paa";
							};
							class reih {
								name = "$STR_DOG_Reich";
								value = "flag_manager\data\flag_Manager_reih_CO.paa";
							};
							class naziitaly {
								name = "$STR_DOG_naziitaly";
								value = "flag_manager\data\flag_Manager_naziitaly_CO.paa";
							};
							class nazispain {
								name = "$STR_DOG_nazispain";
								value = "flag_manager\data\flag_Manager_nazispain_CO.paa";
							};
							class spainrepublic {
								name = "$STR_DOG_spainrepublic";
								value = "flag_manager\data\flag_Manager_spainrepublic_CO.paa";
							};
							class spainanarcho {
								name = "$STR_DOG_spainanarcho";
								value = "flag_manager\data\flag_Manager_spainanarcho_CO.paa";
							};
							
							
							//N America
							class armacoutryusa {
								name = "$STR_DOG_AMERICA";
								value = "NULL";
							};
							class us {
								name = "$STR_DOG_us";
								value = "\A3\Data_F\Flags\flag_us_CO.paa";
							};
							class Marine {
								name = "$STR_DOG_Marine";
								value = "flag_manager\data\flag_Manager_marine_CO.paa";
							};
							class Canada {
								name = "$STR_DOG_Canada";
								value = "flag_manager\data\flag_Manager_canada_CO.paa";
							};
							class Mexico {
								name = "$STR_DOG_Mexico";
								value = "flag_manager\data\flag_Manager_mexica_CO.paa";
							};
							class Cuban {
								name = "$STR_DOG_Cuban";
								value = "flag_manager\data\flag_Manager_kuba_new_CO.paa";
							};
							class Cuba {
								name = "$STR_DOG_Cuba";
								value = "flag_manager\data\flag_Manager_kuba_kastro_CO.paa";
							};
							
							
							//S America
							class armacoutryusas {
								name = "$STR_DOG_SAMERICA";
								value = "NULL";
							};
							class peru {
								name = "$STR_DOG_peru";
								value = "flag_manager\data\flag_Manager_peru_CO.paa";
							};
							class chile {
								name = "$STR_DOG_chile";
								value = "flag_manager\data\flag_Manager_chile_CO.paa";
							};
							class argentina {
								name = "$STR_DOG_argentina";
								value = "flag_manager\data\flag_Manager_argentina_CO.paa";
							};
							class venesuela {
								name = "$STR_DOG_venesuela";
								value = "flag_manager\data\flag_Manager_venesuela_CO.paa";
							};
							class colombia {
								name = "$STR_DOG_colombia";
								value = "flag_manager\data\flag_Manager_colombia_CO.paa";
							};
							class brazil {
								name = "$STR_DOG_brazil";
								value = "flag_manager\data\flag_Manager_brazil_CO.paa";
							};
							
							
							//Скандинавия
							class armacoutryscandinavia {
								name = "$STR_DOG_scandinavia";
								value = "NULL";
							};
							class finland {
								name = "$STR_DOG_finland";
								value = "flag_manager\data\flag_Manager_finland_CO.paa";
							};
							class norwegian {
								name = "$STR_DOG_norwegian";
								value = "flag_manager\data\flag_Manager_norwegian_CO.paa";
							};
							class sweden {
								name = "$STR_DOG_sweden";
								value = "flag_manager\data\flag_Manager_sweden_CO.paa";
							};
							class denmark {
								name = "$STR_DOG_denmark";
								value = "flag_manager\data\flag_Manager_denmark_CO.paa";
							};
							
							
							//австралия
							class armacoutryaus {
								name = "$STR_DOG_austr";
								value = "NULL";
							};
							class australia {
								name = "$STR_DOG_australia";
								value = "flag_manager\data\flag_Manager_australia_CO.paa";
							};
							class adfaustr {
								name = "$STR_DOG_adfaustr";
								value = "flag_manager\data\flag_Manager_adfaustr_CO.paa";
							};
							class airustr {
								name = "$STR_DOG_airustr";
								value = "flag_manager\data\flag_Manager_airustr_CO.paa";
							};
							class navalaustr {
								name = "$STR_DOG_navalaustr";
								value = "flag_manager\data\flag_Manager_kiwi_CO.paa";
							};
							
							
							//oceania
							class armacoutryocean {
								name = "$STR_DOG_ocaean";
								value = "NULL";
							};
							class newzealand {
								name = "$STR_DOG_newzealand";
								value = "flag_manager\data\flag_Manager_newzealand_CO.paa";
							};
							class kiwi {
								name = "$STR_DOG_kiwi";
								value = "flag_manager\data\flag_Manager_kiwi_CO.paa";
							};
							
							
							
							class armacoutryphilip {
								name = "$STR_DOG_philip";
								value = "NULL";
							};
							class philippines {
								name = "$STR_DOG_philippines";
								value = "flag_manager\data\flag_Manager_philippines_CO.paa";
							};
							class philippineswarflag {
								name = "$STR_DOG_philippineswarflag";
								value = "flag_manager\data\flag_Manager_philippineswarflag_CO.paa";
							};
							class philippinesaf {
								name = "$STR_DOG_philippinesaf";
								value = "flag_manager\data\flag_Manager_philippinesaf_CO.paa";
							};
							class philippinesairforce {
								name = "$STR_DOG_philippinesairforce";
								value = "flag_manager\data\flag_Manager_philippinesairforce_CO.paa";
							};
							class philippinesarmy {
								name = "$STR_DOG_philippinesarmy";
								value = "flag_manager\data\flag_Manager_philippinesarmy_CO.paa";
							};
							class philippinesnavy {
								name = "$STR_DOG_philippinesnavy";
								value = "flag_manager\data\flag_Manager_philippinesnavy_CO.paa";
							};
							class philippinesmarine {
								name = "$STR_DOG_philippinesmarine";
								value = "flag_manager\data\flag_Manager_philippinesmarine_CO.paa";
							};
							class philippinesnavaljack {
								name = "$STR_DOG_philippinesnavaljack";
								value = "flag_manager\data\flag_Manager_philippinesnavaljack_CO.paa";
							};
							class philippinesmoronat {
								name = "$STR_DOG_philippinesmoronat";
								value = "flag_manager\data\flag_Manager_philippinesmoronat_CO.paa";
							};
							class philippinesmoromuslim {
								name = "$STR_DOG_philippinesmoromuslim";
								value = "flag_manager\data\flag_Manager_philippinesmoromuslim_CO.paa";
							};
							class philippinesdemnat {
								name = "$STR_DOG_philippinesdemnat";
								value = "flag_manager\data\flag_Manager_philippinesdemnat_CO.paa";
							};
							class philippinescommunist {
								name = "$STR_DOG_philippinescommunist";
								value = "flag_manager\data\flag_Manager_philippinescommunist_CO.paa";
							};
							class philippinesworker {
								name = "$STR_DOG_philippinesworker";
								value = "flag_manager\data\flag_Manager_philippinesworker_CO.paa";
							};
							
							
							//Ugoslavia
							class armacoutryugo {
								name = "$STR_DOG_COUNTRY_UGO";
								value = "NULL";
							};
							class serb {
								name = "$STR_DOG_serb";
								value = "flag_manager\data\flag_Manager_serbiaa_CO.paa";
							};
							class yugos {
								name = "$STR_DOG_uog";
								value = "\rhssaf\addons\rhssaf_main\data\flags\flag_yugoslavia_co.paa";
							};
							class kraina {
								name = "$STR_DOG_serb_krain";
								value = "flag_manager\data\flag_Manager_serb_kraina_CO.paa";
							};
							class serbRep {
								name = "$STR_DOG_serb_rep";
								value = "flag_manager\data\flag_Manager_resp_srbska_CO.paa";
							};
							class croat {
								name = "$STR_DOG_croat";
								value = "flag_manager\data\flag_Manager_croatian_CO.paa";
							};
							class bosnia {
								name = "$STR_DOG_bosnia";
								value = "flag_manager\data\flag_Manager_bosnia_CO.paa";
							};
							class slovenia {
								name = "$STR_DOG_slovenia";
								value = "flag_manager\data\flag_Manager_slovenia_CO.paa";
							};
							class herzBos {
								name = "$STR_DOG_bosnia";
								value = "flag_manager\data\flag_Manager_BosnoXorvat_CO.paa";
							};
							class monten {
								name = "$STR_DOG_monten";
								value = "flag_manager\data\flag_Manager_chernogoria_Serbia_CO.paa";
							};
							class kosovo {
								name = "$STR_DOG_kosovo";
								value = "flag_manager\data\flag_Manager_kosovo_CO.paa";
							};
							class aok {
								name = "$STR_DOG_aok";
								value = "flag_manager\data\flag_Manager_aok_CO.paa";
							};
							
							
							//sci-fi
							class armacoutryscifi {
								name = "$STR_DOG_scifi";
								value = "NULL";
							};
							class eternal {
								name = "$STR_DOG_eternal";
								value = "flag_manager\data\flag_Manager_eternal_CO.paa";
							};
							
							
							//прочее
							class armacoutrytother {
								name = "$STR_DOG_other";
								value = "NULL";
							};
							class arstochka {
								name = "$STR_DOG_arstochka";
								value = "flag_manager\data\flag_Manager_arstochka_CO.paa";
							};
													
						};
					};
				};
			};
		};
	};
};