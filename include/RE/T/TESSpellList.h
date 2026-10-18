#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class SpellItem;
	class TESForm;
	class TESLevSpell;

	class TESSpellList :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESSpellList };
		static constexpr auto VTABLE{ VTABLE::TESSpellList };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags);                    // 04
		virtual void SaveGame(std::uint32_t aiFlags);                                // 05
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags);  // 06

		TESSpellList* ctor()
		{
			using func_t = TESSpellList*(__thiscall*)(TESSpellList*);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESSpellList*);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::dtor };
			func(this);
		}

		BSSimpleList<TESLevSpell*>* GetLeveledSpellList()
		{
			using func_t = decltype(&TESSpellList::GetLeveledSpellList);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::GetLeveledSpellList };
			return func(this);
		}

		bool AddSpell(TESLevSpell* apSpellIn)
		{
			using func_t = bool (TESSpellList::*)(TESLevSpell*);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::AddSpell };
			return func(this, apSpellIn);
		}

		bool AddSpell(TESForm* apSpellIn)
		{
			using func_t = bool (TESSpellList::*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::AddSpell_1 };
			return func(this, apSpellIn);
		}

		void Save()
		{
			using func_t = decltype(&TESSpellList::Save);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESSpellList::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::InitItem };
			func(this, apOwner);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (TESSpellList::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (TESSpellList::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESSpellList::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BSSimpleList<SpellItem*>   spellList;         // 04
		BSSimpleList<TESLevSpell*> leveledSpellList;  // 0C
	};
}
