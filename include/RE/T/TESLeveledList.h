#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class ContainerItemExtra;
	class LEVELED_OBJECT;
	class TESContainer;
	class TESForm;
	class TESGlobal;
	class TESObjectREFR;

	class TESLeveledList :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLeveledList };
		static constexpr auto VTABLE{ VTABLE::TESLeveledList };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint8_t GetChanceNone();  // 04
		virtual bool GetMultCalc();            // 05
		virtual void ErrorCheckList();         // 06

		void SetChanceNone(std::uint8_t acChance)
		{
			using func_t = decltype(&TESLeveledList::SetChanceNone);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::SetChanceNone };
			func(this, acChance);
		}

		TESLeveledList* ctor()
		{
			using func_t = TESLeveledList*(__thiscall*)(TESLeveledList*);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESLeveledList*);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::dtor };
			func(this);
		}

		bool GetCalcAllBelow()
		{
			using func_t = decltype(&TESLeveledList::GetCalcAllBelow);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::GetCalcAllBelow };
			return func(this);
		}

		bool GetUseAll()
		{
			using func_t = decltype(&TESLeveledList::GetUseAll);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::GetUseAll };
			return func(this);
		}

		void AddScriptAddedLeveledObject(TESForm* apOwner, std::uint16_t asLevel, std::uint16_t asCount, TESForm* apForm, ContainerItemExtra* apExtra)
		{
			using func_t = decltype(&TESLeveledList::AddScriptAddedLeveledObject);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::AddScriptAddedLeveledObject };
			func(this, apOwner, asLevel, asCount, apForm, apExtra);
		}

		static TESLeveledList* GetFormAsLeveledList(TESForm* apForm)
		{
			using func_t = decltype(&TESLeveledList::GetFormAsLeveledList);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::GetFormAsLeveledList };
			return func(apForm);
		}

		void CalculateCurrentForm(std::uint16_t asLevel, TESForm*& apOutForm, std::uint16_t& asOutCount, ContainerItemExtra*& apOutExtra, bool abRecurse, std::int32_t aiAllBelowForce)
		{
			using func_t = decltype(&TESLeveledList::CalculateCurrentForm);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::CalculateCurrentForm };
			func(this, asLevel, apOutForm, asOutCount, apOutExtra, abRecurse, aiAllBelowForce);
		}

		void CalculateCurrentFormList(std::uint16_t asLevel, std::uint16_t asCount, TESContainer* apOutCont, std::int32_t aiAllBelowForce)
		{
			using func_t = decltype(&TESLeveledList::CalculateCurrentFormList);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::CalculateCurrentFormList };
			func(this, asLevel, asCount, apOutCont, aiAllBelowForce);
		}

		void CalculateCurrentFormListForRef(TESObjectREFR* apRef, TESContainer* apOutCont)
		{
			using func_t = decltype(&TESLeveledList::CalculateCurrentFormListForRef);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::CalculateCurrentFormListForRef };
			func(this, apRef, apOutCont);
		}

		void Save()
		{
			using func_t = decltype(&TESLeveledList::Save);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESLeveledList::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::InitItem };
			func(this, apOwner);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&TESLeveledList::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::TESLeveledList::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BSSimpleList<LEVELED_OBJECT*> leveledList;      // 04
		std::uint8_t                  cChanceNone;      // 0C
		std::uint8_t                  cLLFlags;         // 0D
		std::uint16_t                 pad0E;            // 0E
		TESGlobal*                    pChanceGlobal;    // 10
		BSSimpleList<LEVELED_OBJECT*> ScriptAddedList;  // 14
	};
}
