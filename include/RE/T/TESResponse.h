#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/R/RESPONSE_DATA.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESIdleForm;
	class TESObjectREFR;
	class TESQuest;
	class TESTopic;
	class TESTopicInfo;

	class TESResponse
	{
	public:
		TESResponse* ctor()
		{
			using func_t = TESResponse*(__thiscall*)(TESResponse*);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::ctor };
			return func(this);
		}

		char const* GetResponseText() const
		{
			using func_t = decltype(&TESResponse::GetResponseText);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::GetResponseText };
			return func(this);
		}

		bool GetAudioFullPath(TESObjectREFR* apSpeaker, TESQuest* apQuest, TESTopic* apOwnerTopic, TESTopicInfo* apOwnerInfo, BSStringT<char>& aFullPath)
		{
			using func_t = decltype(&TESResponse::GetAudioFullPath);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::GetAudioFullPath };
			return func(this, apSpeaker, apQuest, apOwnerTopic, apOwnerInfo, aFullPath);
		}

		static void GetAudioQuestTopicCombined(TESQuest* apQuest, TESTopic* apTopic, char* apOutBuffer, std::uint32_t aiBufferSize)
		{
			using func_t = decltype(&TESResponse::GetAudioQuestTopicCombined);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::GetAudioQuestTopicCombined };
			func(apQuest, apTopic, apOutBuffer, aiBufferSize);
		}

		void GetAudioFilename(TESQuest* apOwnerQuest, TESTopic* apOwnerTopic, TESTopicInfo* apOwnerInfo, BSStringT<char>& aFilename)
		{
			using func_t = decltype(&TESResponse::GetAudioFilename);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::GetAudioFilename };
			func(this, apOwnerQuest, apOwnerTopic, apOwnerInfo, aFilename);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&TESResponse::Load);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::Load };
			func(this, apFile);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESResponse::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::InitItem };
			func(this, apOwner);
		}

	protected:
		bool TestAudioFullPath(BSStringT<char>& aFullPath, char const* apDirPath, char const* apMPFileName, char const* apVoiceTypeName, char const* apFileName, char const* apFileExt)
		{
			using func_t = decltype(&TESResponse::TestAudioFullPath);
			static REL::Relocation<func_t> func{ Offsets::TESResponse::TestAudioFullPath };
			return func(this, aFullPath, apDirPath, apMPFileName, apVoiceTypeName, apFileName, apFileExt);
		}

	public:
		// members
		RESPONSE_DATA   Data;           // 00
		BSStringT<char> cResponseText;  // 18
		TESIdleForm*    pSpeakerIdle;   // 20
		TESIdleForm*    pListenerIdle;  // 24
		TESResponse*    pNext;          // 28
	};
	static_assert(sizeof(TESResponse) == 0x2C);
}
