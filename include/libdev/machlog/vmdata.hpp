/*
	V M D A T A . H P P

	Contains voicemail classes data
*/
#ifndef _MACHLOG_VOICEMAIL_DATA
#define _MACHLOG_VOICEMAIL_DATA

#include "base/base.hpp"
#include "base/persist.hpp"

enum VoiceMailType
{
	VM_FULL_FUNCTION,
	VM_PART_FUNCTION,
	VM_TASK_AFFIRMATION,
	VM_SELECTION_AFFIRMATION,
	VM_WAIT_UNTIL_NOTHING_PLAYING
};

enum VoiceMailID
{
	VID_GRUNT_SELF_DESTRUCT,
	VID_GRUNT_BUILT0,
	VID_GRUNT_BUILT1,
	VID_GRUNT_DESTROYED,
	VID_GRUNT_NEAR_DEATH0,
	VID_GRUNT_NEAR_DEATH1,
	VID_GRUNT_NEAR_DEATH2,
	VID_GRUNT_NEAR_DEATH3,
	VID_GRUNT_CHANGED_RACE0,
	VID_GRUNT_CHANGED_RACE1,
	VID_GRUNT_VIRUS_INFECTED,
	VID_GRUNT_DAMAGED,
	VID_GRUNT_TASKED0,
	VID_GRUNT_TASKED1,
	VID_GRUNT_TASKED2,
	VID_GRUNT_TASKED3,
	VID_GRUNT_MOVING0,
	VID_GRUNT_MOVING1,
	VID_GRUNT_MOVING2,
	VID_GRUNT_MOVING3,
	VID_GRUNT_SELECTED0,
	VID_GRUNT_SELECTED1,
	VID_GRUNT_SELECTED2,
	VID_GRUNT_TARGET_ENEMY0,
	VID_GRUNT_TARGET_ENEMY1,
	VID_GRUNT_TARGET_ENEMY2,
	VID_GRUNT_TARGET_ENEMY3,
	VID_GRUNT_TARGET_ENEMY4,
	VID_GRUNT_RECYCLE,
	
	VID_ASSASSIN_SELF_DESTRUCT,
	VID_ASSASSIN_BUILT,
	VID_ASSASSIN_DESTROYED,
	VID_ASSASSIN_NEAR_DEATH0,
	VID_ASSASSIN_NEAR_DEATH1,
	VID_ASSASSIN_CHANGED_RACE0,
	VID_ASSASSIN_CHANGED_RACE1,
	VID_ASSASSIN_VIRUS_INFECTED,
	VID_ASSASSIN_DAMAGED,
	VID_ASSASSIN_TASKED0,
	VID_ASSASSIN_TASKED1,
	VID_ASSASSIN_MOVING0,
	VID_ASSASSIN_MOVING1,
	VID_ASSASSIN_SELECTED0,
	VID_ASSASSIN_SELECTED1,
	VID_ASSASSIN_SELECTED2,
	VID_ASSASSIN_TARGET_ENEMY0,
	VID_ASSASSIN_TARGET_ENEMY1,
	VID_ASSASSIN_TARGET_ENEMY2,
	VID_ASSASSIN_RECYCLE,
	
	VID_KNIGHT_TARGET_ENEMY0,
	VID_KNIGHT_TARGET_ENEMY1,
	VID_KNIGHT_BUILT,
	VID_KNIGHT_NEAR_DEATH,
	VID_KNIGHT_DAMAGED0,
	VID_KNIGHT_DAMAGED1,
	VID_KNIGHT_MOVING0,
	VID_KNIGHT_MOVING1,
	VID_KNIGHT_MOVING2,
	VID_KNIGHT_MOVING3,	
	VID_KNIGHT_SELF_DESTRUCT,
	VID_KNIGHT_SELECTED0,
	VID_KNIGHT_SELECTED1,
	VID_KNIGHT_TASKED0,
	VID_KNIGHT_TASKED1,
	VID_KNIGHT_CHANGED_RACE,		
	VID_KNIGHT_RECYCLE,
	
	VID_BALLISTA_SELF_DESTRUCT,
	VID_BALLISTA_CRUSADER_BUILT,
	VID_BALLISTA_ERADICATOR_BUILT,
	VID_BALLISTA_GOLIATH_BUILT,
	VID_BALLISTA_DESTROYED,
	VID_BALLISTA_NEAR_DEATH,
	VID_BALLISTA_CHANGED_RACE0,
	VID_BALLISTA_CHANGED_RACE1,
	VID_BALLISTA_VIRUS_INFECTED,
	VID_BALLISTA_DAMAGED,
	VID_BALLISTA_TASKED0,
	VID_BALLISTA_TASKED1,
	VID_BALLISTA_TASKED2,
	VID_BALLISTA_TASKED3,
	VID_BALLISTA_MOVING0,
	VID_BALLISTA_MOVING1,
	VID_BALLISTA_MOVING2,
	VID_BALLISTA_SELECTED0,
	VID_BALLISTA_SELECTED1,
	VID_BALLISTA_TARGET_ENEMY0,
	VID_BALLISTA_TARGET_ENEMY1,
	VID_BALLISTA_TARGET_ENEMY2,
	VID_BALLISTA_TARGET_ENEMY3,
	VID_BALLISTA_RECYCLE,

	VID_BALLISTA_FIRE_VORTEX,
	
	VID_NINJA_SELF_DESTRUCT,
	VID_NINJA_BUILT,
	VID_NINJA_DESTROYED,
	VID_NINJA_NEAR_DEATH0,
	VID_NINJA_CHANGED_RACE,
	VID_NINJA_DAMAGED,
	VID_NINJA_NEAR_DEATH1,
	VID_NINJA_TASKED0,
	VID_NINJA_TASKED1,
	VID_NINJA_MOVING0,
	VID_NINJA_MOVING1,
	VID_NINJA_MOVING2,
	VID_NINJA_SELECTED0,
	VID_NINJA_SELECTED1,
	VID_NINJA_SELECTED2,
	VID_NINJA_TARGET_ENEMY0,
	VID_NINJA_TARGET_ENEMY1,
	VID_NINJA_TARGET_ENEMY2,
	VID_NINJA_TARGET_ENEMY3,
	VID_NINJA_RECYCLE,
	
	VID_NINJA_SMASH0,
	VID_NINJA_SMASH1,
	
	
	// Boss ( Actually Bee and Wasp )
	
	VID_BOSS_TARGET_ENEMY0,
	VID_BOSS_TARGET_ENEMY1,
	VID_BOSS_NEAR_DEATH0,
	VID_BOSS_NEAR_DEATH1,
	VID_BOSS_BEE_BUILT,
	VID_BOSS_DAMAGED0,
	VID_BOSS_DAMAGED1,
	VID_BOSS_MOVING0,
	VID_BOSS_MOVING1,
	VID_BOSS_MOVING2,
	VID_BOSS_MOVING3,
	VID_BOSS_SELF_DESTRUCT,
	VID_BOSS_SELECTED0,
	VID_BOSS_SELECTED1,
	VID_BOSS_TASKED0,
	VID_BOSS_TASKED1,
	VID_BOSS_TASKED2,
	VID_BOSS_TASKED3,
	VID_BOSS_CHANGED_RACE,	
	VID_BOSS_WASP_BUILT,
	
	// Overseer ( Actually Commander )
	
	VID_OVERSEER_SELF_DESTRUCT,
	VID_OVERSEER_BUILT,
	VID_OVERSEER_NEAR_DEATH,
	VID_OVERSEER_CHANGED_RACE0,
	VID_OVERSEER_CHANGED_RACE1,
	VID_OVERSEER_DAMAGED,
	VID_OVERSEER_TASKED,
	VID_OVERSEER_MOVING,
	VID_OVERSEER_SELECTED0,
	VID_OVERSEER_SELECTED1,
	VID_OVERSEER_TARGET_ENEMY0,
	VID_OVERSEER_TARGET_ENEMY1,
	VID_OVERSEER_HEAL_TARGET,
	VID_OVERSEER_HEALING_COMPLETE,
	
	// Commander ( Actually Warlord )
	
	VID_COMMANDER_TARGET_ENEMY0,
	VID_COMMANDER_TARGET_ENEMY1,
	VID_COMMANDER_BUILT,
	VID_COMMANDER_HEALING_COMPLETE,
	VID_COMMANDER_NEAR_DEATH,
	VID_COMMANDER_HEAL_TARGET,
	VID_COMMANDER_DAMAGED,
	VID_COMMANDER_MOVING0,
	VID_COMMANDER_MOVING1,	
	VID_COMMANDER_SELF_DESTRUCT,
	VID_COMMANDER_SELECTED0,
	VID_COMMANDER_SELECTED1,
	VID_COMMANDER_TASKED0,
	VID_COMMANDER_TASKED1,
	VID_COMMANDER_CHANGED_RACE,
	VID_COMMANDER_TREACHERY_TARGET,
	
	// Technician
	
	VID_TECHNICIAN_SELF_DESTRUCT,
	VID_TECHNICIAN_BUILT,
	VID_TECHNICIAN_DESTROYED,
	VID_TECHNICIAN_NEAR_DEATH,
	VID_TECHNICIAN_CHANGED_RACE0,
	VID_TECHNICIAN_CHANGED_RACE1,
	VID_TECHNICIAN_VIRUS_INFECTED,
	VID_TECHNICIAN_DAMAGED,
	VID_TECHNICIAN_TASKED0,
	VID_TECHNICIAN_TASKED1,
	VID_TECHNICIAN_MOVING0,
	VID_TECHNICIAN_MOVING1,
	VID_TECHNICIAN_MOVING2,
	VID_TECHNICIAN_SELECTED0,
	VID_TECHNICIAN_SELECTED1,
	VID_TECHNICIAN_RECYCLE,
	
	VID_TECHNICIAN_RESEARCH_COMPLETE,
	VID_TECHNICIAN_RESEARCHING_NEXT,
	VID_TECHNICIAN_RESEARCHING,
	VID_TECHNICIAN_RESEARCHING_TOUGH_ONE,
	
	VID_TECHNICIAN_ENGINEER_BUILT,
	VID_TECHNICIAN_BRAINBOX_BUILT,
	
	VID_GEO_SELF_DESTRUCT,
	VID_GEO_BUILT,
	VID_GEO_DESTROYED,
	VID_GEO_NEAR_DEATH,
	VID_GEO_CHANGED_RACE0,
	VID_GEO_CHANGED_RACE1,
	VID_GEO_VIRUS_INFECTED,
	VID_GEO_DAMAGED,
	VID_GEO_TASKED0,
	VID_GEO_TASKED1,
	VID_GEO_MOVING0,
	VID_GEO_MOVING1,
	VID_GEO_SELECTED0,
	VID_GEO_SELECTED1,
	VID_GEO_RECYCLE,
	
	VID_GEO_LOCATING,
	VID_GEO_MINERAL_LOCATED,
	VID_GEO_SEARCH_COMPLETE,
	
	VID_SPY_SELF_DESTRUCT,
	VID_SPY_BUILT,
	VID_SPY_DESTROYED,
	VID_SPY_NEAR_DEATH,
	VID_SPY_CHANGED_RACE,
	VID_SPY_VIRUS_INFECTED,
	VID_SPY_DAMAGED,
	VID_SPY_TASKED0,
	VID_SPY_MOVING0,
	VID_SPY_MOVING1,
	VID_SPY_SELECTED0,
	VID_SPY_RECYCLE,
	
	VID_SPY_NO_MORE_MINES,
	VID_SPY_RESEARCH_DOWNLOADED,
	VID_SPY_NEW_DOWNLOAD,
	VID_SPY_TASKED_LAY_MINE,
	VID_SPY_TASKED_INFLITRATE,
	
	VID_DOZER_SELF_DESTRUCT,
	VID_DOZER_BUILT,
	VID_DOZER_DESTROYED,
	VID_DOZER_NEAR_DEATH,
	VID_DOZER_CHANGED_RACE0,
	VID_DOZER_CHANGED_RACE1,
	VID_DOZER_VIRUS_INFECTED,
	VID_DOZER_DAMAGED,
	VID_DOZER_TASKED0,
	VID_DOZER_TASKED1,
	VID_DOZER_TASKED2,
	VID_DOZER_MOVING0,
	VID_DOZER_MOVING1,
	VID_DOZER_MOVING2,
	VID_DOZER_SELECTED0,
	VID_DOZER_SELECTED1,
	VID_DOZER_RECYCLE,
		
	VID_DOZER_BUILDING_COMPLETE,
	VID_DOZER_AWAITING_NEW_JOB,
	VID_DOZER_MOVING_TO_NEXT,
	VID_DOZER_MOVE_TO_SITE,
	VID_DOZER_BUILDING_CAPTURED,
	VID_DOZER_BUILDING_DECONSTRUCTED,
	VID_DOZER_BUILDING_REPAIRED,
	
	VID_BUILDER_BUILT,
	VID_BEHEMOTH_BUILT,	
	VID_TITAN_BUILT,	
		
	// Transporter (includes Scavenger)
	
	VID_RESOURCE_CARRIER_ALTERNATIVE_DESTINATION,
	VID_RESOURCE_CARRIER_NEAR_DEATH,
	VID_RESOURCE_CARRIER_DAMAGED,
	VID_RESOURCE_CARRIER_ROUTE_FAILURE0,
	VID_RESOURCE_CARRIER_ROUTE_FAILURE1,
	VID_RESOURCE_CARRIER_MOVING0,
	VID_RESOURCE_CARRIER_MOVING1,
	VID_RESOURCE_CARRIER_MOVING2,
	VID_RESOURCE_CARRIER_SCAVENGER_BUILT,
	VID_RESOURCE_CARRIER_SCAVENGING,
	VID_RESOURCE_CARRIER_SELF_DESTRUCT,
	VID_RESOURCE_CARRIER_SELECTED0,
	VID_RESOURCE_CARRIER_SELECTED1,
	VID_RESOURCE_CARRIER_TASKED0,
	VID_RESOURCE_CARRIER_TASKED1,
	VID_RESOURCE_CARRIER_BUILT,
	VID_RESOURCE_CARRIER_TRANSPORTING,
	VID_RESOURCE_CARRIER_CHANGED_RACE0,
	VID_RESOURCE_CARRIER_CHANGED_RACE1,
	
	///////////

	
	VID_APC_SELF_DESTRUCT,
	VID_APC_BUILT,
	VID_APC_DESTROYED,
	VID_APC_NEAR_DEATH,
	VID_APC_CHANGED_RACE0,
	VID_APC_CHANGED_RACE1,
	VID_APC_VIRUS_INFECTED,
	VID_APC_DAMAGED,
	VID_APC_TASKED0,
	VID_APC_TASKED1,
	VID_APC_TASKED2,
	VID_APC_MOVING0,
	VID_APC_MOVING1,
	VID_APC_MOVING2,
	VID_APC_SELECTED0,
	VID_APC_SELECTED1,
	VID_APC_RECYCLE,
	
	VID_APC_DEPLOYMENT_COMPLETE,
	VID_APC_UNIT_BOARDED,
	VID_APC_MOVING_TO_DEPLOY_POINT,

	// ==================================== POD ======================================
	
	VID_POD_NIGHTFALL_APPROACHING,
	VID_POD_DAYBREAK_APPROACHING,
	VID_POD_BEACON_DESTROYED,
	VID_POD_UPLINK_DESTROYED,
	VID_POD_POD_ATTACKED,			// 05
	VID_POD_POD_CRITICAL_DAMAGE,
	VID_POD_ION_CANNON_ACQUIRED,
	VID_POD_ION_CANNON_CHARGED,
	VID_POD_BUILDING_DESTROYED,
	VID_POD_BUILDING_CRITICAL,		// 10
	VID_POD_CONSTRUCTION_ATTACKED,
	VID_POD_MINERALS_EXHAUSTED,
	VID_POD_MINE_INOPERABLE,	
	VID_POD_NO_BMUS_LEFT,	
	VID_POD_BMUS_LOW,				// 15
	VID_POD_NEED_FURTHER_SMELTERS,
	VID_POD_NEED_AT_LEAST_ONE_SMELTER,	
	VID_POD_ENEMY_NUKE_LAUNCH,
	VID_POD_ENEMY_ION_CANNON,	
	VID_POD_NUKE_READY,				//20
	VID_POD_NO_TECHNICIANS,
	VID_POD_POD_DESTROYED,	
	VID_POD_MINE_SWITCHED_SOURCE,
	VID_POD_ENEMY_NUKE_ONLINE,		
	VID_POD_ENEMY_ION_CANNON_ONLINE,//25
	VID_POD_REINFORCEMENTS_ONLINE,
	VID_POD_TURRET_ATTACKED,
	VID_POD_INSUFFICIENT_CASH_FOR_NUKE,
	VID_POD_NEW_CONSTRUCTIONS,
	// one extra pod mail below

		
	
    VID_1O1A,
    VID_1O1B,
    VID_1O1C,
    VID_1O1D,
    VID_1O1E,
    VID_1O1F,
    VID_1O1G,
	
	VID_RESFAC_01,
	VID_RESFAC_02,
	VID_RESFAC_03,
	VID_RESFAC_04,
	VID_RESFAC_05,
	
	VID_GUNS_01,	
	VID_GUNS_02,
	VID_GUNS_03,
	VID_GUNS_04,
	VID_GUNS_05,	
	// The VID_GUNS_06 entry is below...
	
	// extra pod mail	
	VID_POD_INSUFFICIENT_BMUS,
	
	VID_5O1_01,
	VID_5O1_02,
	
	VID_INTERFERENCE_0,
	VID_INTERFERENCE_1,
	VID_INTERFERENCE_2,
	VID_INTERFERENCE_3,
	VID_INTERFERENCE_4,	
	VID_INTERFERENCE_5,	
	
	VID_PCS_09,
	VID_PCS_10,
	VID_PCS_11,
	VID_PCS_12,
	VID_PCS_13,
	VID_PCS_14,
	
	VID_PCS_01,
	VID_PCS_02,
	VID_PCS_03,
	VID_PCS_04,
	VID_PCS_05,
	VID_PCS_06,
	VID_PCS_07,
	VID_PCS_08,

	VID_GUNS_06,	
	
	VID_N_MAIL_IDS
	
};

PER_ENUM_PERSISTENT( VoiceMailType );
PER_ENUM_PERSISTENT( VoiceMailID );

#endif