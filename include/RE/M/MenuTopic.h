#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class DialogueResponse;
	class TESObjectREFR;
	class TESQuest;
	class TESTopic;
	class TESTopicInfo;

	class MenuTopic
	{
	public:
		MenuTopic* ctor()
		{
			using func_t = MenuTopic*(__thiscall*)(MenuTopic*);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::ctor };
			return func(this);
		}

		MenuTopic* ctor(TESQuest* apQuest, TESTopic* apTopic, TESTopicInfo* apInfo, TESObjectREFR* apSpeaker, bool abInfoRefusal)
		{
			using func_t = MenuTopic*(__thiscall*)(MenuTopic*, TESQuest*, TESTopic*, TESTopicInfo*, TESObjectREFR*, bool);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::ctor_1 };
			return func(this, apQuest, apTopic, apInfo, apSpeaker, abInfoRefusal);
		}

		bool FirstResponse()
		{
			using func_t = decltype(&MenuTopic::FirstResponse);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::FirstResponse };
			return func(this);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&MenuTopic::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = void (MenuTopic::*)();
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::SaveGame };
			func(this);
		}

		void LoadGame(TESObjectREFR* apSpeaker)
		{
			using func_t = void (MenuTopic::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::LoadGame };
			func(this, apSpeaker);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void (MenuTopic::*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = void (MenuTopic::*)(BGSLoadGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

	private:
		void FillResponseList(TESQuest* apQuest, TESTopic* apTopic, TESTopicInfo* apInfo, TESObjectREFR* apSpeaker)
		{
			using func_t = decltype(&MenuTopic::FillResponseList);
			static REL::Relocation<func_t> func{ Offsets::MenuTopic::FillResponseList };
			func(this, apQuest, apTopic, apInfo, apSpeaker);
		}

	public:
		// members
		BSStringT<char>                  cTopicText;        // 00
		bool                             bTopicIsChoice;    // 08
		bool                             bInfoRefusal;      // 09
		bool                             bPersuasion;       // 0A
		std::uint8_t                     pad0B;             // 0B
		BSSimpleList<DialogueResponse*>  lResponses;        // 0C
		TESQuest*                        pQuest;            // 14
		TESTopicInfo*                    pInfo;             // 18
		TESTopic*                        pOrigTopic;        // 1C
		BSSimpleList<DialogueResponse*>* pCurrentResponse;  // 20
		bool                             bGeneralTopic;     // 24
		bool                             bTopicIsNew;       // 25
		std::uint16_t                    pad26;             // 26
		TESTopic*                        pTopic;            // 28
	};
	static_assert(sizeof(MenuTopic) == 0x2C);
}
