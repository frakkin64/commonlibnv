#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/W/WEAPONHITBEHAVIOR.h"
#include "RE/W/WEAPON_MOD_EFFECT.h"
#include "RE/W/WEAPON_RUMBLE_PATTERN.h"

namespace RE
{
	class BGSProjectile;

	class OBJ_WEAP
	{
	public:
		void Endian()
		{
			using func_t = decltype(&OBJ_WEAP::Endian);
			static REL::Relocation<func_t> func{ Offsets::OBJ_WEAP::Endian };
			func(this);
		}

	public:
		// members
		char                  eType;                            // 00
		std::uint8_t          pad01[0x3];                       // 01
		float                 fSpeed;                           // 04
		float                 fReach;                           // 08
		std::uint8_t          cFlags;                           // 0C
		std::uint8_t          cHandGripAnim;                    // 0D
		std::uint8_t          cAmmoPerShot;                     // 0E
		std::uint8_t          cReloadAnim;                      // 0F
		float                 fMinSpread;                       // 10
		float                 fSpread;                          // 14
		float                 fDrift;                           // 18
		float                 fIronFOV;                         // 1C
		std::uint8_t          cConditionLevel;                  // 20
		std::uint8_t          pad21[0x3];                       // 21
		BGSProjectile*        pProjectile;                      // 24
		std::uint8_t          cVATSToHitChance;                 // 28
		std::uint8_t          cAttackAnim;                      // 29
		std::uint8_t          cNumProjectiles;                  // 2A
		std::uint8_t          cEmbeddedConditionValue;          // 2B
		float                 fMinRange;                        // 2C
		float                 fMaxRange;                        // 30
		WEAPONHITBEHAVIOR     eHitBehavior;                     // 34
		std::uint32_t         iFlagsEx;                         // 38
		float                 fAttackMult;                      // 3C
		float                 fShotsPerSec;                     // 40
		float                 fActionPoints;                    // 44
		float                 fFiringRumbleLeftMotorStrength;   // 48
		float                 fFiringRumbleRightMotorStrength;  // 4C
		float                 fFiringRumbleDuration;            // 50
		float                 fDamageToWeaponMult;              // 54
		float                 fAnimShotsPerSecond;              // 58
		float                 fAnimReloadTime;                  // 5C
		float                 fAnimJamTime;                     // 60
		float                 fAimArc;                          // 64
		ActorValue_Index      eSkill;                           // 68
		WEAPON_RUMBLE_PATTERN eRumblePattern;                   // 6C
		float                 fRumbleWavelength;                // 70
		float                 fLimbDamageMult;                  // 74
		ActorValue_Index      eResistance;                      // 78
		float                 fIronSightUseMult;                // 7C
		float                 fSemiAutomaticFireDelayMin;       // 80
		float                 fSemiAutomaticFireDelayMax;       // 84
		float                 fCookTimer;                       // 88
		WEAPON_MOD_EFFECT     eModActionOne;                    // 8C
		WEAPON_MOD_EFFECT     eModActionTwo;                    // 90
		WEAPON_MOD_EFFECT     eModActionThree;                  // 94
		float                 fModActionOneValue;               // 98
		float                 fModActionTwoValue;               // 9C
		float                 fModActionThreeValue;             // A0
		std::uint8_t          cPowerAttackOverrideAnim;         // A4
		std::uint8_t          padA5[0x3];                       // A5
		std::uint32_t         iStrengthRequirement;             // A8
		char                  iModReloadClipAnimation;          // AC
		char                  iModFireAnimation;                // AD
		std::uint16_t         padAE;                            // AE
		float                 fAmmoRegenRate;                   // B0
		float                 fKillImpulse;                     // B4
		float                 fModActionOneValueTwo;            // B8
		float                 fModActionTwoValueTwo;            // BC
		float                 fModActionThreeValueTwo;          // C0
		float                 fKillImpulseDistance;             // C4
		std::uint32_t         iSkillRequirement;                // C8
	};
	static_assert(sizeof(OBJ_WEAP) == 0xCC);
}
