#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CONDITION_ITEM_DATA.h"
#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	class TESForm;
	class TESObjectREFR;

	class TESConditionItem
	{
	public:
		SCRIPT_OUTPUT GetConditionFunction()
		{
			using func_t = decltype(&TESConditionItem::GetConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::GetConditionFunction };
			return func(this);
		}

		TESConditionItem* ctor()
		{
			using func_t = TESConditionItem*(__thiscall*)(TESConditionItem*);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::ctor };
			return func(this);
		}

		void SetDefaultDataForFunction(SCRIPT_OUTPUT aiFunc)
		{
			using func_t = decltype(&TESConditionItem::SetDefaultDataForFunction);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::SetDefaultDataForFunction };
			func(this, aiFunc);
		}

		float GetComparisonValue()
		{
			using func_t = decltype(&TESConditionItem::GetComparisonValue);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::GetComparisonValue };
			return func(this);
		}

		bool GetValueIsGlobal()
		{
			using func_t = decltype(&TESConditionItem::GetValueIsGlobal);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::GetValueIsGlobal };
			return func(this);
		}

		bool IsTrue(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef, bool& abDispositionFailure)
		{
			using func_t = decltype(&TESConditionItem::IsTrue);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::IsTrue };
			return func(this, apActionRef, apTargetRef, abDispositionFailure);
		}

		void Save()
		{
			using func_t = decltype(&TESConditionItem::Save);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESConditionItem::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESConditionItem::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		CONDITION_ITEM_DATA Data;  // 00
	};
	static_assert(sizeof(TESConditionItem) == 0x1C);
}
