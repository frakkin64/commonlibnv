#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;
	class TESRace;

	class TESRaceForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRaceForm };
		static constexpr auto VTABLE{ VTABLE::TESRaceForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		void Save()
		{
			using func_t = decltype(&TESRaceForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESRaceForm::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESRaceForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESRaceForm::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		TESRace* pFormRace;  // 04
	};
}
