#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/T/TOPIC_INFO_RESULT_SCRIPT.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class DialogueResponse;
	class TESObjectREFR;
	class TESQuest;
	class TESTopic;
	class TESTopicInfo;

	class DialogueItem
	{
	public:
		DialogueItem* ctor(TESQuest* apQuest, TESTopic* apTopic, TESTopicInfo* apInfo, TESObjectREFR* apSpeaker)
		{
			using func_t = DialogueItem*(__thiscall*)(DialogueItem*, TESQuest*, TESTopic*, TESTopicInfo*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::ctor };
			return func(this, apQuest, apTopic, apInfo, apSpeaker);
		}

		bool FirstResponse()
		{
			using func_t = decltype(&DialogueItem::FirstResponse);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::FirstResponse };
			return func(this);
		}

		bool NextResponse()
		{
			using func_t = decltype(&DialogueItem::NextResponse);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::NextResponse };
			return func(this);
		}

		DialogueResponse* GetCurrentResponse()
		{
			using func_t = decltype(&DialogueItem::GetCurrentResponse);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::GetCurrentResponse };
			return func(this);
		}

		void RunResult(TOPIC_INFO_RESULT_SCRIPT aeScript)
		{
			using func_t = decltype(&DialogueItem::RunResult);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::RunResult };
			func(this, aeScript);
		}

		std::int16_t GetDialogueResponseIndex(DialogueResponse* apDialogueResponse)
		{
			using func_t = decltype(&DialogueItem::GetDialogueResponseIndex);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::GetDialogueResponseIndex };
			return func(this, apDialogueResponse);
		}

		DialogueResponse* GetDialogueResponseByIndex(std::int16_t aiIndex)
		{
			using func_t = decltype(&DialogueItem::GetDialogueResponseByIndex);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::GetDialogueResponseByIndex };
			return func(this, aiIndex);
		}

		void SaveGame()
		{
			using func_t = void (DialogueItem::*)();
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (DialogueItem::*)();
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::LoadGame };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void (DialogueItem::*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = void (DialogueItem::*)(BGSLoadGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::DialogueItem::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BSSimpleList<DialogueResponse*>  lResponses;        // 00
		BSSimpleList<DialogueResponse*>* pCurrentResponse;  // 08
		TESTopicInfo*                    pInfo;             // 0C
		TESTopic*                        pTopic;            // 10
		TESQuest*                        pQuest;            // 14
		TESObjectREFR*                   pSpeaker;          // 18
	};
}
