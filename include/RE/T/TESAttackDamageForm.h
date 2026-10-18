#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESAttackDamageForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAttackDamageForm };
		static constexpr auto VTABLE{ VTABLE::TESAttackDamageForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint16_t GetAttackDamage();  // 04

		TESAttackDamageForm* ctor()
		{
			using func_t = TESAttackDamageForm*(__thiscall*)(TESAttackDamageForm*);
			static REL::Relocation<func_t> func{ Offsets::TESAttackDamageForm::ctor };
			return func(this);
		}

		void SetAttackDamage(std::uint16_t asValue)
		{
			using func_t = decltype(&TESAttackDamageForm::SetAttackDamage);
			static REL::Relocation<func_t> func{ Offsets::TESAttackDamageForm::SetAttackDamage };
			func(this, asValue);
		}

	public:
		// members
		std::uint16_t sAttackDamage;  // 04
		std::uint16_t pad06;          // 06
	};
}
