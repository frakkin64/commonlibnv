#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class ContainerItemExtra;
	class ContainerObject;
	class InventoryChanges;
	class TESObject;
	class TESObjectREFR;

	class TESContainer :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESContainer };
		static constexpr auto VTABLE{ VTABLE::TESContainer };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESContainer* ctor()
		{
			using func_t = TESContainer*(__thiscall*)(TESContainer*);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESContainer*);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::dtor };
			func(this);
		}

		ContainerObject* AddObject(TESObject* apObj, std::int32_t aiCount, ContainerItemExtra* apExtra)
		{
			using func_t = decltype(&TESContainer::AddObject);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::AddObject };
			return func(this, apObj, aiCount, apExtra);
		}

		bool HasObject(TESObject* pObj)
		{
			using func_t = decltype(&TESContainer::HasObject);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::HasObject };
			return func(this, pObj);
		}

		static bool IsGold(TESObject* pObj)
		{
			using func_t = decltype(&TESContainer::IsGold);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::IsGold };
			return func(pObj);
		}

		static bool ContainerCanHoldType(std::uint8_t aType)
		{
			using func_t = decltype(&TESContainer::ContainerCanHoldType);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::ContainerCanHoldType };
			return func(aType);
		}

		void ApplyHealthPercentToContainer(float afHealthPerc)
		{
			using func_t = decltype(&TESContainer::ApplyHealthPercentToContainer);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::ApplyHealthPercentToContainer };
			func(this, afHealthPerc);
		}

		void AddContainerToReference(TESObjectREFR* apRef, bool abSilent)
		{
			using func_t = decltype(&TESContainer::AddContainerToReference);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::AddContainerToReference };
			func(this, apRef, abSilent);
		}

		void AddLevItemContainerToChanges(std::int32_t aiLevItemIndex, InventoryChanges* apChanges)
		{
			using func_t = decltype(&TESContainer::AddLevItemContainerToChanges);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::AddLevItemContainerToChanges };
			func(this, aiLevItemIndex, apChanges);
		}

		std::int32_t GetObjectCount(TESObject* apObject)
		{
			using func_t = decltype(&TESContainer::GetObjectCount);
			static REL::Relocation<func_t> func{ Offsets::TESContainer::GetObjectCount };
			return func(this, apObject);
		}

	public:
		// members
		BSSimpleList<ContainerObject*> objectList;  // 04?
	};
}
