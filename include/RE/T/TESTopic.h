#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/D/DIALOGUE_DATA.h"
#include "RE/D/DIALOGUE_TYPE.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class DialogueItem;
	class FORM;
	class QUEST_INFO;
	class TESFile;
	class TESObjectREFR;
	class TESQuest;
	class TESTopicInfo;

	class TESTopic :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESTopic };
		static constexpr auto VTABLE{ VTABLE::TESTopic };

		// override (TESForm)
		virtual ~TESTopic() = default;                               // 04
		virtual void ClearData() override;                           // 05
		virtual bool Load(TESFile* apFile) override;                 // 08
		virtual bool Save(TESFile* apFile) override;                 // 0A
		virtual void Save() override;                                // 0B
		virtual bool SaveEdit(TESFile* apFile) override;             // 0D
		virtual bool SavesBefore(FORM* apGroupFORM) override;        // 0E
		virtual bool SavesBefore(TESForm* apForm) override;          // 0F
		virtual void InitItem() override;                            // 22
		virtual bool IsFormTypeChild(std::uint8_t aeType) override;  // 48

		TESTopic* ctor(DIALOGUE_TYPE type)
		{
			using func_t = TESTopic*(__thiscall*)(TESTopic*, DIALOGUE_TYPE);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::ctor };
			return func(this, type);
		}

		void SetDummyPrompt(char const* apPrompt)
		{
			using func_t = decltype(&TESTopic::SetDummyPrompt);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::SetDummyPrompt };
			func(this, apPrompt);
		}

		bool IsTopLevel()
		{
			using func_t = decltype(&TESTopic::IsTopLevel);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::IsTopLevel };
			return func(this);
		}

		bool InsertInfo(TESQuest* apQuest, TESTopicInfo* apInfo, std::uint32_t auiPrevInfoID)
		{
			using func_t = decltype(&TESTopic::InsertInfo);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::InsertInfo };
			return func(this, apQuest, apInfo, auiPrevInfoID);
		}

		TESQuest* GetOwnerQuest(TESTopicInfo* apInfo) const
		{
			using func_t = decltype(&TESTopic::GetOwnerQuest);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetOwnerQuest };
			return func(this, apInfo);
		}

		bool IsRemappedRumors() const
		{
			using func_t = decltype(&TESTopic::IsRemappedRumors);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::IsRemappedRumors };
			return func(this);
		}

		TESTopicInfo* GetInfoByID(std::uint32_t aiInfoID, bool abReverse)
		{
			using func_t = decltype(&TESTopic::GetInfoByID);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetInfoByID };
			return func(this, aiInfoID, abReverse);
		}

		static void AddDefaultTopics()
		{
			using func_t = decltype(&TESTopic::AddDefaultTopics);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::AddDefaultTopics };
			func();
		}

		static TESTopic* GetTopic(DIALOGUE_TYPE type, std::int32_t index)
		{
			using func_t = decltype(&TESTopic::GetTopic);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetTopic };
			return func(type, index);
		}

		static TESTopic* GetOwnerTopic(TESTopicInfo* pInfo)
		{
			using func_t = decltype(&TESTopic::GetOwnerTopic);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetOwnerTopic };
			return func(pInfo);
		}

		static bool CompareTopics(TESTopic* apTopic1, TESTopic* apTopic2, bool abUsePriority)
		{
			using func_t = decltype(&TESTopic::CompareTopics);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::CompareTopics };
			return func(apTopic1, apTopic2, abUsePriority);
		}

		TESTopicInfo* GetMatchingInfo(TESObjectREFR* apSpeaker, TESObjectREFR* apTarget) const
		{
			using func_t = TESTopicInfo* (TESTopic::*)(TESObjectREFR*, TESObjectREFR*) const;
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetMatchingInfo };
			return func(this, apSpeaker, apTarget);
		}

		TESTopicInfo* GetMatchingInfo(bool& abDispositionFailure, TESObjectREFR* apSpeaker, TESObjectREFR* apTarget) const
		{
			using func_t = TESTopicInfo* (TESTopic::*)(bool&, TESObjectREFR*, TESObjectREFR*) const;
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetMatchingInfo_1 };
			return func(this, abDispositionFailure, apSpeaker, apTarget);
		}

		TESTopicInfo* GetMatchingInfo(bool& abDispositionFailure, TESObjectREFR* apSpeaker, TESObjectREFR* apTarget, bool abIsConversation, TESTopic* apPreviousTopic, BSSimpleList<DialogueItem*>* apConversationList) const
		{
			using func_t = TESTopicInfo* (TESTopic::*)(bool&, TESObjectREFR*, TESObjectREFR*, bool, TESTopic*, BSSimpleList<DialogueItem*>*) const;
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetMatchingInfo_2 };
			return func(this, abDispositionFailure, apSpeaker, apTarget, abIsConversation, apPreviousTopic, apConversationList);
		}

		DialogueItem* CreateDialogueItem(TESObjectREFR* apSpeaker, TESObjectREFR* apTarget, TESTopic* apPreviousTopic, BSSimpleList<DialogueItem*>* apConversationList, bool abRunImmediate)
		{
			using func_t = decltype(&TESTopic::CreateDialogueItem);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::CreateDialogueItem };
			return func(this, apSpeaker, apTarget, apPreviousTopic, apConversationList, abRunImmediate);
		}

		static std::uint32_t CreateConversation(TESObjectREFR* apSpeaker, TESObjectREFR* apTarget, BSSimpleList<DialogueItem*>* apConversationList, TESTopic* apStartingTopic)
		{
			using func_t = decltype(&TESTopic::CreateConversation);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::CreateConversation };
			return func(apSpeaker, apTarget, apConversationList, apStartingTopic);
		}

		bool IsPersuasion()
		{
			using func_t = decltype(&TESTopic::IsPersuasion);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::IsPersuasion };
			return func(this);
		}

	protected:
		static TESTopicInfo* GetMatchingInfo(TESTopic const* apTopic, bool& abDispositionFailure, TESObjectREFR* apSpeaker, TESObjectREFR* apTarget, bool abIsConversation, TESTopic* apPreviousTopic, BSSimpleList<DialogueItem*>* apConversationList)
		{
			using func_t = TESTopicInfo*(__cdecl*)(TESTopic const*, bool&, TESObjectREFR*, TESObjectREFR*, bool, TESTopic*, BSSimpleList<DialogueItem*>*);
			static REL::Relocation<func_t> func{ Offsets::TESTopic::GetMatchingInfo_3 };
			return func(apTopic, abDispositionFailure, apSpeaker, apTarget, abIsConversation, apPreviousTopic, apConversationList);
		}

	public:
		// members
		DIALOGUE_DATA             m_Data;           // 24
		std::uint16_t             pad26;            // 26
		float                     m_fPriority;      // 28
		BSSimpleList<QUEST_INFO*> m_listQuestInfo;  // 2C
		BSStringT<char>           cDummyPrompt;     // 34
		std::int32_t              m_iJournalIndex;  // 3C
		BSStringT<char>           cFormEditorID;    // 40
	};
	static_assert(sizeof(TESTopic) == 0x48);
}
