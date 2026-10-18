#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSListForm;
	class TESAmmo;
	class TESForm;

	class BGSAmmoForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSAmmoForm };
		static constexpr auto VTABLE{ VTABLE::BGSAmmoForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESAmmo* GetAmmoForm()
		{
			using func_t = decltype(&BGSAmmoForm::GetAmmoForm);
			static REL::Relocation<func_t> func{ Offsets::BGSAmmoForm::GetAmmoForm };
			return func(this);
		}

		BGSListForm* GetAmmoFormList()
		{
			using func_t = decltype(&BGSAmmoForm::GetAmmoFormList);
			static REL::Relocation<func_t> func{ Offsets::BGSAmmoForm::GetAmmoFormList };
			return func(this);
		}

		bool IsRockItLauncher()
		{
			using func_t = decltype(&BGSAmmoForm::IsRockItLauncher);
			static REL::Relocation<func_t> func{ Offsets::BGSAmmoForm::IsRockItLauncher };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&BGSAmmoForm::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSAmmoForm::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSAmmoForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSAmmoForm::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		TESForm* pFormAmmo;  // 04
	};
}
