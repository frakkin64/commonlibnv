#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiTMap.h"
#include "RE/Q/QUEUED_SUB_BUFFER_TYPE.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSReconstructFormsInAllFilesMap;
	class BGSSaveLoadChangesMap;
	class BGSSaveLoadFile;
	class BGSSaveLoadFormIDMap;
	class BGSSaveLoadHistory;
	class BGSSaveLoadQueuedSubBufferMap;
	class BGSSaveLoadReferencesMap;
	class TESForm;
	class TESObjectCELL;

	class BGSSaveLoadGame
	{
	public:
		bool GetReconstructingForms()
		{
			using func_t = decltype(&BGSSaveLoadGame::GetReconstructingForms);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::GetReconstructingForms };
			return func(this);
		}

		bool GetSaveGameLoading()
		{
			using func_t = decltype(&BGSSaveLoadGame::GetSaveGameLoading);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::GetSaveGameLoading };
			return func(this);
		}

		bool SetThreadAllowChanges(bool abValue)
		{
			using func_t = decltype(&BGSSaveLoadGame::SetThreadAllowChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::SetThreadAllowChanges };
			return func(this, abValue);
		}

		bool GetSaveGameSaving()
		{
			using func_t = decltype(&BGSSaveLoadGame::GetSaveGameSaving);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::GetSaveGameSaving };
			return func(this);
		}

		bool GetAllowChanges()
		{
			using func_t = decltype(&BGSSaveLoadGame::GetAllowChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::GetAllowChanges };
			return func(this);
		}

		bool SetGlobalAllowChanges(bool abValue)
		{
			using func_t = decltype(&BGSSaveLoadGame::SetGlobalAllowChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::SetGlobalAllowChanges };
			return func(this, abValue);
		}

		BGSSaveLoadGame* ctor()
		{
			using func_t = BGSSaveLoadGame*(__thiscall*)(BGSSaveLoadGame*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSSaveLoadGame*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::dtor };
			func(this);
		}

		void SetSaveGameSaving(bool abValue)
		{
			using func_t = decltype(&BGSSaveLoadGame::SetSaveGameSaving);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::SetSaveGameSaving };
			func(this, abValue);
		}

		void RevertCurrentChanges(BGSSaveLoadChangesMap* apNewChangesMap, BGSSaveLoadFormIDMap* apOldFormIDMap)
		{
			using func_t = decltype(&BGSSaveLoadGame::RevertCurrentChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::RevertCurrentChanges };
			func(this, apNewChangesMap, apOldFormIDMap);
		}

		void InitForms(bool abLoadModels)
		{
			using func_t = decltype(&BGSSaveLoadGame::InitForms);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::InitForms };
			func(this, abLoadModels);
		}

		void LoadForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSSaveLoadGame::LoadForm);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::LoadForm };
			func(this, apForm);
		}

		void UnloadForm(TESForm* apForm, bool abUnloadWhileLoadingSaveGame)
		{
			using func_t = decltype(&BGSSaveLoadGame::UnloadForm);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::UnloadForm };
			func(this, apForm, abUnloadWhileLoadingSaveGame);
		}

		void LoadCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&BGSSaveLoadGame::LoadCell);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::LoadCell };
			func(this, apCell);
		}

		bool ShouldAddChanges(TESForm* apForm, bool abForceAdd)
		{
			using func_t = decltype(&BGSSaveLoadGame::ShouldAddChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::ShouldAddChanges };
			return func(this, apForm, abForceAdd);
		}

		void AddChange(TESForm* apForm, BGSChangeFlags aiChanges, bool abForceAdd)
		{
			using func_t = decltype(&BGSSaveLoadGame::AddChange);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::AddChange };
			func(this, apForm, aiChanges, abForceAdd);
		}

		bool GetChange(TESForm* apForm, BGSChangeFlags aiChanges)
		{
			using func_t = decltype(&BGSSaveLoadGame::GetChange);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::GetChange };
			return func(this, apForm, aiChanges);
		}

		bool GetOldChange(TESForm* apForm, BGSChangeFlags aiChanges)
		{
			using func_t = decltype(&BGSSaveLoadGame::GetOldChange);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::GetOldChange };
			return func(this, apForm, aiChanges);
		}

		bool ShouldRemoveChanges(TESForm* apForm)
		{
			using func_t = decltype(&BGSSaveLoadGame::ShouldRemoveChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::ShouldRemoveChanges };
			return func(this, apForm);
		}

		void RemoveChange(TESForm* apForm, BGSChangeFlags aiChanges)
		{
			using func_t = decltype(&BGSSaveLoadGame::RemoveChange);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::RemoveChange };
			func(this, apForm, aiChanges);
		}

		void RemoveChanges(TESForm* apForm)
		{
			using func_t = decltype(&BGSSaveLoadGame::RemoveChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::RemoveChanges };
			func(this, apForm);
		}

		void QueueSubBuffer(QUEUED_SUB_BUFFER_TYPE aeType, BGSLoadFormBuffer* apLoadFormBuffer, TESForm* apParentForm)
		{
			using func_t = decltype(&BGSSaveLoadGame::QueueSubBuffer);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::QueueSubBuffer };
			func(this, aeType, apLoadFormBuffer, apParentForm);
		}

		void RevertAllChanges()
		{
			using func_t = decltype(&BGSSaveLoadGame::RevertAllChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::RevertAllChanges };
			func(this);
		}

		void ClearForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSSaveLoadGame::ClearForm);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::ClearForm };
			func(this, apForm);
		}

		void ClearFormID(std::uint32_t aiFormID)
		{
			using func_t = decltype(&BGSSaveLoadGame::ClearFormID);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::ClearFormID };
			func(this, aiFormID);
		}

		void DeleteForm(TESForm* apForm)
		{
			using func_t = decltype(&BGSSaveLoadGame::DeleteForm);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::DeleteForm };
			func(this, apForm);
		}

		void AddChangedFormID(std::uint32_t aiOldFormID, std::uint32_t aiNewFormID)
		{
			using func_t = decltype(&BGSSaveLoadGame::AddChangedFormID);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::AddChangedFormID };
			func(this, aiOldFormID, aiNewFormID);
		}

		void CleanupExpiredData()
		{
			using func_t = decltype(&BGSSaveLoadGame::CleanupExpiredData);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::CleanupExpiredData };
			func(this);
		}

	protected:
		void SavePluginList(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadGame::SavePluginList);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::SavePluginList };
			func(this, apFile);
		}

		bool LoadPluginList(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadGame::LoadPluginList);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::LoadPluginList };
			return func(this, apFile);
		}

		void SaveGame(BGSSaveLoadFile* apFile)
		{
			using func_t = decltype(&BGSSaveLoadGame::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::SaveGame };
			func(this, apFile);
		}

		bool LoadGame(BGSSaveLoadFile* apFile, bool abIgnoreMissingContent)
		{
			using func_t = decltype(&BGSSaveLoadGame::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::LoadGame };
			return func(this, apFile, abIgnoreMissingContent);
		}

		std::uint32_t CheckInitialData(BGSSaveLoadFile* apFile, BGSLoadFormBuffer* apLoadGameBuffer, BGSSaveLoadFormIDMap* apOldFormIDMap)
		{
			using func_t = decltype(&BGSSaveLoadGame::CheckInitialData);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::CheckInitialData };
			return func(this, apFile, apLoadGameBuffer, apOldFormIDMap);
		}

		bool HandleUnrevertibleChanges(TESForm*& arpForm, BGSChangeFlags aiUnrevertibleChanges, bool abRevertOnly)
		{
			using func_t = decltype(&BGSSaveLoadGame::HandleUnrevertibleChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::HandleUnrevertibleChanges };
			return func(this, arpForm, aiUnrevertibleChanges, abRevertOnly);
		}

		void QueueInitPackageLocations(Actor* apActor)
		{
			using func_t = decltype(&BGSSaveLoadGame::QueueInitPackageLocations);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadGame::QueueInitPackageLocations };
			func(this, apActor);
		}

	public:
		// members
		BGSSaveLoadChangesMap*                  pChangesMap;                         // 00
		BGSSaveLoadChangesMap*                  pOldChangesMap;                      // 04
		BGSSaveLoadFormIDMap*                   pFormIDMap;                          // 08
		BGSSaveLoadFormIDMap*                   pWorldspaceFormIDMap;                // 0C
		BGSSaveLoadReferencesMap*               pReferencesMap;                      // 10
		BGSSaveLoadQueuedSubBufferMap*          pQueuedSubBuffersMap;                // 14
		NiTMap<std::uint32_t, std::uint32_t>*   pChangedFormIDMap;                   // 18
		BGSSaveLoadHistory*                     pHistory;                            // 1C
		BGSReconstructFormsInAllFilesMap*       pReconstructForms;                   // 20
		BSSimpleArray<BGSLoadFormBuffer*, 1024> FormBufferArray;                     // 24
		NiTMap<std::uint32_t, Actor*>           QueuedInitPackageLocationsActorMap;  // 34
		std::uint8_t                            cFileIndexArray[255];                // 44
		std::uint8_t                            cReverseFileIndexArray[255];         // 143
		std::uint16_t                           pad242;                              // 242
		std::uint32_t                           iGlobalFlags;                        // 244
		std::uint8_t                            cCurrentMinorVersion;                // 248
		std::uint8_t                            pad249[0x3];                         // 249
	};
	static_assert(sizeof(BGSSaveLoadGame) == 0x24C);
}
