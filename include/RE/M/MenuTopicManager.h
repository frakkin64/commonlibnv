#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class MenuTopic;
	class TESObjectREFR;
	class TESTopic;

	class MenuTopicManager
	{
	public:
		[[nodiscard]] static MenuTopicManager* GetSingleton() noexcept
		{
			static REL::Relocation<MenuTopicManager**> singleton{ Offsets::MenuTopicManager::pInstance };
			return *singleton;
		}

		bool FirstTopic(bool abSkipGreeting)
		{
			using func_t = decltype(&MenuTopicManager::FirstTopic);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::FirstTopic };
			return func(this, abSkipGreeting);
		}

		MenuTopic* GetCurrentTopic()
		{
			using func_t = decltype(&MenuTopicManager::GetCurrentTopic);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::GetCurrentTopic };
			return func(this);
		}

		MenuTopic* GetGreeting()
		{
			using func_t = decltype(&MenuTopicManager::GetGreeting);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::GetGreeting };
			return func(this);
		}

		static void Destroy()
		{
			using func_t = decltype(&MenuTopicManager::Destroy);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::Destroy };
			func();
		}

		bool Initialize(TESObjectREFR* apSpeaker, TESTopic* apForceGreeting)
		{
			using func_t = decltype(&MenuTopicManager::Initialize);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::Initialize };
			return func(this, apSpeaker, apForceGreeting);
		}

		bool DoSpeechChallengeCheck(MenuTopic* pSpeechTopic)
		{
			using func_t = decltype(&MenuTopicManager::DoSpeechChallengeCheck);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::DoSpeechChallengeCheck };
			return func(this, pSpeechTopic);
		}

		void ProcessCurrentTopic()
		{
			using func_t = decltype(&MenuTopicManager::ProcessCurrentTopic);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::ProcessCurrentTopic };
			func(this);
		}

		BSSimpleList<MenuTopic*>* GetCurrentTopicList()
		{
			using func_t = decltype(&MenuTopicManager::GetCurrentTopicList);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::GetCurrentTopicList };
			return func(this);
		}

	private:
		void FillTopicList(BSSimpleList<TESTopic*>* apList, bool abPersuasion, bool abIsChoiceList, TESTopic* apPreviousTopic)
		{
			using func_t = decltype(&MenuTopicManager::FillTopicList);
			static REL::Relocation<func_t> func{ Offsets::MenuTopicManager::FillTopicList };
			func(this, apList, abPersuasion, abIsChoiceList, apPreviousTopic);
		}

	public:
		// members
		BSSimpleList<MenuTopic*>*               pCurrentTopic;         // 00
		BSSimpleList<BSSimpleList<MenuTopic*>*> listTopicLists;        // 04
		TESObjectREFR*                          pSpeaker;              // 0C
		bool                                    bSpeechChallengeLoss;  // 10
		std::uint8_t                            pad11[0x3];            // 11
		std::int32_t                            iLastDialogXP;         // 14
	};
}
