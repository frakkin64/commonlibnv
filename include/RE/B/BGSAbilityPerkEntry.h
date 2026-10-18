#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPerkEntry.h"
#include "RE/P/PERK_ENTRY_TYPE.h"

namespace RE
{
	class Actor;
	class SpellItem;
	class TESFile;
	class TESForm;

	class BGSAbilityPerkEntry :
		public BGSPerkEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAbilityPerkEntry };
		static constexpr auto VTABLE{ VTABLE::BGSAbilityPerkEntry };

		// override (BGSPerkEntry)
		virtual ~BGSAbilityPerkEntry() = default;                           // 03
		virtual PERK_ENTRY_TYPE GetType() override;                         // 04
		virtual void InitItem(TESForm* apOwner) override;                   // 06
		virtual BGSPerkEntry* Duplicate() override;                         // 07
		virtual bool Compare(BGSPerkEntry* apCompare) override;             // 09
		virtual void Save() override;                                       // 0A
		virtual bool Load(TESFile* apFile) override;                        // 0B
		virtual void ApplyPerkEntry(Actor* a_arg1, bool a_arg2) override;   // 0C
		virtual void RemovePerkEntry(Actor* a_arg1, bool a_arg2) override;  // 0D

		BGSAbilityPerkEntry* ctor()
		{
			using func_t = BGSAbilityPerkEntry*(__thiscall*)(BGSAbilityPerkEntry*);
			static REL::Relocation<func_t> func{ Offsets::BGSAbilityPerkEntry::ctor };
			return func(this);
		}

	public:
		// members
		SpellItem* pAbility;  // 08
	};
	static_assert(sizeof(BGSAbilityPerkEntry) == 0xC);
}
