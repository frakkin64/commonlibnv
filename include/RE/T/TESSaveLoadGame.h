#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiTLargePrimitiveArray.h"
#include "RE/S/SavedPlayerData.h"

namespace RE
{
	class Actor;
	class BSFile;
	class ChangesMap;
	class CreatedReferenceData;
	class ExteriorCellNewReferencesMap;
	class FormAndFlags;
	class InteriorCellNewReferencesMap;
	class LoadFormHeader;
	class MovedReferenceData;
	class NiPoint3;
	class NiTexture;
	class NumericIDBufferMap;
	class SaveFormHeader;
	class SaveGameFile;
	class SaveStats;
	class TESForm;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESPackage;

	class TESSaveLoadGame
	{
	public:
		bool GetLoading()
		{
			using func_t = decltype(&TESSaveLoadGame::GetLoading);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetLoading };
			return func(this);
		}

		LoadFormHeader* GetCurrentlyLoadingFormHeader()
		{
			using func_t = decltype(&TESSaveLoadGame::GetCurrentlyLoadingFormHeader);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetCurrentlyLoadingFormHeader };
			return func(this);
		}

		SaveFormHeader* GetCurrentlySavingFormHeader()
		{
			using func_t = decltype(&TESSaveLoadGame::GetCurrentlySavingFormHeader);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetCurrentlySavingFormHeader };
			return func(this);
		}

		bool GetRevertBefore()
		{
			using func_t = decltype(&TESSaveLoadGame::GetRevertBefore);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetRevertBefore };
			return func(this);
		}

		TESSaveLoadGame* ctor()
		{
			using func_t = TESSaveLoadGame*(__thiscall*)(TESSaveLoadGame*);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ctor };
			return func(this);
		}

		void ResetCurrentVersion()
		{
			using func_t = decltype(&TESSaveLoadGame::ResetCurrentVersion);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ResetCurrentVersion };
			func(this);
		}

		void RemoveChanges(TESForm* apForm, bool abForceRemove)
		{
			using func_t = decltype(&TESSaveLoadGame::RemoveChanges);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::RemoveChanges };
			func(this, apForm, abForceRemove);
		}

		bool SaveGame(BSFile* pFile, char const* apFileName, bool abLogStats)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveGame };
			return func(this, pFile, apFileName, abLogStats);
		}

		void DeleteSaveGame(BSFile* apFile, char const* sFileName)
		{
			using func_t = decltype(&TESSaveLoadGame::DeleteSaveGame);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::DeleteSaveGame };
			func(this, apFile, sFileName);
		}

		void SaveGameDataOLD(void* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveGameDataOLD };
			func(this, apData, aiSize);
		}

		void LoadGameDataOLD(void* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadGameDataOLD };
			func(this, apData, aiSize);
		}

		void SaveNumericID(std::uint32_t* apFormID, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveNumericID);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveNumericID };
			func(this, apFormID, aiSize);
		}

		bool LoadNumericID(std::uint32_t* apFormID, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadNumericID);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadNumericID };
			return func(this, apFormID, aiSize);
		}

		std::uint32_t ReadFile(BSFile* apFile, void* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::ReadFile);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ReadFile };
			return func(this, apFile, apData, aiSize);
		}

		void AdvanceBuffer(std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::AdvanceBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::AdvanceBuffer };
			func(this, aiSize);
		}

		bool LoadForm(TESForm* apForm)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadForm);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadForm };
			return func(this, apForm);
		}

		void InitForms(NiTLargePrimitiveArray<FormAndFlags*>* apInitArray, FormAndFlags* apPlayerFlags, bool abForceLoadModels)
		{
			using func_t = decltype(&TESSaveLoadGame::InitForms);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::InitForms };
			func(this, apInitArray, apPlayerFlags, abForceLoadModels);
		}

		std::uint32_t CheckFlags(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESSaveLoadGame::CheckFlags);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CheckFlags };
			return func(this, apForm, aiFlags);
		}

		bool LoadCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadCell);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadCell };
			return func(this, apCell);
		}

		TESPackage* CreatePackage(std::uint32_t aiFormID, std::uint8_t cPackType)
		{
			using func_t = decltype(&TESSaveLoadGame::CreatePackage);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CreatePackage };
			return func(this, aiFormID, cPackType);
		}

		void ClearFormID(std::uint32_t aiFormID)
		{
			using func_t = decltype(&TESSaveLoadGame::ClearFormID);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ClearFormID };
			func(this, aiFormID);
		}

		void DeleteForm(TESForm* apForm)
		{
			using func_t = decltype(&TESSaveLoadGame::DeleteForm);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::DeleteForm };
			func(this, apForm);
		}

		std::uint32_t ComputeArmorHash(Actor* apActor)
		{
			using func_t = decltype(&TESSaveLoadGame::ComputeArmorHash);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ComputeArmorHash };
			return func(this, apActor);
		}

		void BuildChangesString(char* apString, TESForm* apForm, std::uint32_t aiFlags, std::uint8_t acFormType, bool abVerbose)
		{
			using func_t = decltype(&TESSaveLoadGame::BuildChangesString);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::BuildChangesString };
			func(this, apString, apForm, aiFlags, acFormType, abVerbose);
		}

		void QueueAttachedAnimationLoad(TESObjectREFR* apRef, std::uint16_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::QueueAttachedAnimationLoad);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::QueueAttachedAnimationLoad };
			func(this, apRef, aiSize);
		}

		void QueueHavokDataLoad(TESObjectREFR* apRef, std::uint16_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::QueueHavokDataLoad);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::QueueHavokDataLoad };
			func(this, apRef, aiSize);
		}

		void FinalizeQueuedForms()
		{
			using func_t = decltype(&TESSaveLoadGame::FinalizeQueuedForms);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::FinalizeQueuedForms };
			func(this);
		}

		void LoadQueuedData(bool abUpdateWorld)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadQueuedData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadQueuedData };
			func(this, abUpdateWorld);
		}

		NiTexture* GetSaveGameDataOLD(BSFile* apFile, std::uint32_t* apSaveGameNumber, char* apPlayerName, char* apLevel, char* apLocationName, char* apDay, char* apFileDate, char* apTotalPlayingTime, std::int32_t* apScreenShotHeight, bool abSkipPrep)
		{
			using func_t = decltype(&TESSaveLoadGame::GetSaveGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetSaveGameDataOLD };
			return func(this, apFile, apSaveGameNumber, apPlayerName, apLevel, apLocationName, apDay, apFileDate, apTotalPlayingTime, apScreenShotHeight, abSkipPrep);
		}

		NiTexture* ReadSaveGameDataOLD(BSFile* apFile, std::uint32_t aiSize, std::uint32_t* apSaveGameNumber, char* apPlayerName, std::uint16_t* apLevel, char* apLocationName, float* apGameDate, _SYSTEMTIME* apFileDate, std::uint32_t* apTotalPlayingTime, std::int32_t* apScreenShotHeight)
		{
			using func_t = decltype(&TESSaveLoadGame::ReadSaveGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ReadSaveGameDataOLD };
			return func(this, apFile, aiSize, apSaveGameNumber, apPlayerName, apLevel, apLocationName, apGameDate, apFileDate, apTotalPlayingTime, apScreenShotHeight);
		}

		void RetrieveSaveGameDataOLD(BSFile* apFile, std::uint32_t* apSaveGameNumber, char* apLevel, char* apTotalPlayingTime, _FILETIME* apFileTime, char* apFileName)
		{
			using func_t = decltype(&TESSaveLoadGame::RetrieveSaveGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::RetrieveSaveGameDataOLD };
			func(this, apFile, apSaveGameNumber, apLevel, apTotalPlayingTime, apFileTime, apFileName);
		}

		bool GetSavingAllowed()
		{
			using func_t = decltype(&TESSaveLoadGame::GetSavingAllowed);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetSavingAllowed };
			return func(this);
		}

		void AddCreatedBaseObject(TESForm* apForm)
		{
			using func_t = decltype(&TESSaveLoadGame::AddCreatedBaseObject);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::AddCreatedBaseObject };
			func(this, apForm);
		}

		std::uint32_t GetNumericIDFromArray(std::uint32_t aiFormIDIndex)
		{
			using func_t = decltype(&TESSaveLoadGame::GetNumericIDFromArray);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetNumericIDFromArray };
			return func(this, aiFormIDIndex);
		}

		void UpdateLoadingSequence()
		{
			using func_t = decltype(&TESSaveLoadGame::UpdateLoadingSequence);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::UpdateLoadingSequence };
			func(this);
		}

		void SetCurrentVersion(std::uint8_t acVersion)
		{
			using func_t = decltype(&TESSaveLoadGame::SetCurrentVersion);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SetCurrentVersion };
			func(this, acVersion);
		}

		void TestAllCells(std::uint32_t aiControl)
		{
			using func_t = decltype(&TESSaveLoadGame::TestAllCells);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::TestAllCells };
			func(this, aiControl);
		}

		void ResetVersions()
		{
			using func_t = decltype(&TESSaveLoadGame::ResetVersions);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ResetVersions };
			func(this);
		}

		bool UseSaveGameBlocks()
		{
			using func_t = decltype(&TESSaveLoadGame::UseSaveGameBlocks);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::UseSaveGameBlocks };
			return func(this);
		}

		bool IsInvalidPoint(NiPoint3* apPoint)
		{
			using func_t = decltype(&TESSaveLoadGame::IsInvalidPoint);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::IsInvalidPoint };
			return func(this, apPoint);
		}

		void SafetyCheckReferencePositionAndAngle(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESSaveLoadGame::SafetyCheckReferencePositionAndAngle);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SafetyCheckReferencePositionAndAngle };
			func(this, apRef);
		}

		void CleanUpExpiredData()
		{
			using func_t = decltype(&TESSaveLoadGame::CleanUpExpiredData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CleanUpExpiredData };
			func(this);
		}

		void AllowChanges(bool abAllow)
		{
			using func_t = decltype(&TESSaveLoadGame::AllowChanges);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::AllowChanges };
			func(this, abAllow);
		}

		bool UnloadForm(TESForm* apForm)
		{
			using func_t = decltype(&TESSaveLoadGame::UnloadForm);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::UnloadForm };
			return func(this, apForm);
		}

		std::uint8_t GetCurrentVersion()
		{
			using func_t = decltype(&TESSaveLoadGame::GetCurrentVersion);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetCurrentVersion };
			return func(this);
		}

	protected:
		void LoadAnimationForReference(TESObjectREFR* apRef, std::uint32_t aiFormID, void* apBuffer)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadAnimationForReference);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadAnimationForReference };
			func(this, apRef, aiFormID, apBuffer);
		}

		void LoadHavokDataForReference(TESObjectREFR* apRef, void* apBuffer)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadHavokDataForReference);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadHavokDataForReference };
			func(this, apRef, apBuffer);
		}

	private:
		bool ResetReferencePosition(TESObjectREFR* apRef, bool abTemporaryMove)
		{
			using func_t = decltype(&TESSaveLoadGame::ResetReferencePosition);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::ResetReferencePosition };
			return func(this, apRef, abTemporaryMove);
		}

		void SaveGlobalData(BSFile* apFile)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveGlobalData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveGlobalData };
			func(this, apFile);
		}

		void SaveGlobals(BSFile* apFile)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveGlobals);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveGlobals };
			func(this, apFile);
		}

		void SaveFinalData(BSFile* apFile)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveFinalData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveFinalData };
			func(this, apFile);
		}

		void* CreateBuffer(std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::CreateBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CreateBuffer };
			return func(this, aiSize);
		}

		void SaveBuffer(BSFile* apFile, void* apBuffer, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveBuffer };
			func(this, apFile, apBuffer, aiSize);
		}

		void DestroyBuffer(void* apBuffer)
		{
			using func_t = decltype(&TESSaveLoadGame::DestroyBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::DestroyBuffer };
			func(this, apBuffer);
		}

		std::uint32_t CheckNewReference(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESSaveLoadGame::CheckNewReference);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CheckNewReference };
			return func(this, apForm, aiFlags);
		}

		void CreateChangedReference(std::uint32_t aiReferenceID)
		{
			using func_t = decltype(&TESSaveLoadGame::CreateChangedReference);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CreateChangedReference };
			func(this, aiReferenceID);
		}

		TESForm* CreateReference(std::uint32_t aiFormID, CreatedReferenceData* apCreatedData)
		{
			using func_t = decltype(&TESSaveLoadGame::CreateReference);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CreateReference };
			return func(this, aiFormID, apCreatedData);
		}

		TESForm* CreateReferenceFromFile(std::uint32_t aiFormID, MovedReferenceData* apMovedData)
		{
			using func_t = decltype(&TESSaveLoadGame::CreateReferenceFromFile);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::CreateReferenceFromFile };
			return func(this, aiFormID, apMovedData);
		}

		std::uint16_t GetInitialDataSaveSize(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESSaveLoadGame::GetInitialDataSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GetInitialDataSaveSize };
			return func(this, apForm, aiFlags);
		}

		void SaveInitialData(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveInitialData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveInitialData };
			func(this, apForm, aiFlags);
		}

		void LoadInitialData(TESForm* apForm, std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadInitialData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadInitialData };
			func(this, apForm, aiFlags);
		}

		void SavePluginList(BSFile* apFile)
		{
			using func_t = decltype(&TESSaveLoadGame::SavePluginList);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SavePluginList };
			func(this, apFile);
		}

		void QueueBufferLoad(NumericIDBufferMap* apMap, std::uint32_t aiFormID, std::uint16_t aiSize)
		{
			using func_t = decltype(&TESSaveLoadGame::QueueBufferLoad);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::QueueBufferLoad };
			func(this, apMap, aiFormID, aiSize);
		}

		void LoadAnimations()
		{
			using func_t = decltype(&TESSaveLoadGame::LoadAnimations);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadAnimations };
			func(this);
		}

		void LoadAttachedAnimations()
		{
			using func_t = decltype(&TESSaveLoadGame::LoadAttachedAnimations);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadAttachedAnimations };
			func(this);
		}

		void LoadCharControllers()
		{
			using func_t = decltype(&TESSaveLoadGame::LoadCharControllers);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadCharControllers };
			func(this);
		}

		void LoadHavokData()
		{
			using func_t = decltype(&TESSaveLoadGame::LoadHavokData);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadHavokData };
			func(this);
		}

		void GenerateSaveGameFileName(char* apFileName)
		{
			using func_t = decltype(&TESSaveLoadGame::GenerateSaveGameFileName);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::GenerateSaveGameFileName };
			func(this, apFileName);
		}

		std::uint32_t LoadHeader(BSFile* apFile, bool abFullLoad)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadHeader);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadHeader };
			return func(this, apFile, abFullLoad);
		}

		void SaveHeader(BSFile* apFile, char const* apFileName)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveHeader);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveHeader };
			func(this, apFile, apFileName);
		}

		void SaveCreatedBaseObjects(BSFile* apFile)
		{
			using func_t = decltype(&TESSaveLoadGame::SaveCreatedBaseObjects);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::SaveCreatedBaseObjects };
			func(this, apFile);
		}

		void LoadNumericIDArrays(BSFile* apFile)
		{
			using func_t = decltype(&TESSaveLoadGame::LoadNumericIDArrays);
			static REL::Relocation<func_t> func{ Offsets::TESSaveLoadGame::LoadNumericIDArrays };
			func(this, apFile);
		}

	public:
		// members
		ChangesMap*                            m_pChanges;                           // 00
		ChangesMap*                            m_pNewChanges;                        // 04
		InteriorCellNewReferencesMap*          m_pInteriorCellMap;                   // 08
		ExteriorCellNewReferencesMap*          m_pExteriorCellMap;                   // 0C
		ExteriorCellNewReferencesMap*          m_pCreatedExteriorCells;              // 10
		void*                                  m_pBuffer;                            // 14
		std::uint32_t                          m_iSaveLoadStates;                    // 18
		bool                                   m_bAllowChanges;                      // 1C
		std::uint8_t                           pad1D[0x3];                           // 1D
		NiTLargePrimitiveArray<FormAndFlags*>* m_pInitArray;                         // 20
		BSSimpleList<std::uint32_t>            m_MovedReferencesList;                // 24
		BSSimpleList<std::uint32_t>            m_CreatedBaseObjectsList;             // 2C
		BSSimpleList<TESForm*>                 m_DeferredDeleteList;                 // 34
		BSSimpleList<TESForm*>                 m_DeferredInitActorPackageList;       // 3C
		SaveStats*                             m_pSaveLoadStats;                     // 44
		std::int32_t                           m_iRevertState;                       // 48
		std::uint8_t                           m_iSavedPluginCount;                  // 4C
		std::uint8_t                           pad4D[0x3];                           // 4D
		std::uint8_t*                          m_pFileIndexArray;                    // 50
		std::uint32_t                          m_iQueuedRemoveChanges;               // 54
		NumericIDBufferMap*                    m_pAnimationMap;                      // 58
		NumericIDBufferMap*                    m_pAttachedAnimationMap;              // 5C
		NumericIDBufferMap*                    m_pCharControllerMap;                 // 60
		NumericIDBufferMap*                    m_pHavokDataMap;                      // 64
		BSSimpleList<TESForm*>                 m_QueuedFormList;                     // 68
		BSSimpleList<SaveGameFile*>*           m_pSaveGameList;                      // 70
		std::uint8_t                           m_cMajorVersion;                      // 74
		std::uint8_t                           m_cMinorVersion;                      // 75
		std::uint16_t                          pad76;                                // 76
		NiTLargePrimitiveArray<std::uint32_t>* m_pNumericIDArray;                    // 78
		NiTLargePrimitiveArray<std::uint32_t>* m_pWorldSpaceIDArray;                 // 7C
		std::uint8_t                           m_cCurrentVersion;                    // 80
		bool                                   m_bUseNumericIDArray;                 // 81
		std::uint16_t                          pad82;                                // 82
		LoadFormHeader*                        m_pCurrentlyLoadingFormHeader;        // 84
		SaveFormHeader*                        m_pCurrentlySavingFormHeader;         // 88
		std::uint32_t                          m_iNextSaveNumber;                    // 8C
		std::uint32_t                          m_iFileStartPosition;                 // 90
		std::uint32_t                          m_iSimulationFileSize;                // 94
		_SYSTEMTIME                            m_OriginalSaveTime;                   // 98
		std::uint32_t                          m_iOriginalSaveVersion;               // A8
		bool                                   m_bReconstructedAllObjects;           // AC
		bool                                   m_bLoadingFromMainMenu;               // AD
		bool                                   m_bAutosaveDisabledDueToLackOfSpace;  // AE
		bool                                   m_bQuickloading;                      // AF
		NiTLargePrimitiveArray<TESForm*>*      m_pInitItemArray;                     // B0
		SavedPlayerData                        m_SavedPlayerData;                    // B4
		_FILETIME*                             m_pMostRecentSaveGame;                // 1C4
	};
	static_assert(sizeof(TESSaveLoadGame) == 0x1C8);
}
