#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/Q/QUEST_DATA.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESScriptableForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSQuestObjective;
	class BGSSaveFormBuffer;
	class ScriptLocals;
	class TESFile;
	class TESQuestStage;

	class TESQuest :
		public TESForm,  // 00
		public TESScriptableForm,  // 18
		public TESIcon,  // 24
		public TESFullName  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::TESQuest };
		static constexpr auto VTABLE{ VTABLE::TESQuest };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kQUST_ID };

		// override (TESForm)
		virtual ~TESQuest() = default;                                                        // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool ProcessBeforeSave() override;                                            // 06
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                    // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                  // 1D
		virtual void CheckSaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;             // 20
		virtual void InitItem() override;                                                     // 22

		// add
		virtual void Unk_4E();  // 4E

		bool GetEnabled()
		{
			using func_t = decltype(&TESQuest::GetEnabled);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetEnabled };
			return func(this);
		}

		ScriptLocals* GetScriptLocals()
		{
			using func_t = decltype(&TESQuest::GetScriptLocals);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetScriptLocals };
			return func(this);
		}

		bool GetCompleted()
		{
			using func_t = decltype(&TESQuest::GetCompleted);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetCompleted };
			return func(this);
		}

		BSSimpleList<BGSQuestObjective*>* GetObjectiveList()
		{
			using func_t = decltype(&TESQuest::GetObjectiveList);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetObjectiveList };
			return func(this);
		}

		TESCondition* GetConditions()
		{
			using func_t = decltype(&TESQuest::GetConditions);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetConditions };
			return func(this);
		}

		TESQuest* ctor()
		{
			using func_t = TESQuest*(__thiscall*)(TESQuest*);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::ctor };
			return func(this);
		}

		BGSQuestObjective* GetObjective(std::uint32_t aiIndex)
		{
			using func_t = decltype(&TESQuest::GetObjective);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetObjective };
			return func(this, aiIndex);
		}

		void SetEnabled(bool abEnabled)
		{
			using func_t = decltype(&TESQuest::SetEnabled);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::SetEnabled };
			func(this, abEnabled);
		}

		void SetCompleted(bool abCompleted)
		{
			using func_t = decltype(&TESQuest::SetCompleted);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::SetCompleted };
			func(this, abCompleted);
		}

		void SetFailed(bool abFailed)
		{
			using func_t = decltype(&TESQuest::SetFailed);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::SetFailed };
			func(this, abFailed);
		}

		bool SetStageDone(std::uint8_t aucIndex)
		{
			using func_t = decltype(&TESQuest::SetStageDone);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::SetStageDone };
			return func(this, aucIndex);
		}

		bool GetAllowRepeatStages()
		{
			using func_t = decltype(&TESQuest::GetAllowRepeatStages);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetAllowRepeatStages };
			return func(this);
		}

		std::uint32_t GetCurrentStage()
		{
			using func_t = decltype(&TESQuest::GetCurrentStage);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::GetCurrentStage };
			return func(this);
		}

		void ResetQuest()
		{
			using func_t = decltype(&TESQuest::ResetQuest);
			static REL::Relocation<func_t> func{ Offsets::TESQuest::ResetQuest };
			func(this);
		}

	public:
		// members
		QUEST_DATA                       data;              // 3C
		BSSimpleList<TESQuestStage*>     m_listStages;      // 44
		BSSimpleList<BGSQuestObjective*> m_listObjectives;  // 4C
		TESCondition                     objConditions;     // 54
		ScriptLocals*                    pScriptLocals;     // 5C
		std::uint8_t                     cCurrentStage;     // 60
		std::uint8_t                     pad61[0x3];        // 61
		BSStringT<char>                  cFormEditorID;     // 64
	};
	static_assert(sizeof(TESQuest) == 0x6C);
}
