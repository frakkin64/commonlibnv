#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class ActorValueOwner;
	class AlchemyItem;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class ExtraDataList;
	class ExtraLeveledItem;
	class InventoryChanges;
	class Script;
	class ScriptLocals;
	class TESBoundObject;
	class TESForm;
	class TESObjectREFR;

	class ItemChange
	{
	public:
		TESBoundObject* GetContainerObject()
		{
			using func_t = decltype(&ItemChange::GetContainerObject);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetContainerObject };
			return func(this);
		}

		ItemChange* ctor(TESBoundObject* apObject, std::int32_t aiNumber)
		{
			using func_t = ItemChange*(__thiscall*)(ItemChange*, TESBoundObject*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::ctor };
			return func(this, apObject, aiNumber);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ItemChange*);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::dtor };
			func(this);
		}

		ItemChange* ctor(ItemChange const& apCopy)
		{
			using func_t = ItemChange*(__thiscall*)(ItemChange*, ItemChange const&);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::ctor_1 };
			return func(this, apCopy);
		}

		void DeleteAllExtra()
		{
			using func_t = decltype(&ItemChange::DeleteAllExtra);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::DeleteAllExtra };
			func(this);
		}

		bool HasLeveledExtra()
		{
			using func_t = decltype(&ItemChange::HasLeveledExtra);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::HasLeveledExtra };
			return func(this);
		}

		ExtraLeveledItem* RemoveLeveledItemExtra()
		{
			using func_t = decltype(&ItemChange::RemoveLeveledItemExtra);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::RemoveLeveledItemExtra };
			return func(this);
		}

		float GetItemHealth(bool abPercentage)
		{
			using func_t = decltype(&ItemChange::GetItemHealth);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetItemHealth };
			return func(this, abPercentage);
		}

		void SetItemHealth(float a_arg1, InventoryChanges* a_arg2, ExtraDataList* pchange, bool apextra)
		{
			using func_t = decltype(&ItemChange::SetItemHealth);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::SetItemHealth };
			func(this, a_arg1, a_arg2, pchange, apextra);
		}

		float GetItemCharge()
		{
			using func_t = decltype(&ItemChange::GetItemCharge);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetItemCharge };
			return func(this);
		}

		float GetItemValue()
		{
			using func_t = decltype(&ItemChange::GetItemValue);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetItemValue };
			return func(this);
		}

		TESForm* GetItemOwnership()
		{
			using func_t = decltype(&ItemChange::GetItemOwnership);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetItemOwnership };
			return func(this);
		}

		std::uint8_t GetModSlots()
		{
			using func_t = decltype(&ItemChange::GetModSlots);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetModSlots };
			return func(this);
		}

		bool HasModEffectActive(std::uint8_t eEffect, float& fValue)
		{
			using func_t = bool (ItemChange::*)(std::uint8_t, float&);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::HasModEffectActive };
			return func(this, eEffect, fValue);
		}

		bool HasModEffectActive(std::uint8_t eEffect)
		{
			using func_t = bool (ItemChange::*)(std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::HasModEffectActive_1 };
			return func(this, eEffect);
		}

		AlchemyItem* GetPoison()
		{
			using func_t = decltype(&ItemChange::GetPoison);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetPoison };
			return func(this);
		}

		bool GetWorn(bool ableft)
		{
			using func_t = decltype(&ItemChange::GetWorn);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetWorn };
			return func(this, ableft);
		}

		Script* GetScript()
		{
			using func_t = decltype(&ItemChange::GetScript);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetScript };
			return func(this);
		}

		ScriptLocals* GetScriptLocals()
		{
			using func_t = decltype(&ItemChange::GetScriptLocals);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetScriptLocals };
			return func(this);
		}

		float GetModifiedAttackDamage(ActorValueOwner* apActor, float afDamageMultiplier, bool abIgnoreExplosion)
		{
			using func_t = decltype(&ItemChange::GetModifiedAttackDamage);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetModifiedAttackDamage };
			return func(this, apActor, afDamageMultiplier, abIgnoreExplosion);
		}

		float GetModifiedArmorRating(ActorValueOwner* apActor)
		{
			using func_t = decltype(&ItemChange::GetModifiedArmorRating);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetModifiedArmorRating };
			return func(this, apActor);
		}

		float GetModifiedDamageThreshold(ActorValueOwner* apActor)
		{
			using func_t = decltype(&ItemChange::GetModifiedDamageThreshold);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetModifiedDamageThreshold };
			return func(this, apActor);
		}

		char const* GetIconOne(TESObjectREFR* apRef)
		{
			using func_t = decltype(&ItemChange::GetIconOne);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetIconOne };
			return func(this, apRef);
		}

		char const* GetFullName()
		{
			using func_t = decltype(&ItemChange::GetFullName);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetFullName };
			return func(this);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&ItemChange::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = void (ItemChange::*)();
			static REL::Relocation<func_t> func{ Offsets::ItemChange::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (ItemChange::*)();
			static REL::Relocation<func_t> func{ Offsets::ItemChange::LoadGame };
			func(this);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (ItemChange::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ItemChange::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		ItemChange* ctor()
		{
			using func_t = ItemChange*(__thiscall*)(ItemChange*);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::ctor_2 };
			return func(this);
		}

	protected:
		std::int32_t GetExtraTotalCount(bool abWornIgnore)
		{
			using func_t = decltype(&ItemChange::GetExtraTotalCount);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetExtraTotalCount };
			return func(this, abWornIgnore);
		}

		std::int32_t GetExtraTotalDefaultCount()
		{
			using func_t = decltype(&ItemChange::GetExtraTotalDefaultCount);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetExtraTotalDefaultCount };
			return func(this);
		}

		std::int32_t GetAmountNonDefaultExtra()
		{
			using func_t = decltype(&ItemChange::GetAmountNonDefaultExtra);
			static REL::Relocation<func_t> func{ Offsets::ItemChange::GetAmountNonDefaultExtra };
			return func(this);
		}

	public:
		// members
		BSSimpleList<ExtraDataList*>* pExtraObjectList;  // 00
		std::int32_t                  iNumber;           // 04
		TESBoundObject*               pContainerObj;     // 08
	};
	static_assert(sizeof(ItemChange) == 0xC);
}
