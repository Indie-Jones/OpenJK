/*
===========================================================================
Copyright (C) 1999 - 2005, Id Software, Inc.
Copyright (C) 2000 - 2013, Raven Software, Inc.
Copyright (C) 2001 - 2013, Activision, Inc.
Copyright (C) 2013 - 2015, OpenJK contributors

This file is part of the OpenJK source code.

OpenJK is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see <http://www.gnu.org/licenses/>.
===========================================================================
*/

#ifdef XCVAR_PROTO
	#define XCVAR_DEF( name, defVal, update, flags, announce ) extern vmCvar_t name;
#endif

#ifdef XCVAR_DECL
	#define XCVAR_DEF( name, defVal, update, flags, announce ) vmCvar_t name;
#endif

#ifdef XCVAR_LIST
	#define XCVAR_DEF( name, defVal, update, flags, announce ) { & name , #name , defVal , update , flags , announce },
#endif

XCVAR_DEF( bg_fighterAltControl,		"0",			NULL,				CVAR_SYSTEMINFO,								qtrue )
XCVAR_DEF( capturelimit,				"8",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( com_optvehtrace,				"0",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( d_altRoutes,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_asynchronousGroupAI,		"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_break,						"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_JediAI,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_noGroupAI,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_noroam,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_npcai,						"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_npcaiming,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_npcfreeze,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_noIntermissionWait,		"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( d_patched,					"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_perPlayerGhoul2,			"0",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_powerDuelPrint,			"0",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( d_projectileGhoul2Collision,	"1",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberAlwaysBoxTrace,		"0",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberBoxTraceSize,			"0",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberCombat,				"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_saberGhoul2Collision,		"1",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberInterpolate,			"0",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberKickTweak,			"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( d_saberSPStyleDamage,		"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( d_saberStanceDebug,			"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( d_siegeSeekerNPC,			"0",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( dedicated,					"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( developer,					"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( dmflags,						"0",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( duel_fraglimit,				"10",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( fraglimit,					"20",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( g_adaptRespawn,				"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_allowDuelSuicide,			"1",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_allowHighPingDuelist,		"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_allowNPC,					"1",			NULL,				CVAR_CHEAT,										qtrue )
XCVAR_DEF( g_allowTeamVote,				"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_allowVote,					"-1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_antiFakePlayer,			"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_armBreakage,				"0",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_austrian,					"0",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_autoMapCycle,				"0",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( g_banIPs,					"",				NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_charRestrictRGB,			"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_duelWeaponDisable,			"1",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qtrue )
XCVAR_DEF( g_debugAlloc,				"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_debugDamage,				"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_debugMelee,				"0",			NULL,				CVAR_SERVERINFO,								qtrue )
XCVAR_DEF( g_debugMove,					"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_debugSaberLocks,			"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( g_debugServerSkel,			"0",			NULL,				CVAR_CHEAT,										qfalse )
#ifdef _DEBUG
XCVAR_DEF( g_disableServerG2,			"0",			NULL,				CVAR_NONE,										qtrue )
#endif
XCVAR_DEF( g_dismember,					"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_doWarmup,					"0",			NULL,				CVAR_NONE,										qtrue )
//XCVAR_DEF( g_engineModifications,		"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_ff_objectives,				"0",			NULL,				CVAR_CHEAT|CVAR_NORESTART,						qtrue )
XCVAR_DEF( g_filterBan,					"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_forceBasedTeams,			"0",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qfalse )
XCVAR_DEF( g_forceClientUpdateRate,		"250",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_forceDodge,				"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_forcePowerDisable,			"0",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qtrue )
XCVAR_DEF( g_forceRegenTime,			"200",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_forceRespawn,				"60",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_fraglimitVoteCorrection,	"1",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_friendlyFire,				"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_friendlySaber,				"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_g2TraceLod,				"3",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_gametype,					"0",			NULL,				CVAR_SERVERINFO|CVAR_LATCH,						qfalse )
XCVAR_DEF( g_gravity,					"800",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_inactivity,				"0",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_jediVmerc,					"0",			NULL,				CVAR_SERVERINFO|CVAR_LATCH|CVAR_ARCHIVE,		qtrue )
XCVAR_DEF( g_knockback,					"1000",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_locationBasedDamage,		"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_log,						"games.log",	NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_logClientInfo,				"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_logSync,					"0",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_maxConnPerIP,				"3",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_maxForceRank,				"7",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qfalse )
XCVAR_DEF( g_maxGameClients,			"0",			NULL,				CVAR_SERVERINFO|CVAR_LATCH|CVAR_ARCHIVE,		qfalse )
XCVAR_DEF( g_maxHolocronCarry,			"3",			NULL,				CVAR_LATCH,										qfalse )
XCVAR_DEF( g_motd,						"",				NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_needpass,					"0",			NULL,				CVAR_SERVERINFO|CVAR_ROM,						qfalse )
XCVAR_DEF( g_noSpecMove,				"0",			NULL,				CVAR_SERVERINFO,								qtrue )
XCVAR_DEF( g_npcspskill,				"0",			NULL,				CVAR_ARCHIVE|CVAR_INTERNAL,						qfalse )
XCVAR_DEF( g_password,					"",				NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_powerDuelEndHealth,		"90",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_powerDuelStartHealth,		"150",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_privateDuel,				"1",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_randFix,					"1",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_restarted,					"0",			NULL,				CVAR_ROM,										qfalse )
XCVAR_DEF( g_saberBladeFaces,			"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_saberDamageScale,			"1",			NULL,				CVAR_ARCHIVE,									qtrue )
#ifdef DEBUG_SABER_BOX
XCVAR_DEF( g_saberDebugBox,				"0",			NULL,				CVAR_CHEAT,										qfalse )
#endif
#ifndef FINAL_BUILD
XCVAR_DEF( g_saberDebugPrint,			"0",			NULL,				CVAR_CHEAT,										qfalse )
#endif
XCVAR_DEF( g_saberDmgDelay_Idle,		"350",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberDmgDelay_Wound,		"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberDmgVelocityScale,		"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberLockFactor,			"2",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberLocking,				"1",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberLockRandomNess,		"2",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_saberRealisticCombat,		"0",			NULL,				CVAR_CHEAT,										qfalse )
XCVAR_DEF( g_saberRestrictForce,		"0",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_saberTraceSaberFirst,		"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberWallDamageScale,		"0.4",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_securityLog,				"1",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_showDuelHealths,			"0",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_siegeRespawn,				"20",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_siegeTeam1,				"none",			NULL,				CVAR_ARCHIVE|CVAR_SERVERINFO,					qfalse )
XCVAR_DEF( g_siegeTeam2,				"none",			NULL,				CVAR_ARCHIVE|CVAR_SERVERINFO,					qfalse )
XCVAR_DEF( g_siegeTeamSwitch,			"1",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE,					qfalse )
XCVAR_DEF( g_slowmoDuelEnd,				"0",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_smoothClients,				"1",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_spawnInvulnerability,		"3000",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_speed,						"250",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_statLog,					"0",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_statLogFile,				"statlog.log",	NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_stepSlideFix,				"1",			NULL,				CVAR_SERVERINFO,								qtrue )
XCVAR_DEF( g_synchronousClients,		"0",			NULL,				CVAR_SYSTEMINFO,								qfalse )
XCVAR_DEF( g_teamAutoJoin,				"0",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_teamForceBalance,			"0",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_timeouttospec,				"70",			NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_userinfoValidate,			"25165823",		NULL,				CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_useWhileThrowing,			"1",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( g_voteDelay,					"3000",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( g_warmup,					"20",			NULL,				CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_weaponDisable,				"0",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qtrue )
XCVAR_DEF( g_weaponRespawn,				"5",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( gamedate,					__DATE__,		NULL,				CVAR_ROM,										qfalse )
XCVAR_DEF( gamename,					GAMEVERSION,	NULL,				CVAR_SERVERINFO|CVAR_ROM,						qfalse )
XCVAR_DEF( pmove_fixed,					"0",			NULL,				CVAR_SYSTEMINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( pmove_float,					"0",			NULL,				CVAR_SYSTEMINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( pmove_msec,					"8",			NULL,				CVAR_SYSTEMINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( RMG,							"0",			NULL,				CVAR_NONE,										qtrue )
XCVAR_DEF( sv_cheats,					"1",			NULL,				CVAR_NONE,										qfalse )
XCVAR_DEF( sv_fps,						"40",			NULL,				CVAR_ARCHIVE|CVAR_SERVERINFO,					qtrue )
XCVAR_DEF( sv_maxclients,				"8",			NULL,				CVAR_SERVERINFO|CVAR_LATCH|CVAR_ARCHIVE,		qfalse )
XCVAR_DEF( timelimit,					"0",			NULL,				CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( zyk_max_force_power,			"100",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_blaster_pack_ammo,	"300",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_power_cell_ammo,		"300",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_metal_bolt_ammo,		"300",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_rocket_ammo,			"25",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_thermal_ammo,		"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_tripmine_ammo,		"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_detpack_ammo,		"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_blaster_pistol_damage,	"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_blaster_pistol_velocity,	"1600",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_e11_blaster_rifle_damage,	"20",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_e11_blaster_rifle_velocity,	"2300",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_disruptor_damage,	"40",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_disruptor_alt_damage,	"125",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_bowcaster_damage,	"50",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_bowcaster_velocity,	"1300",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_repeater_damage,	"14",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_repeater_velocity,	"1600",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_repeater_alt_damage,	"60",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_repeater_alt_velocity,	"1100",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_repeater_alt_splash_damage,	"60",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_demp2_damage,	"35",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_demp2_velocity,	"3500",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_demp2_alt_damage,	"12",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flechette_damage,	"15",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flechette_velocity,	"3500",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flechette_alt_damage,	"110",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flechette_alt_velocity,	"1800",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flechette_alt_splash_damage,	"110",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_rocket_damage,	"100",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_rocket_velocity,	"900",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_rocket_alt_velocity,	"450",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_rocket_splash_damage,	"100",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_concussion_damage,	"75",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_concussion_velocity,	"3000",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_concussion_splash_damage,	"40",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_concussion_alt_damage,	"25",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_stun_baton_damage,	"20",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_melee_left_hand_damage,	"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_melee_right_hand_damage,	"12",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_melee_kick_damage,	"10",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_thermal_damage,	"70",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_thermal_splash_damage,	"90",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_thermal_velocity,	"900",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_tripmine_damage,	"100",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_tripmine_splash_damage,	"105",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_detpack_damage,	"100",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_detpack_splash_damage,	"200",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_saber_throw_damage,	"30",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_magic_fist_damage,	"14",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_magic_fist_velocity,	"5000",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ammo_respawn_time,	"40",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_shield_respawn_time,	"20",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_health_respawn_time,	"30",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_holdable_item_respawn_time,	"60",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_quests,	"1",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_mini_quests,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_magic_fist_mp_cost,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_inner_area_mp_cost,	"2",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_healing_area_mp_cost,	"5",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_lightning_dome_mp_cost,	"15",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_magic_explosion_mp_cost,	"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ultra_strength_mp_cost,	"10",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_poison_mushrooms_mp_cost,	"18",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_water_splash_mp_cost,	"20",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ultra_flame_mp_cost,	"21",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_rockfall_mp_cost,	"18",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_dome_of_damage_mp_cost,	"22",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ice_stalagmite_mp_cost,	"20",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ice_boulder_mp_cost,	"20",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_hurricane_mp_cost,	"22",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_slow_motion_mp_cost,	"17",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ultra_resistance_mp_cost,	"10",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_sleeping_flowers_mp_cost,	"25",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_healing_water_mp_cost,	"23",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flame_burst_mp_cost,	"23",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_earthquake_mp_cost,	"18",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_magic_shield_mp_cost,	"25",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_blowing_wind_mp_cost,	"20",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ultra_speed_mp_cost,	"17",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_ultra_drain_mp_cost,	"35",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_immunity_power_mp_cost,	"30",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_chaos_power_mp_cost,	"40",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_time_power_mp_cost,	"35",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_acid_water_mp_cost, "21",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_shifting_sand_mp_cost, "18",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_tree_of_life_mp_cost,  "15",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_magic_drain_mp_cost, "16",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_universe_mp_cost_factor,	"1.5",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_inner_area,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_healing_area,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_lightning_dome,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_magic_explosion,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ultra_strength,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_poison_mushrooms,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_water_splash,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ultra_flame,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_rockfall,	"1",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_dome_of_damage,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ice_stalagmite,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ice_boulder,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_hurricane,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_slow_motion,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ultra_resistance,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_sleeping_flowers,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_healing_water,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_flame_burst,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_earthquake,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_magic_shield,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_blowing_wind,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ultra_speed,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_ultra_drain,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_immunity_power,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_chaos_power,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_time_power,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_light_power,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_dark_power,	"1",				NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_eternity_power,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_universe_power,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_resurrection_power,	"1",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_acid_water,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_shifting_sand,    "1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_tree_of_life,     "1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_enable_magic_drain,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_screen_message,	"",						NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_screen_message_timer,	"3000",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_rpg_mode,	"1",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_list_cmds_results_per_page,	"10",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_skill_counter,	"20000",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_start_race_timer,	"15000",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flame_thrower_cooldown,	"50",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_flame_thrower_damage,	"2",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_add_ammo_scale,	"0.5",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_rp_mode,		"0",						NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_saving_in_rp_mode,	"0",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_class_change,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_free_warrior,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_force_user,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_bounty_hunter,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_armored_soldier,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_monk,				"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_stealth_attacker,	"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_duelist,			"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_force_gunner,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_magic_master,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_force_tank,		"1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_chat_protection_timer,	"0",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_guardian_quest_timer,	"0",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_change_map_gametype_vote, "1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_rpg_in_other_gametypes, "1",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_vote_timer,	"0",						NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_adm_in_other_gametypes, "1",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_starting_shield, "25",					NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_saber_touch_damage, "1",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_duel_saber_touch_damage, "0",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_duel_saberDmgDelay_Idle,		"350",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_duel_saberDamageScale,		"1",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_duel_radius,					"1024",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_jetpack_command,		"1",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_jetpack_in_siege,		"1",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_server_empty_change_map_time, "0",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_sp_npc_fix,					"0",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_max_special_power_targets,	"16",		NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_scale_siege_damage,		"0.7",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_stun_baton_upgrade,		"1",	NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_emotes,					"1",	NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_allow_saber_command,		"2",			NULL,				CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( zyk_duelForcePowerDisable,	"0",			NULL,				CVAR_ARCHIVE|CVAR_LATCH,		qtrue )

#undef XCVAR_DEF
