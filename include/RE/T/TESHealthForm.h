#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;

	class TESHealthForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESHealthForm };
		static constexpr auto VTABLE{ VTABLE::TESHealthForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint32_t GetFormHealth();  // 04

		TESHealthForm* ctor()
		{
			using func_t = TESHealthForm*(__thiscall*)(TESHealthForm*);
			static REL::Relocation<func_t> func{ Offsets::TESHealthForm::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESHealthForm*);
			static REL::Relocation<func_t> func{ Offsets::TESHealthForm::dtor };
			func(this);
		}

		static TESHealthForm* GetFormAsHealthForm(TESForm* apForm)
		{
			using func_t = decltype(&TESHealthForm::GetFormAsHealthForm);
			static REL::Relocation<func_t> func{ Offsets::TESHealthForm::GetFormAsHealthForm };
			return func(apForm);
		}

		static std::uint32_t GetFormHealth(TESForm* apForm)
		{
			using func_t = std::uint32_t(__cdecl*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESHealthForm::GetFormHealth };
			return func(apForm);
		}

	public:
		// members
		std::uint32_t iHealth;  // 04
	};
}
