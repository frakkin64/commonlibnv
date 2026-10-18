#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceParameterData.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class TESImageSpace :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESImageSpace };
		static constexpr auto VTABLE{ VTABLE::TESImageSpace };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kIMGS_ID };

		// override (TESForm)
		virtual ~TESImageSpace() = default;              // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESImageSpace* ctor()
		{
			using func_t = TESImageSpace*(__thiscall*)(TESImageSpace*);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpace::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: strName(absent)
		ImageSpaceParameterData Data;  // 18
	};
	static_assert(sizeof(TESImageSpace) == 0xB0);
}
