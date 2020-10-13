#pragma once

#include "hash.hpp"

#include <cstdint>
#include <bitset>

enum class AmmoType: uint8_t {
	LightRounds,
	EnergyAmmo,
	ShotgunShells,
	HeavyRounds,
	SniperAmmo,
	SpecialHeavyRounds,
	SpecialShotgunShells,
	ExperimentalAmmo,
	SpecialLightAmmo,
};

enum class Rarity: uint8_t {
	Common,
	Rare,
	Epic,
	Legendary,
	Special,
};

enum class WeaponIndex: uint32_t {
	R301 = 0,
	SENTINEL = 1,
	BARE_HANDS = 17,
	ALTERNATOR = 57,
	RE45,
	DEVOTION,
	LONGBOW,
	EVA8_AUTO,
	FLATLINE,
	G7_SCOUT,
	HEMLOK,
	KRABER,
	MASTIFF,
	MOZAMBIQUE,
	PROWLER,
	PEACEKEEPER,
	R99,
	P2020,
	SPITFIRE,
	TRIPLE_TAKE,
	WINGMAN,
	HAVOC,
	LSTAR,
	CHARGE_RIFLE,
	VOLT,
};

enum class WeaponName: uint32_t {
	R301 = hash("mp_weapon_rspn101"),
	SENTINEL = hash("mp_weapon_sentinel"),
	BARE_HANDS = hash("mp_weapon_melee_survival"),
	ALTERNATOR = hash("mp_weapon_alternator_smg"),
	RE45 = hash("mp_weapon_autopistol"),
	DEVOTION = hash("mp_weapon_esaw"),
	LONGBOW = hash("mp_weapon_dmr"),
	EVA8_AUTO = hash("mp_weapon_shotgun"),
	FLATLINE = hash("mp_weapon_vinson"),
	G7_SCOUT = hash("mp_weapon_g2"),
	HEMLOK = hash("mp_weapon_hemlok"),
	KRABER = hash("mp_weapon_sniper"),
	MASTIFF = hash("mp_weapon_mastiff"),
	MOZAMBIQUE = hash("mp_weapon_shotgun_pistol"),
	PROWLER = hash("mp_weapon_pdw"),
	PEACEKEEPER = hash("mp_weapon_energy_shotgun"),
	R99 = hash("mp_weapon_r97"),
	P2020 = hash("mp_weapon_semipistol"),
	SPITFIRE = hash("mp_weapon_lmg"),
	TRIPLE_TAKE = hash("mp_weapon_doubletake"),
	WINGMAN = hash("mp_weapon_wingman"),
	HAVOC = hash("mp_weapon_energy_ar"),
	LSTAR = hash("mp_weapon_lstar"),
	CHARGE_RIFLE = hash("mp_weapon_defender"),
	VOLT = hash("mp_weapon_volt_smg"),
};

enum class ItemID : uint32_t {
	GOLD_KRABER = 1,
	MASTIFF = 2,
	GOLD_MASTIFF = 3,
	LSTAR = 4,
	GOLD_LSTAR = 5,
	HAVOC = 6,
	GOLD_HAVOC = 7,
	DEVOTION = 8,
	GOLD_DEVOTION = 9,
	TRIPLE_TAKE = 10,
	GOLD_TRIPLE_TAKE = 11,
	FLATLINE = 12,
	GOLD_FLATLINE = 13,
	// = 14,
	// = 15,
	HEMLOK = 16,
	GOLD_HEMLOK = 17,
	// = 18,
	// = 19,
	G7_SCOUT = 20,
	GOLD_G7_SCOUT = 21,
	ALTERNATOR = 22,
	GOLD_ALTERNATOR = 23,
	// = 24,
	// = 25,
	GOLD_R99 = 26,
	// = 27,
	// = 28,
	// = 29,
	PROWLER = 30,
	GOLD_PROWLER = 31,
	VOLT = 32,
	GOLD_VOLT = 33,
	LONGBOW = 34,
	GOLD_LONGBOW = 35,
	CHARGE_RIFLE = 36,
	GOLD_CHARGE_RIFLE = 37,
	SPITFIRE = 38,
	GOLD_SPITFIRE = 39,
	R301 = 40,
	GOLD_R301 = 41,
	// = 42,
	// = 43,
	EVA8_AUTO = 44,
	GOLD_EVA8_AUTO = 45,
	// = 46,
	// = 47,
	// = 48,
	GOLD_PEACEKEEPER = 49,
	MOZAMBIQUE = 50,
	GOLD_MOZAMBIQUE = 51,
	WINGMAN = 52,
	GOLD_WINGMAN = 53,
	// = 54,
	// = 55,
	P2020 = 56,
	GOLD_P2020 = 57,
	RE45 = 58,
	GOLD_RE45 = 59,
	SENTINEL = 60,
	GOLD_SENTINEL = 61,

	LIGHT_ROUNDS = 62,
	ENERGY_AMMO,
	SHOTGUN_SHELLS,
	HEAVY_ROUNDS,
	SNIPER_AMMO,

	ULTIMATE_ACCELERANT,
	PHOENIX_KIT,
	MED_KIT,
	SYRINGE,
	SHIELD_BATTERY,
	SHIELD_CELL,

	HELMET_LV1,
	HELMET_LV2,
	HELMET_LV3,
	HELMET_LV4,
	BODY_ARMOR_LV1,
	BODY_ARMOR_LV2,
	BODY_ARMOR_LV3,
	BODY_ARMOR_LV4,
	EVO_SHIELD_LV0,
	EVO_SHIELD_LV1,
	EVO_SHIELD_LV2,
	EVO_SHIELD_LV3,
	EVO_SHIELD_LV4,
	KNOCKDOWN_SHIELD_LV1,
	KNOCKDOWN_SHIELD_LV2,
	KNOCKDOWN_SHIELD_LV3,
	KNOCKDOWN_SHIELD_LV4,
	BACKPACK_LV1,
	BACKPACK_LV2,
	BACKPACK_LV3,
	BACKPACK_LV4,

	THERMITE_GRENADE,
	FRAG_GRENADE,
	ARC_STAR,

	HCOG_CLASSIC,
	HCOG_BRUISER,
	HOLO,
	VARIABLE_HOLO,
	DIGITAL_THREAT,
	HCOG_RANGER,
	VARIABLE_AOG,
	SNIPER,
	VARIABLE_SNIPER,
	DIGITAL_SNIPER_THREAT,

	BARREL_STABILIZER_LV1,
	BARREL_STABILIZER_LV2,
	BARREL_STABILIZER_LV3,
	BARREL_STABILIZER_LV4,
	LIGHT_MAGAZINE_LV1,
	LIGHT_MAGAZINE_LV2,
	LIGHT_MAGAZINE_LV3,
	HEAVY_MAGAZINE_LV1,
	HEAVY_MAGAZINE_LV2,
	HEAVY_MAGAZINE_LV3,
	ENERGY_MAGAZINE_LV1,
	ENERGY_MAGAZINE_LV2,
	ENERGY_MAGAZINE_LV3,
	SNIPER_MAGAZINE_LV1,
	SNIPER_MAGAZINE_LV2,
	SNIPER_MAGAZINE_LV3,
	SHOTGUN_BOLT_LV1,
	SHOTGUN_BOLT_LV2,
	SHOTGUN_BOLT_LV3,
	STANDARD_STOCK_LV1,
	STANDARD_STOCK_LV2,
	STANDARD_STOCK_LV3,
	SNIPER_STOCK_LV1,
	SNIPER_STOCK_LV2,
	SNIPER_STOCK_LV3,

	TURBOCHARGER,
	SELECTFIRE_RECEIVER,
	SKULLPIERCER_RIFLING,
	HAMMERPOINT_ROUNDS,
	DOUBLE_TAP_TRIGGER,
	VAULT_KEY,
	MOBILE_RESPAWN_BEACON,
	TREASURE_PACK = 141,
	GRAVITY_LIFT_KEYCARD = 144,
};

using ItemSet = std::bitset<144>;

// Returns the set of attachment items compatible with this weapon.
ItemSet weapon_set(WeaponName weapon_name);
