#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSHungerStageData.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESFile;

	class BGSHungerStage :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSHungerStage };
		static constexpr auto VTABLE{ VTABLE::BGSHungerStage };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kHUNG_ID };

		// override (TESForm)
		virtual ~BGSHungerStage() = default;             // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		BGSHungerStage* ctor()
		{
			using func_t = BGSHungerStage*(__thiscall*)(BGSHungerStage*);
			static REL::Relocation<func_t> func{ Offsets::BGSHungerStage::ctor };
			return func(this);
		}

	public:
		// members
		BGSHungerStageData data;  // 18
	};
	static_assert(sizeof(BGSHungerStage) == 0x20);
}
