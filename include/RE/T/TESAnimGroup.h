#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_ACTION.h"
#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/A/ANIM_GROUP_MOVE_ENUM.h"
#include "RE/A/ANIM_GROUP_WEAPON_ENUM.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSAnimGroupSequence;
	class GROUP_SOUND;
	class NiControllerSequence;
	class TESObjectREFR;

	class TESAnimGroup :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAnimGroup };
		static constexpr auto VTABLE{ VTABLE::TESAnimGroup };

		// override (NiRefObject)
		virtual ~TESAnimGroup() = default;  // 00

		bool IsAimAction()
		{
			using func_t = bool (TESAnimGroup::*)();
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsAimAction };
			return func(this);
		}

		bool IsAttackAction()
		{
			using func_t = bool (TESAnimGroup::*)();
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsAttackAction };
			return func(this);
		}

		static std::uint16_t AnimGroup(ANIM_GROUP_MOVE_ENUM aeMove, ANIM_GROUP_WEAPON_ENUM aeWeapon, ANIM_GROUP_ENUM aeType, bool abPowerArmor)
		{
			using func_t = decltype(&TESAnimGroup::AnimGroup);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::AnimGroup };
			return func(aeMove, aeWeapon, aeType, abPowerArmor);
		}

		static ANIM_GROUP_WEAPON_ENUM GetWeapon(std::uint16_t asType)
		{
			using func_t = decltype(&TESAnimGroup::GetWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::GetWeapon };
			return func(asType);
		}

		ANIM_GROUP_ENUM GetType()
		{
			using func_t = ANIM_GROUP_ENUM (TESAnimGroup::*)();
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::GetType };
			return func(this);
		}

		static ANIM_GROUP_ENUM GetType(std::uint16_t asType)
		{
			using func_t = ANIM_GROUP_ENUM(__cdecl*)(std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::GetType_1 };
			return func(asType);
		}

		void SetType(std::uint16_t asType)
		{
			using func_t = decltype(&TESAnimGroup::SetType);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::SetType };
			func(this, asType);
		}

		static bool IsAttackAction(std::uint16_t asGroup)
		{
			using func_t = bool(__cdecl*)(std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsAttackAction_1 };
			return func(asGroup);
		}

		static bool IsAttackSpinAction(std::uint16_t asGroup)
		{
			using func_t = decltype(&TESAnimGroup::IsAttackSpinAction);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsAttackSpinAction };
			return func(asGroup);
		}

		static bool IsAimAction(std::uint16_t asGroup)
		{
			using func_t = bool(__cdecl*)(std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsAimAction_1 };
			return func(asGroup);
		}

		static bool IsPowerAttackAction(std::uint16_t asGroup)
		{
			using func_t = decltype(&TESAnimGroup::IsPowerAttackAction);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsPowerAttackAction };
			return func(asGroup);
		}

		static bool IsIronSightsAction(std::uint16_t asGroup)
		{
			using func_t = bool(__cdecl*)(std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsIronSightsAction };
			return func(asGroup);
		}

		static bool IsIronSightsAction(ANIM_GROUP_ENUM aeType)
		{
			using func_t = bool(__cdecl*)(ANIM_GROUP_ENUM);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsIronSightsAction_1 };
			return func(aeType);
		}

		void PlaySounds(TESObjectREFR* apRef, float afStartTime, float afStopTime, BSAnimGroupSequence* apSequence)
		{
			using func_t = decltype(&TESAnimGroup::PlaySounds);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::PlaySounds };
			func(this, apRef, afStartTime, afStopTime, apSequence);
		}

		float GetTime(ANIM_GROUP_ACTION groupAction)
		{
			using func_t = decltype(&TESAnimGroup::GetTime);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::GetTime };
			return func(this, groupAction);
		}

		static void ParseAnimGroupFilename(char const* apModelName, ANIM_GROUP_MOVE_ENUM& aeMove, ANIM_GROUP_WEAPON_ENUM& aeWeapon, bool& abPowerArmor)
		{
			using func_t = decltype(&TESAnimGroup::ParseAnimGroupFilename);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::ParseAnimGroupFilename };
			func(apModelName, aeMove, aeWeapon, abPowerArmor);
		}

		static TESAnimGroup* LoadAnimGroup(NiControllerSequence* apSequence, char const* apModelName)
		{
			using func_t = decltype(&TESAnimGroup::LoadAnimGroup);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::LoadAnimGroup };
			return func(apSequence, apModelName);
		}

		float GetSpeed()
		{
			using func_t = decltype(&TESAnimGroup::GetSpeed);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::GetSpeed };
			return func(this);
		}

		bool IsJumpingLoopAnim()
		{
			using func_t = decltype(&TESAnimGroup::IsJumpingLoopAnim);
			static REL::Relocation<func_t> func{ Offsets::TESAnimGroup::IsJumpingLoopAnim };
			return func(this);
		}

	public:
		// members
		std::uint8_t  cSectionPriority[8];  // 08
		std::uint16_t sType;                // 10
		std::uint16_t pad12;                // 12
		std::uint32_t frameCount;           // 14
		float*        times;                // 18
		NiPoint3      speed;                // 1C
		char          cMorphKey;            // 28
		std::uint8_t  cBlendFrames;         // 29
		std::uint8_t  cBlendInFrames;       // 2A
		std::uint8_t  cBlendOutFrames;      // 2B
		std::uint8_t  cDecal;               // 2C
		std::uint8_t  pad2D[0x3];           // 2D
		const char*   pParentName;          // 30
		std::uint32_t soundCount;           // 34
		GROUP_SOUND*  sounds;               // 38
	};
	static_assert(sizeof(TESAnimGroup) == 0x3C);
}
