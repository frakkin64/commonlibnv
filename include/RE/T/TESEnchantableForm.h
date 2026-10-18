#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"
#include "RE/M/MagicSystem_CastingType.h"

namespace RE
{
	class EnchantmentItem;
	class TESForm;

	class TESEnchantableForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESEnchantableForm };
		static constexpr auto VTABLE{ VTABLE::TESEnchantableForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual MagicSystem_CastingType GetCastingType();  // 04

		void SetCastingType(MagicSystem_CastingType aeCastingType)
		{
			using func_t = decltype(&TESEnchantableForm::SetCastingType);
			static REL::Relocation<func_t> func{ Offsets::TESEnchantableForm::SetCastingType };
			func(this, aeCastingType);
		}

		void Save()
		{
			using func_t = decltype(&TESEnchantableForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESEnchantableForm::Save };
			func(this);
		}

		TESEnchantableForm* ctor()
		{
			using func_t = TESEnchantableForm*(__thiscall*)(TESEnchantableForm*);
			static REL::Relocation<func_t> func{ Offsets::TESEnchantableForm::ctor };
			return func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESEnchantableForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESEnchantableForm::InitItem };
			func(this, apOwner);
		}

		static EnchantmentItem* GetFormEnchanting(TESForm* apForm)
		{
			using func_t = decltype(&TESEnchantableForm::GetFormEnchanting);
			static REL::Relocation<func_t> func{ Offsets::TESEnchantableForm::GetFormEnchanting };
			return func(apForm);
		}

	public:
		// members
		EnchantmentItem*        pFormEnchanting;       // 04
		std::uint16_t           iAmountofEnchantment;  // 08
		std::uint16_t           pad0A;                 // 0A
		MagicSystem_CastingType eCastingType;          // 0C
	};
}
