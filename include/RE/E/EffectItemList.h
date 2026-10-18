#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleList.h"
#include "RE/E/EffectArchetypes_ArchetypeID.h"
#include "RE/M/MagicSystem_Range.h"
#include "RE/S/SkillLevel_Value.h"

namespace RE
{
	class Actor;
	class EffectItem;
	class TESFile;

	class __declspec(novtable) EffectItemList :
		public BSSimpleList<EffectItem*>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::EffectItemList };
		static constexpr auto VTABLE{ VTABLE::EffectItemList };

		// add
		virtual bool IsMedicine();                 // 00
		virtual bool IsFood();                     // 01
		virtual float GetCost(Actor* apActor);     // 02
		virtual std::int32_t GetMaxEffectCount();  // 03
		virtual SkillLevel_Value GetLevel();       // 04

		EffectItemList* ctor()
		{
			using func_t = EffectItemList*(__thiscall*)(EffectItemList*);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&EffectItemList::Save);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::Save };
			func(this);
		}

		void Load(TESFile* apFile, char const* apSpellName)
		{
			using func_t = decltype(&EffectItemList::Load);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::Load };
			func(this, apFile, apSpellName);
		}

		void Copy(EffectItemList* apCopy)
		{
			using func_t = decltype(&EffectItemList::Copy);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::Copy };
			func(this, apCopy);
		}

		float GetEffectScore(EffectArchetypes_ArchetypeID aeArchetypeID, MagicSystem_Range aeRange, ActorValue_Index aiActorValue)
		{
			using func_t = decltype(&EffectItemList::GetEffectScore);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::GetEffectScore };
			return func(this, aeArchetypeID, aeRange, aiActorValue);
		}

		void AddEffect(EffectItem* apEffect)
		{
			using func_t = decltype(&EffectItemList::AddEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::AddEffect };
			func(this, apEffect);
		}

		bool IsHostile()
		{
			using func_t = decltype(&EffectItemList::IsHostile);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::IsHostile };
			return func(this);
		}

		bool CanBePoison()
		{
			using func_t = decltype(&EffectItemList::CanBePoison);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::CanBePoison };
			return func(this);
		}

		EffectItem* GetUsageMonitorEffect()
		{
			using func_t = decltype(&EffectItemList::GetUsageMonitorEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::GetUsageMonitorEffect };
			return func(this);
		}

		EffectItem* GetCostliestEffect(MagicSystem_Range aeRange, bool abAreaOnly)
		{
			using func_t = decltype(&EffectItemList::GetCostliestEffect);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::GetCostliestEffect };
			return func(this, aeRange, abAreaOnly);
		}

		ActorValue_Index GetAssociatedSkill()
		{
			using func_t = decltype(&EffectItemList::GetAssociatedSkill);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::GetAssociatedSkill };
			return func(this);
		}

		void BuildMenuString(char* astrResult, std::uint32_t auiResultLen)
		{
			using func_t = decltype(&EffectItemList::BuildMenuString);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::BuildMenuString };
			func(this, astrResult, auiResultLen);
		}

		std::uint8_t GetEffectItemIndex(EffectItem* apEffect)
		{
			using func_t = decltype(&EffectItemList::GetEffectItemIndex);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::GetEffectItemIndex };
			return func(this, apEffect);
		}

		EffectItem* GetEffectItemByIndex(std::uint8_t aiIndex)
		{
			using func_t = decltype(&EffectItemList::GetEffectItemByIndex);
			static REL::Relocation<func_t> func{ Offsets::EffectItemList::GetEffectItemByIndex };
			return func(this, aiIndex);
		}

	public:
		// members
		std::int32_t iHostileCount;  // 0C
	};
}
