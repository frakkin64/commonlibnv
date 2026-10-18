#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_SECTION.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/I/IDLE_DATA.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESModelAnim.h"

namespace RE
{
	class IDLE_REPLAY_DELAY;
	class NiFormArray;
	class TESFile;
	class TESObjectREFR;

	class TESIdleForm :
		public TESForm,  // 00
		public TESModelAnim  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESIdleForm };
		static constexpr auto VTABLE{ VTABLE::TESIdleForm };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kIDLE_ID };

		// override (TESForm)
		virtual ~TESIdleForm() = default;                                                                                    // 04
		virtual void ClearData() override;                                                                                   // 05
		virtual bool ProcessBeforeSave() override;                                                                           // 06
		virtual bool Load(TESFile* apFile) override;                                                                         // 08
		virtual void Save() override;                                                                                        // 0B
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;  // 10
		virtual void InitItem() override;                                                                                    // 22
		virtual void Copy(TESForm* apCopy) override;                                                                         // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                      // 43

		TESCondition* GetConditions()
		{
			using func_t = decltype(&TESIdleForm::GetConditions);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::GetConditions };
			return func(this);
		}

		TESIdleForm* ctor()
		{
			using func_t = TESIdleForm*(__thiscall*)(TESIdleForm*);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::ctor };
			return func(this);
		}

		bool InitParents()
		{
			using func_t = decltype(&TESIdleForm::InitParents);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::InitParents };
			return func(this);
		}

		void FixNextIdles(NiFormArray* apArray)
		{
			using func_t = decltype(&TESIdleForm::FixNextIdles);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::FixNextIdles };
			func(this, apArray);
		}

		ANIM_GROUP_SECTION GetIdleAnimGroupSection()
		{
			using func_t = decltype(&TESIdleForm::GetIdleAnimGroupSection);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::GetIdleAnimGroupSection };
			return func(this);
		}

		bool CheckIdleFile()
		{
			using func_t = decltype(&TESIdleForm::CheckIdleFile);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::CheckIdleFile };
			return func(this);
		}

		TESIdleForm* GetIdleToPlay(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef, BSSimpleList<IDLE_REPLAY_DELAY*>* apReplayDelayList)
		{
			using func_t = decltype(&TESIdleForm::GetIdleToPlay);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::GetIdleToPlay };
			return func(this, apActionRef, apTargetRef, apReplayDelayList);
		}

		bool CheckConditions(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef, bool abRecurseUp)
		{
			using func_t = decltype(&TESIdleForm::CheckConditions);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::CheckConditions };
			return func(this, apActionRef, apTargetRef, abRecurseUp);
		}

		TESIdleForm* GetChildByIndex(std::uint32_t aiIndex)
		{
			using func_t = decltype(&TESIdleForm::GetChildByIndex);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::GetChildByIndex };
			return func(this, aiIndex);
		}

		void RemoveChildAtIndex(std::uint32_t aiIndex)
		{
			using func_t = decltype(&TESIdleForm::RemoveChildAtIndex);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::RemoveChildAtIndex };
			func(this, aiIndex);
		}

		void RemoveChild(TESIdleForm* apChild)
		{
			using func_t = decltype(&TESIdleForm::RemoveChild);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::RemoveChild };
			func(this, apChild);
		}

		void DetachFromParent()
		{
			using func_t = decltype(&TESIdleForm::DetachFromParent);
			static REL::Relocation<func_t> func{ Offsets::TESIdleForm::DetachFromParent };
			func(this);
		}

	public:
		// members
		TESCondition    Conditions;     // 30
		IDLE_DATA       data;           // 38
		NiFormArray*    pChildIdles;    // 40
		TESIdleForm*    pParentIdle;    // 44
		TESIdleForm*    pPrevIdle;      // 48
		BSStringT<char> cFormEditorID;  // 4C
	};
	static_assert(sizeof(TESIdleForm) == 0x54);
}
