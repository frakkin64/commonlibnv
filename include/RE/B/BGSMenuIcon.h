#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESForm.h"
#include "RE/T/TESIcon.h"

namespace RE
{
	class TESFile;

	class BGSMenuIcon :
		public TESForm,  // 00
		public TESIcon  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMenuIcon };
		static constexpr auto VTABLE{ VTABLE::BGSMenuIcon };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kMICN_ID };

		// override (TESForm)
		virtual ~BGSMenuIcon() = default;                // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSMenuIcon* ctor()
		{
			using func_t = BGSMenuIcon*(__thiscall*)(BGSMenuIcon*);
			static REL::Relocation<func_t> func{ Offsets::BGSMenuIcon::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSMenuIcon) == 0x24);
}
