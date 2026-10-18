#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PERK_ENTRY_TYPE.h"

namespace RE
{
	class Actor;
	class TESFile;
	class TESForm;

	class __declspec(novtable) BGSPerkEntry
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSPerkEntry };
		static constexpr auto VTABLE{ VTABLE::BGSPerkEntry };

		// add
		virtual bool CheckConditionFilters(std::uint32_t aiNumFilterForms, TESForm** apFilterForms);  // 00
		virtual std::uint8_t GetFunction();                                                           // 01
		virtual void* GetFunctionData();                                                              // 02
		virtual ~BGSPerkEntry() = default;                                                            // 03
		virtual PERK_ENTRY_TYPE GetType();                                                            // 04
		virtual void ClearData();                                                                     // 05
		virtual void InitItem(TESForm* apOwner);                                                      // 06
		virtual BGSPerkEntry* Duplicate();                                                            // 07
		virtual void Copy(BGSPerkEntry* apCopy);                                                      // 08
		virtual bool Compare(BGSPerkEntry* apCompare);                                                // 09
		virtual void Save();                                                                          // 0A
		virtual bool Load(TESFile* apFile);                                                           // 0B
		virtual void ApplyPerkEntry(Actor* a_arg1, bool a_arg2);                                      // 0C
		virtual void RemovePerkEntry(Actor* a_arg1, bool a_arg2);                                     // 0D

		BGSPerkEntry* ctor()
		{
			using func_t = BGSPerkEntry*(__thiscall*)(BGSPerkEntry*);
			static REL::Relocation<func_t> func{ Offsets::BGSPerkEntry::ctor };
			return func(this);
		}

		void StartPerkEntry(PERK_ENTRY_TYPE aePerkEntryType)
		{
			using func_t = decltype(&BGSPerkEntry::StartPerkEntry);
			static REL::Relocation<func_t> func{ Offsets::BGSPerkEntry::StartPerkEntry };
			func(this, aePerkEntryType);
		}

		void FinishPerkEntry()
		{
			using func_t = decltype(&BGSPerkEntry::FinishPerkEntry);
			static REL::Relocation<func_t> func{ Offsets::BGSPerkEntry::FinishPerkEntry };
			func(this);
		}

	public:
		// members
		std::uint8_t  cRank;      // 04
		std::uint8_t  cPriority;  // 05
		std::uint16_t pad06;      // 06
	};
	static_assert(sizeof(BGSPerkEntry) == 0x8);
}
