#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSaveDataSystemUtility_RESULT.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class BGSSaveLoadFile;
	class BGSSaveLoadFileEntry;

	class BGSSaveLoadManager
	{
	public:
		bool GetSimulatedMode()
		{
			using func_t = decltype(&BGSSaveLoadManager::GetSimulatedMode);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::GetSimulatedMode };
			return func(this);
		}

		static void Create()
		{
			using func_t = decltype(&BGSSaveLoadManager::Create);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::Create };
			func();
		}

		bool SaveGame(char const* apFileName, std::int32_t aiDeviceID, bool abOutputStats)
		{
			using func_t = decltype(&BGSSaveLoadManager::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::SaveGame };
			return func(this, apFileName, aiDeviceID, abOutputStats);
		}

		bool LoadGame(char const* apFileName, std::int32_t aiDeviceID, bool abOutputStats, bool abIgnoreMissingContent)
		{
			using func_t = decltype(&BGSSaveLoadManager::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::LoadGame };
			return func(this, apFileName, aiDeviceID, abOutputStats, abIgnoreMissingContent);
		}

		void Autosave()
		{
			using func_t = decltype(&BGSSaveLoadManager::Autosave);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::Autosave };
			func(this);
		}

		bool IsSavingAllowed(bool abAutosave)
		{
			using func_t = decltype(&BGSSaveLoadManager::IsSavingAllowed);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::IsSavingAllowed };
			return func(this, abAutosave);
		}

		std::int32_t GetMinorVersion()
		{
			using func_t = decltype(&BGSSaveLoadManager::GetMinorVersion);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::GetMinorVersion };
			return func(this);
		}

		void GetVersionInfo(char* apVersionInfo, std::uint32_t aiSize)
		{
			using func_t = decltype(&BGSSaveLoadManager::GetVersionInfo);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::GetVersionInfo };
			func(this, apVersionInfo, aiSize);
		}

		void SetMostRecentSaveGame(char const* apSaveFileName, std::int32_t aiDeviceID)
		{
			using func_t = decltype(&BGSSaveLoadManager::SetMostRecentSaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::SetMostRecentSaveGame };
			func(this, apSaveFileName, aiDeviceID);
		}

		bool LoadMostRecentSaveGame()
		{
			using func_t = decltype(&BGSSaveLoadManager::LoadMostRecentSaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::LoadMostRecentSaveGame };
			return func(this);
		}

		void GenerateSaveFileName(char* apSaveFileName, bool abDisplayOnly, bool abAutosave)
		{
			using func_t = decltype(&BGSSaveLoadManager::GenerateSaveFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::GenerateSaveFileName };
			func(this, apSaveFileName, abDisplayOnly, abAutosave);
		}

		bool IsSaveFileNameGenerated(char const* apSaveFileName)
		{
			using func_t = decltype(&BGSSaveLoadManager::IsSaveFileNameGenerated);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::IsSaveFileNameGenerated };
			return func(this, apSaveFileName);
		}

		bool IsSaveFileNameAutosave(char const* apSaveFileName)
		{
			using func_t = decltype(&BGSSaveLoadManager::IsSaveFileNameAutosave);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::IsSaveFileNameAutosave };
			return func(this, apSaveFileName);
		}

		bool IsSaveFileNameQuicksave(char const* apSaveFileName)
		{
			using func_t = decltype(&BGSSaveLoadManager::IsSaveFileNameQuicksave);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::IsSaveFileNameQuicksave };
			return func(this, apSaveFileName);
		}

		bool IsSaveFileNameCustom(char const* apSaveFileName)
		{
			using func_t = decltype(&BGSSaveLoadManager::IsSaveFileNameCustom);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::IsSaveFileNameCustom };
			return func(this, apSaveFileName);
		}

		void GetPlayerLocationName(char* apLocationName)
		{
			using func_t = decltype(&BGSSaveLoadManager::GetPlayerLocationName);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::GetPlayerLocationName };
			func(this, apLocationName);
		}

		void GetPlayTimeString(char* apPlayTimeString, bool abDisplayOnly)
		{
			using func_t = decltype(&BGSSaveLoadManager::GetPlayTimeString);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::GetPlayTimeString };
			func(this, apPlayTimeString, abDisplayOnly);
		}

		void UpdateQueuedSaves()
		{
			using func_t = decltype(&BGSSaveLoadManager::UpdateQueuedSaves);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::UpdateQueuedSaves };
			func(this);
		}

		void CopySaveGames(bool bFromMemoryStick)
		{
			using func_t = decltype(&BGSSaveLoadManager::CopySaveGames);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::CopySaveGames };
			func(this, bFromMemoryStick);
		}

	protected:
		void StartSaveGame()
		{
			using func_t = decltype(&BGSSaveLoadManager::StartSaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::StartSaveGame };
			func(this);
		}

		void EndSaveGame()
		{
			using func_t = decltype(&BGSSaveLoadManager::EndSaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::EndSaveGame };
			func(this);
		}

		void StartLoadGame()
		{
			using func_t = decltype(&BGSSaveLoadManager::StartLoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::StartLoadGame };
			func(this);
		}

		void EndLoadGame()
		{
			using func_t = decltype(&BGSSaveLoadManager::EndLoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::EndLoadGame };
			func(this);
		}

		void SaveGameHeader(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadManager::SaveGameHeader);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::SaveGameHeader };
			func(this, apFile);
		}

		bool LoadGameHeader(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadManager::LoadGameHeader);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::LoadGameHeader };
			return func(this, apFile);
		}

		static void SysUtilDeleteCompleteCallback(BSSaveDataSystemUtility_RESULT aeResult)
		{
			using func_t = decltype(&BGSSaveLoadManager::SysUtilDeleteCompleteCallback);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadManager::SysUtilDeleteCompleteCallback };
			func(aeResult);
		}

	public:
		// members
		BSSimpleList<BGSSaveLoadFileEntry*>* pSaveGameList;                  // 00
		std::uint32_t                        iSaveGameCount;                 // 04
		std::uint32_t                        iCurrentSaveGameNumber;         // 08
		bool                                 bSimulatedMode;                 // 0C
		bool                                 bAutosaveDisabledForDiskspace;  // 0D
		bool                                 bhandledCorrupt;                // 0E
		std::uint8_t                         cQueuedAutosave;                // 0F
		std::uint8_t                         cQueuedForceSave;               // 10
		std::uint8_t                         pad11[0x3];                     // 11
		char*                                pMostRecentSaveGame;            // 14
		std::int32_t                         iMostRecentSaveGameDeviceID;    // 18
		bool                                 bSysUtilHasSaveData;            // 1C
		std::uint8_t                         pad1D[0x3];                     // 1D
		BGSSaveLoadFile*                     pSaveLoadFile;                  // 20
		bool                                 bReturnedFromSysUtil;           // 24
		bool                                 bSysUtilLoadDataComplete;       // 25
		bool                                 bStartMenuLoading;              // 26
		std::uint8_t                         pad27;                          // 27
		void*                                pSysUtilSaveCompleteCallback;   // 28?
		void*                                pSysUtilLoadCompleteCallback;   // 2C?
	};
}
