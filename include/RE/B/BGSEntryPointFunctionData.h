#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class __declspec(novtable) BGSEntryPointFunctionData
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEntryPointFunctionData };
		static constexpr auto VTABLE{ VTABLE::BGSEntryPointFunctionData };

		using ENTRY_POINT_FUNCTION_DATA = BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA;

		// add
		virtual ~BGSEntryPointFunctionData() = default;                         // 00
		virtual BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA GetType();  // 01
		virtual BGSEntryPointFunctionData* Duplicate();                         // 02
		virtual bool Compare(BGSEntryPointFunctionData* a_arg1);                // 03
		virtual void Save();                                                    // 04
		virtual bool Load(TESFile* a_arg1);                                     // 05
		virtual void InitItem(TESForm* apOwner);                                // 06

		void StartFunctionData()
		{
			using func_t = decltype(&BGSEntryPointFunctionData::StartFunctionData);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionData::StartFunctionData };
			func(this);
		}

		BGSEntryPointFunctionData* ctor()
		{
			using func_t = BGSEntryPointFunctionData*(__thiscall*)(BGSEntryPointFunctionData*);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionData::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSEntryPointFunctionData) == 0x4);
}
