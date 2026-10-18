#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class DialogueItem;

	class Conversation
	{
	public:
		bool FirstItem()
		{
			using func_t = decltype(&Conversation::FirstItem);
			static REL::Relocation<func_t> func{ Offsets::Conversation::FirstItem };
			return func(this);
		}

		std::int16_t GetDialogueItemIndex(DialogueItem* apDialogueItem)
		{
			using func_t = decltype(&Conversation::GetDialogueItemIndex);
			static REL::Relocation<func_t> func{ Offsets::Conversation::GetDialogueItemIndex };
			return func(this, apDialogueItem);
		}

		DialogueItem* GetDialogueItemByIndex(std::int16_t aiIndex)
		{
			using func_t = decltype(&Conversation::GetDialogueItemByIndex);
			static REL::Relocation<func_t> func{ Offsets::Conversation::GetDialogueItemByIndex };
			return func(this, aiIndex);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&Conversation::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::Conversation::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = void (Conversation::*)();
			static REL::Relocation<func_t> func{ Offsets::Conversation::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (Conversation::*)();
			static REL::Relocation<func_t> func{ Offsets::Conversation::LoadGame };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void (Conversation::*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Conversation::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = void (Conversation::*)(BGSLoadGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Conversation::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BSSimpleList<DialogueItem*>  lDialogueItems;  // 00
		BSSimpleList<DialogueItem*>* pCurrentItem;    // 08
	};
}
