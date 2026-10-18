#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/E/EffectItemData.h"
#include "RE/M/MagicSystem_Range.h"
#include "RE/T/TESCondition.h"

namespace RE
{
	class Actor;
	class EffectSetting;
	class TESFile;

	class EffectItem
	{
	public:
		EffectItem* ctor(EffectSetting* apEffectSetting)
		{
			using func_t = EffectItem*(__thiscall*)(EffectItem*, EffectSetting*);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::ctor };
			return func(this, apEffectSetting);
		}

		EffectItem* ctor(EffectItem* apEffect)
		{
			using func_t = EffectItem*(__thiscall*)(EffectItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::ctor_1 };
			return func(this, apEffect);
		}

		ActorValue_Index GetActorValueIndex()
		{
			using func_t = decltype(&EffectItem::GetActorValueIndex);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::GetActorValueIndex };
			return func(this);
		}

		bool IsActorValueUsed()
		{
			using func_t = decltype(&EffectItem::IsActorValueUsed);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::IsActorValueUsed };
			return func(this);
		}

		float GetRawCost()
		{
			using func_t = decltype(&EffectItem::GetRawCost);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::GetRawCost };
			return func(this);
		}

		float GetCost(Actor* apActor)
		{
			using func_t = decltype(&EffectItem::GetCost);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::GetCost };
			return func(this, apActor);
		}

		void Save()
		{
			using func_t = decltype(&EffectItem::Save);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::Save };
			func(this);
		}

		bool Load(TESFile* apFile, char const* apSpellName)
		{
			using func_t = decltype(&EffectItem::Load);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::Load };
			return func(this, apFile, apSpellName);
		}

		void Copy(EffectItem* apCopy)
		{
			using func_t = decltype(&EffectItem::Copy);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::Copy };
			func(this, apCopy);
		}

		bool Compare(EffectItem* apCompare)
		{
			using func_t = decltype(&EffectItem::Compare);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::Compare };
			return func(this, apCompare);
		}

		std::int32_t GetMagnitude()
		{
			using func_t = decltype(&EffectItem::GetMagnitude);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::GetMagnitude };
			return func(this);
		}

		std::int32_t GetArea()
		{
			using func_t = decltype(&EffectItem::GetArea);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::GetArea };
			return func(this);
		}

		std::int32_t GetDuration()
		{
			using func_t = decltype(&EffectItem::GetDuration);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::GetDuration };
			return func(this);
		}

		bool SetRange(MagicSystem_Range aiRange)
		{
			using func_t = decltype(&EffectItem::SetRange);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::SetRange };
			return func(this, aiRange);
		}

		bool IsHostile()
		{
			using func_t = decltype(&EffectItem::IsHostile);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::IsHostile };
			return func(this);
		}

		bool IsUsageMonitorEffect()
		{
			using func_t = decltype(&EffectItem::IsUsageMonitorEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::IsUsageMonitorEffect };
			return func(this);
		}

		void SetConditions(TESCondition* apCondition)
		{
			using func_t = decltype(&EffectItem::SetConditions);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::SetConditions };
			func(this, apCondition);
		}

		bool IsDisabled()
		{
			using func_t = decltype(&EffectItem::IsDisabled);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::IsDisabled };
			return func(this);
		}

		bool IsScriptEffect()
		{
			using func_t = decltype(&EffectItem::IsScriptEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectItem::IsScriptEffect };
			return func(this);
		}

	public:
		// members
		EffectItemData data;            // 00
		EffectSetting* pEffectSetting;  // 14
		float          fRawCost;        // 18
		TESCondition   Conditions;      // 1C
	};
	static_assert(sizeof(EffectItem) == 0x24);
}
