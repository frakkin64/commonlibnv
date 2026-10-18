#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSListForm;
	class TESForm;

	class BGSRepairItemList :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSRepairItemList };
		static constexpr auto VTABLE{ VTABLE::BGSRepairItemList };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSRepairItemList* ctor()
		{
			using func_t = BGSRepairItemList*(__thiscall*)(BGSRepairItemList*);
			static REL::Relocation<func_t> func{ Offsets::BGSRepairItemList::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSRepairItemList*);
			static REL::Relocation<func_t> func{ Offsets::BGSRepairItemList::dtor };
			func(this);
		}

		void Save()
		{
			using func_t = decltype(&BGSRepairItemList::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSRepairItemList::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSRepairItemList::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSRepairItemList::InitItem };
			func(this, apOwner);
		}

		bool HasRepairItem(TESForm* apForm)
		{
			using func_t = decltype(&BGSRepairItemList::HasRepairItem);
			static REL::Relocation<func_t> func{ Offsets::BGSRepairItemList::HasRepairItem };
			return func(this, apForm);
		}

		static bool CanItemRepairForm(TESForm* apRepairItem, TESForm* apForm)
		{
			using func_t = decltype(&BGSRepairItemList::CanItemRepairForm);
			static REL::Relocation<func_t> func{ Offsets::BGSRepairItemList::CanItemRepairForm };
			return func(apRepairItem, apForm);
		}

	public:
		// members
		BGSListForm* pListForm;  // 04
	};
}
