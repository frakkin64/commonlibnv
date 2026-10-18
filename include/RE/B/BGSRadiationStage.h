#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSRadiationStageData.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class BGSRadiationStage :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSRadiationStage };
		static constexpr auto VTABLE{ VTABLE::BGSRadiationStage };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kRADS_ID };

		// override (TESForm)
		virtual ~BGSRadiationStage() = default;          // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSRadiationStage* ctor()
		{
			using func_t = BGSRadiationStage*(__thiscall*)(BGSRadiationStage*);
			static REL::Relocation<func_t> func{ Offsets::BGSRadiationStage::ctor };
			return func(this);
		}

	public:
		// members
		BGSRadiationStageData data;  // 18
	};
	static_assert(sizeof(BGSRadiationStage) == 0x20);
}
