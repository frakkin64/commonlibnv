#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSListForm;
	class TESForm;

	class BGSBipedModelList :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSBipedModelList };
		static constexpr auto VTABLE{ VTABLE::BGSBipedModelList };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSBipedModelList* ctor()
		{
			using func_t = BGSBipedModelList*(__thiscall*)(BGSBipedModelList*);
			static REL::Relocation<func_t> func{ Offsets::BGSBipedModelList::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSBipedModelList*);
			static REL::Relocation<func_t> func{ Offsets::BGSBipedModelList::dtor };
			func(this);
		}

		void Save()
		{
			using func_t = decltype(&BGSBipedModelList::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSBipedModelList::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSBipedModelList::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSBipedModelList::InitItem };
			func(this, apOwner);
		}

		static BGSBipedModelList* GetFormAsBipedModelList(TESForm* apForm)
		{
			using func_t = decltype(&BGSBipedModelList::GetFormAsBipedModelList);
			static REL::Relocation<func_t> func{ Offsets::BGSBipedModelList::GetFormAsBipedModelList };
			return func(apForm);
		}

	public:
		// members
		BGSListForm* pListForm;  // 04
	};
}
