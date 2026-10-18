#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSEntryPointFunctionData.h"
#include "RE/B/BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA.h"
#include "RE/S/Script.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class BGSEntryPointFunctionDataActivateChoice :
		public BGSEntryPointFunctionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEntryPointFunctionDataActivateChoice };
		static constexpr auto VTABLE{ VTABLE::BGSEntryPointFunctionDataActivateChoice };

		// override (BGSEntryPointFunctionData)
		virtual ~BGSEntryPointFunctionDataActivateChoice() = default;                    // 00
		virtual BGSEntryPointFunctionData_ENTRY_POINT_FUNCTION_DATA GetType() override;  // 01
		virtual BGSEntryPointFunctionData* Duplicate() override;                         // 02
		virtual bool Compare(BGSEntryPointFunctionData* a_arg1) override;                // 03
		virtual void Save() override;                                                    // 04
		virtual bool Load(TESFile* a_arg1) override;                                     // 05
		virtual void InitItem(TESForm* apOwner) override;                                // 06

		BGSEntryPointFunctionDataActivateChoice* ctor()
		{
			using func_t = BGSEntryPointFunctionDataActivateChoice*(__thiscall*)(BGSEntryPointFunctionDataActivateChoice*);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionDataActivateChoice::ctor };
			return func(this);
		}

		void InitializeData()
		{
			using func_t = decltype(&BGSEntryPointFunctionDataActivateChoice::InitializeData);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionDataActivateChoice::InitializeData };
			func(this);
		}

		void SetLabel(char const* apLabel)
		{
			using func_t = decltype(&BGSEntryPointFunctionDataActivateChoice::SetLabel);
			static REL::Relocation<func_t> func{ Offsets::BGSEntryPointFunctionDataActivateChoice::SetLabel };
			func(this, apLabel);
		}

	public:
		// members
		char*         pActivateChoiceLabel;  // 04
		Script        ActivateChoiceScript;  // 08
		std::uint16_t cFlags;                // 5C
		std::uint16_t pad5E;                 // 5E
	};
	static_assert(sizeof(BGSEntryPointFunctionDataActivateChoice) == 0x60);
}
