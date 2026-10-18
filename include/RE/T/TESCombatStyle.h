#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AdvancedCombatStyleData.h"
#include "RE/C/CombatStyleData.h"
#include "RE/S/SimpleCombatStyleData.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class TESCombatStyle :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCombatStyle };
		static constexpr auto VTABLE{ VTABLE::TESCombatStyle };

		enum class COMBAT_STYLE_FLAGS : std::int32_t
		{
			kUSE_PA_PERCENT_CHANCE = 0x1,
			kMELEE_ALERT_ALLOWED = 0x2,
			kPERSONAL_SURVIVAL_FLEE = 0x4,
			kUSE_CLUSTERING = 0x8,
			kIGNORE_THREATS = 0x10,
			kEXPLOSIVE_WEAPONS_IGNORE_SELF = 0x20,
			kEXPLOSIVE_WEAPONS_IGNORE_GROUP = 0x40,
			kEXPLOSIVE_WEAPONS_IGNORE_SPECTATORS = 0x80,
			kCANNOT_USE_STEALTHBOY = 0x100,
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCSTY_ID };

		// override (TESForm)
		virtual ~TESCombatStyle() = default;             // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		CombatStyleData* GetData()
		{
			using func_t = decltype(&TESCombatStyle::GetData);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetData };
			return func(this);
		}

		static TESCombatStyle* GetDefaultCombatStyle()
		{
			using func_t = decltype(&TESCombatStyle::GetDefaultCombatStyle);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetDefaultCombatStyle };
			return func();
		}

		TESCombatStyle* ctor()
		{
			using func_t = TESCombatStyle*(__thiscall*)(TESCombatStyle*);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::ctor };
			return func(this);
		}

		char GetPowerAttackChance()
		{
			using func_t = decltype(&TESCombatStyle::GetPowerAttackChance);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetPowerAttackChance };
			return func(this);
		}

		AdvancedCombatStyleData* GetAdvancedData()
		{
			using func_t = decltype(&TESCombatStyle::GetAdvancedData);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetAdvancedData };
			return func(this);
		}

		bool IsFlagSet(TESCombatStyle::COMBAT_STYLE_FLAGS aeFlag)
		{
			using func_t = decltype(&TESCombatStyle::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::IsFlagSet };
			return func(this, aeFlag);
		}

		bool GetIgnoreThreats()
		{
			using func_t = decltype(&TESCombatStyle::GetIgnoreThreats);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetIgnoreThreats };
			return func(this);
		}

		float GetRandomCoverWaitTimer()
		{
			using func_t = decltype(&TESCombatStyle::GetRandomCoverWaitTimer);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetRandomCoverWaitTimer };
			return func(this);
		}

		float GetRandomCoverFireTimer()
		{
			using func_t = decltype(&TESCombatStyle::GetRandomCoverFireTimer);
			static REL::Relocation<func_t> func{ Offsets::TESCombatStyle::GetRandomCoverFireTimer };
			return func(this);
		}

	public:
		// members
		SimpleCombatStyleData   SimpleData;    // 18
		CombatStyleData         Data;          // 58
		AdvancedCombatStyleData AdvancedData;  // B4
	};
	static_assert(sizeof(TESCombatStyle) == 0x108);
}
