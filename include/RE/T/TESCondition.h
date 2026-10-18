#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESConditionItem;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESCondition
	{
	public:
		TESCondition* ctor()
		{
			using func_t = TESCondition*(__thiscall*)(TESCondition*);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESCondition*);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::dtor };
			func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESCondition::Save);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::Save };
			func(this);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&TESCondition::Load);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::Load };
			func(this, apFile);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESCondition::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::InitItem };
			func(this, apOwner);
		}

		void Copy(TESCondition* apCopy, TESForm* apOwner)
		{
			using func_t = decltype(&TESCondition::Copy);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::Copy };
			func(this, apCopy, apOwner);
		}

		bool Compare(TESCondition* apCompare)
		{
			using func_t = decltype(&TESCondition::Compare);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::Compare };
			return func(this, apCompare);
		}

		bool IsTrue(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef)
		{
			using func_t = bool (TESCondition::*)(TESObjectREFR*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::IsTrue };
			return func(this, apActionRef, apTargetRef);
		}

		bool IsTrue(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef, bool& abDispositionFailure, bool abEssentialPropertiesOnly)
		{
			using func_t = bool (TESCondition::*)(TESObjectREFR*, TESObjectREFR*, bool&, bool);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::IsTrue_1 };
			return func(this, apActionRef, apTargetRef, abDispositionFailure, abEssentialPropertiesOnly);
		}

		void ClearAllConditionItems()
		{
			using func_t = decltype(&TESCondition::ClearAllConditionItems);
			static REL::Relocation<func_t> func{ Offsets::TESCondition::ClearAllConditionItems };
			func(this);
		}

	public:
		// members
		BSSimpleList<TESConditionItem*> listConditions;  // 00
	};
	static_assert(sizeof(TESCondition) == 0x8);
}
