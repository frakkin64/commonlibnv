#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPerkEntry.h"
#include "RE/P/PERK_ENTRY_TYPE.h"
#include "RE/Q/QuestPerkEntryData.h"

namespace RE
{
	class Actor;
	class TESFile;
	class TESForm;

	class BGSQuestPerkEntry :
		public BGSPerkEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSQuestPerkEntry };
		static constexpr auto VTABLE{ VTABLE::BGSQuestPerkEntry };

		// override (BGSPerkEntry)
		virtual ~BGSQuestPerkEntry() = default;                             // 03
		virtual PERK_ENTRY_TYPE GetType() override;                         // 04
		virtual void InitItem(TESForm* apOwner) override;                   // 06
		virtual BGSPerkEntry* Duplicate() override;                         // 07
		virtual bool Compare(BGSPerkEntry* apCompare) override;             // 09
		virtual void Save() override;                                       // 0A
		virtual bool Load(TESFile* apFile) override;                        // 0B
		virtual void ApplyPerkEntry(Actor* a_arg1, bool a_arg2) override;   // 0C
		virtual void RemovePerkEntry(Actor* a_arg1, bool a_arg2) override;  // 0D

		BGSQuestPerkEntry* ctor()
		{
			using func_t = BGSQuestPerkEntry*(__thiscall*)(BGSQuestPerkEntry*);
			static REL::Relocation<func_t> func{ Offsets::BGSQuestPerkEntry::ctor };
			return func(this);
		}

	public:
		// members
		QuestPerkEntryData Data;  // 08
	};
	static_assert(sizeof(BGSQuestPerkEntry) == 0x10);
}
