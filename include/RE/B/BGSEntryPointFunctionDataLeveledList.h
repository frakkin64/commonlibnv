#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSEntryPointFunctionData.h"
#include "RE/B/BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESLevItem;

	class BGSEntryPointFunctionDataLeveledList :
		public BGSEntryPointFunctionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEntryPointFunctionDataLeveledList };
		static constexpr auto VTABLE{ VTABLE::BGSEntryPointFunctionDataLeveledList };

		// override (BGSEntryPointFunctionData)
		virtual ~BGSEntryPointFunctionDataLeveledList() = default;                       // 00
		virtual BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA GetType() override;  // 01
		virtual BGSEntryPointFunctionData* Duplicate() override;                         // 02
		virtual bool Compare(BGSEntryPointFunctionData* a_arg1) override;                // 03
		virtual void Save() override;                                                    // 04
		virtual bool Load(TESFile* a_arg1) override;                                     // 05
		virtual void InitItem(TESForm* apOwner) override;                                // 06

		BGSEntryPointFunctionDataLeveledList* ctor()
		{
			using func_t = BGSEntryPointFunctionDataLeveledList*(__thiscall*)(BGSEntryPointFunctionDataLeveledList*);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionDataLeveledList::ctor };
			return func(this);
		}

	public:
		// members
		TESLevItem* pLeveledList;  // 04
	};
	static_assert(sizeof(BGSEntryPointFunctionDataLeveledList) == 0x8);
}
