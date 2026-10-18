#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/INTERIOR_DATA.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class BGSLightingTemplate :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSLightingTemplate };
		static constexpr auto VTABLE{ VTABLE::BGSLightingTemplate };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLGTM_ID };

		// override (TESForm)
		virtual ~BGSLightingTemplate() = default;        // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSLightingTemplate* ctor()
		{
			using func_t = BGSLightingTemplate*(__thiscall*)(BGSLightingTemplate*);
			static REL::Relocation<func_t> func{ Offsets::BGSLightingTemplate::ctor };
			return func(this);
		}

	public:
		// members
		INTERIOR_DATA Data;  // 18
	};
	static_assert(sizeof(BGSLightingTemplate) == 0x44);
}
