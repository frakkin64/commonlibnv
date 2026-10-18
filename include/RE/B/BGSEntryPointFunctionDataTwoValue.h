#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSEntryPointFunctionData.h"
#include "RE/B/BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA.h"

namespace RE
{
	class TESFile;

	class BGSEntryPointFunctionDataTwoValue :
		public BGSEntryPointFunctionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEntryPointFunctionDataTwoValue };
		static constexpr auto VTABLE{ VTABLE::BGSEntryPointFunctionDataTwoValue };

		// override (BGSEntryPointFunctionData)
		virtual ~BGSEntryPointFunctionDataTwoValue() = default;                          // 00
		virtual BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA GetType() override;  // 01
		virtual BGSEntryPointFunctionData* Duplicate() override;                         // 02
		virtual bool Compare(BGSEntryPointFunctionData* a_arg1) override;                // 03
		virtual void Save() override;                                                    // 04
		virtual bool Load(TESFile* a_arg1) override;                                     // 05

		BGSEntryPointFunctionDataTwoValue* ctor()
		{
			using func_t = BGSEntryPointFunctionDataTwoValue*(__thiscall*)(BGSEntryPointFunctionDataTwoValue*);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionDataTwoValue::ctor };
			return func(this);
		}

	public:
		// members
		float fValue1;  // 04
		float fValue2;  // 08
	};
	static_assert(sizeof(BGSEntryPointFunctionDataTwoValue) == 0xC);
}
