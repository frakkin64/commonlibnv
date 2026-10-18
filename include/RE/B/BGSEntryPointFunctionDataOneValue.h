#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSEntryPointFunctionData.h"
#include "RE/B/BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA.h"

namespace RE
{
	class TESFile;

	class BGSEntryPointFunctionDataOneValue :
		public BGSEntryPointFunctionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEntryPointFunctionDataOneValue };
		static constexpr auto VTABLE{ VTABLE::BGSEntryPointFunctionDataOneValue };

		// override (BGSEntryPointFunctionData)
		virtual ~BGSEntryPointFunctionDataOneValue() = default;                          // 00
		virtual BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA GetType() override;  // 01
		virtual BGSEntryPointFunctionData* Duplicate() override;                         // 02
		virtual bool Compare(BGSEntryPointFunctionData* a_arg1) override;                // 03
		virtual void Save() override;                                                    // 04
		virtual bool Load(TESFile* a_arg1) override;                                     // 05

		BGSEntryPointFunctionDataOneValue* ctor()
		{
			using func_t = BGSEntryPointFunctionDataOneValue*(__thiscall*)(BGSEntryPointFunctionDataOneValue*);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionDataOneValue::ctor };
			return func(this);
		}

	public:
		// members
		float fValue;  // 04
	};
	static_assert(sizeof(BGSEntryPointFunctionDataOneValue) == 0x8);
}
