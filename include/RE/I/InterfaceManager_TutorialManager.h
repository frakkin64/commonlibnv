#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/InterfaceManager_TutorialManager_MessageData.h"
#include "RE/I/Interface_TutorialMessageID.h"

namespace RE
{
	class InterfaceManager_TutorialManager
	{
	public:
		using MessageData = InterfaceManager_TutorialManager_MessageData;

		std::uint32_t GetSaveLoadSize()
		{
			using func_t = decltype(&InterfaceManager_TutorialManager::GetSaveLoadSize);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager_TutorialManager::GetSaveLoadSize };
			return func(this);
		}

		void Update()
		{
			using func_t = decltype(&InterfaceManager_TutorialManager::Update);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager_TutorialManager::Update };
			func(this);
		}

		bool FlagAsShown(Interface_TutorialMessageID aeID)
		{
			using func_t = decltype(&InterfaceManager_TutorialManager::FlagAsShown);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager_TutorialManager::FlagAsShown };
			return func(this, aeID);
		}

		bool ShowMessage(Interface_TutorialMessageID aeID, std::int32_t aiMenuID, std::uint32_t auiShowDelay)
		{
			using func_t = decltype(&InterfaceManager_TutorialManager::ShowMessage);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager_TutorialManager::ShowMessage };
			return func(this, aeID, aiMenuID, auiShowDelay);
		}

		void Save(char* apSaveString)
		{
			using func_t = decltype(&InterfaceManager_TutorialManager::Save);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager_TutorialManager::Save };
			func(this, apSaveString);
		}

		bool HasBeenShown(Interface_TutorialMessageID aeID) const
		{
			using func_t = decltype(&InterfaceManager_TutorialManager::HasBeenShown);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager_TutorialManager::HasBeenShown };
			return func(this, aeID);
		}

	public:
		// members
		InterfaceManager_TutorialManager_MessageData tMessages[41];  // 00
		Interface_TutorialMessageID                  eDisplayID;     // A4
		std::uint32_t                                uiNextDisplay;  // A8?
	};
}
