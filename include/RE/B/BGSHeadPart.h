#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class TESFile;

	class BGSHeadPart :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESModelTextureSwap  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSHeadPart };
		static constexpr auto VTABLE{ VTABLE::BGSHeadPart };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kHDPT_ID };

		// override (TESForm)
		virtual ~BGSHeadPart() = default;                // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSHeadPart* ctor()
		{
			using func_t = BGSHeadPart*(__thiscall*)(BGSHeadPart*);
			static REL::Relocation<func_t> func{ Offsets::BGSHeadPart::ctor };
			return func(this);
		}

	public:
		// members
		char                       cFlags;      // 44
		std::uint8_t               pad45[0x3];  // 45
		BSSimpleList<BGSHeadPart*> ExtraParts;  // 48
	};
	static_assert(sizeof(BGSHeadPart) == 0x50);
}
