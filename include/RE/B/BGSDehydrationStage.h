#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDehydrationStageData.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class BGSDehydrationStage :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDehydrationStage };
		static constexpr auto VTABLE{ VTABLE::BGSDehydrationStage };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kDEHY_ID };

		// override (TESForm)
		virtual ~BGSDehydrationStage() = default;        // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSDehydrationStage* ctor()
		{
			using func_t = BGSDehydrationStage*(__thiscall*)(BGSDehydrationStage*);
			static REL::Relocation<func_t> func{ Offsets::BGSDehydrationStage::ctor };
			return func(this);
		}

	public:
		// members
		BGSDehydrationStageData data;  // 18
	};
	static_assert(sizeof(BGSDehydrationStage) == 0x20);
}
