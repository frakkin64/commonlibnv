#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSPerkEntry.h"
#include "RE/E/EntryPointPerkEntryData.h"
#include "RE/P/PERK_ENTRY_TYPE.h"

namespace RE
{
	class Actor;
	class BGSEntryPointFunctionData;
	class TESCondition;
	class TESFile;
	class TESForm;

	class BGSEntryPointPerkEntry :
		public BGSPerkEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEntryPointPerkEntry };
		static constexpr auto VTABLE{ VTABLE::BGSEntryPointPerkEntry };

		// override (BGSPerkEntry)
		virtual bool CheckConditionFilters(std::uint32_t aiNumFilterForms, TESForm** apFilterForms) override;  // 00
		virtual std::uint8_t GetFunction() override;                                                           // 01
		virtual void* GetFunctionData() override;                                                              // 02
		virtual ~BGSEntryPointPerkEntry() = default;                                                           // 03
		virtual PERK_ENTRY_TYPE GetType() override;                                                            // 04
		virtual void ClearData() override;                                                                     // 05
		virtual void InitItem(TESForm* apOwner) override;                                                      // 06
		virtual BGSPerkEntry* Duplicate() override;                                                            // 07
		virtual bool Compare(BGSPerkEntry* apCompare) override;                                                // 09
		virtual void Save() override;                                                                          // 0A
		virtual bool Load(TESFile* apFile) override;                                                           // 0B
		virtual void ApplyPerkEntry(Actor* a_arg1, bool a_arg2) override;                                      // 0C
		virtual void RemovePerkEntry(Actor* a_arg1, bool a_arg2) override;                                     // 0D

		BGSEntryPointPerkEntry* ctor()
		{
			using func_t = BGSEntryPointPerkEntry*(__thiscall*)(BGSEntryPointPerkEntry*);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointPerkEntry::ctor };
			return func(this);
		}

	public:
		// members
		EntryPointPerkEntryData    Data;              // 08
		std::uint8_t               pad0B;             // 0B
		BGSEntryPointFunctionData* pFunctionData;     // 0C
		TESCondition*              pConditionsArray;  // 10
	};
	static_assert(sizeof(BGSEntryPointPerkEntry) == 0x14);
}
