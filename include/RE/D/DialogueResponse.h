#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/D/DIALOGUE_EMOTION.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class TESIdleForm;
	class TESObjectREFR;
	class TESQuest;
	class TESResponse;
	class TESSound;
	class TESTopic;
	class TESTopicInfo;

	class DialogueResponse
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(DialogueResponse*);
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::dtor };
			func(this);
		}

		DialogueResponse* ctor()
		{
			using func_t = DialogueResponse*(__thiscall*)(DialogueResponse*);
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::ctor };
			return func(this);
		}

		DialogueResponse* ctor(TESQuest* apQuest, TESTopic* apTopic, TESTopicInfo* apInfo, TESObjectREFR* apSpeaker, TESResponse* apResponse)
		{
			using func_t = DialogueResponse*(__thiscall*)(DialogueResponse*, TESQuest*, TESTopic*, TESTopicInfo*, TESObjectREFR*, TESResponse*);
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::ctor_1 };
			return func(this, apQuest, apTopic, apInfo, apSpeaker, apResponse);
		}

		void SaveGame()
		{
			using func_t = void (DialogueResponse::*)();
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (DialogueResponse::*)();
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::LoadGame };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void (DialogueResponse::*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = void (DialogueResponse::*)(BGSLoadGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::DialogueResponse::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BSStringT<char>  cText;         // 00
		DIALOGUE_EMOTION eEmotion;      // 08
		std::uint32_t    uiEmotion;     // 0C
		BSStringT<char>  cVoice;        // 10
		TESIdleForm*     pSpeakerIdle;  // 18
		TESIdleForm*     pListenIdle;   // 1C
		TESSound*        pVoiceSound;   // 20
		bool             bUseEmotion;   // 24
		std::uint8_t     pad25[0x3];    // 25
		std::uint32_t    nResponseID;   // 28
	};
	static_assert(sizeof(DialogueResponse) == 0x2C);
}
