#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SKILL_DATA.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class TESFile;

	class TESSkill :
		public TESForm,  // 00
		public TESDescription,  // 18
		public TESTexture  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::TESSkill };
		static constexpr auto VTABLE{ VTABLE::TESSkill };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSKIL_ID };

		// override (TESForm)
		virtual ~TESSkill() = default;                   // 04
		virtual void ClearData() override;               // 05
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESSkill* ctor()
		{
			using func_t = TESSkill*(__thiscall*)(TESSkill*);
			static REL::Relocation<func_t> func{ Offsets::TESSkill::ctor };
			return func(this);
		}

		void ResetData()
		{
			using func_t = decltype(&TESSkill::ResetData);
			static REL::Relocation<func_t> func{ Offsets::TESSkill::ResetData };
			func(this);
		}

	public:
		// members
		SKILL_DATA     data;               // 2C
		TESDescription SkillLevelText[4];  // 40
	};
	static_assert(sizeof(TESSkill) == 0x60);
}
