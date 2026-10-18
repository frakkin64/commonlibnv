#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicSystem_School.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESLeveledList.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class TESLevSpell :
		public TESBoundObject,  // 00
		public TESLeveledList  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLevSpell };
		static constexpr auto VTABLE{ VTABLE::TESLevSpell };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLVSP_ID };

		// override (TESBoundObject)
		virtual ~TESLevSpell() = default;                // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESLevSpell* ctor()
		{
			using func_t = TESLevSpell*(__thiscall*)(TESLevSpell*);
			static REL::Relocation<func_t> func{ Offsets::TESLevSpell::ctor };
			return func(this);
		}

	private:
		void CalculateCurrentForm(MagicSystem_School aeSchool, std::uint16_t asLevel, TESForm*& apOutForm, std::uint16_t& asOutCount, bool abRecurse)
		{
			using func_t = decltype(&TESLevSpell::CalculateCurrentForm);
			static REL::Relocation<func_t> func{ Offsets::TESLevSpell::CalculateCurrentForm };
			func(this, aeSchool, asLevel, apOutForm, asOutCount, abRecurse);
		}
	};
	static_assert(sizeof(TESLevSpell) == 0x4C);
}
