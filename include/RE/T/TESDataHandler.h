#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/D/DAT_ERROR.h"
#include "RE/N/NiTList.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BGSAcousticSpace;
	class BGSAddonNode;
	class BGSBodyPartData;
	class BGSCameraShot;
	class BGSDebris;
	class BGSDehydrationStage;
	class BGSEncounterZone;
	class BGSExplosion;
	class BGSHeadPart;
	class BGSHungerStage;
	class BGSImpactData;
	class BGSImpactDataSet;
	class BGSLightingTemplate;
	class BGSListForm;
	class BGSMenuIcon;
	class BGSMessage;
	class BGSMusicType;
	class BGSNote;
	class BGSPerk;
	class BGSPrimitive;
	class BGSProjectile;
	class BGSRadiationStage;
	class BGSRagdoll;
	class BGSSleepDeprevationStage;
	class BGSVoiceType;
	class EnchantmentItem;
	class InventoryChanges;
	class ItemChange;
	class MediaLocationController;
	class MediaSet;
	class NiAVObject;
	class NiPoint3;
	class Script;
	class SpellItem;
	class TESAmmoEffect;
	class TESBoundObject;
	class TESCaravanDeck;
	class TESCasino;
	class TESChallenge;
	class TESClass;
	class TESClimate;
	class TESCombatStyle;
	class TESEffectShader;
	class TESEyes;
	class TESFaction;
	class TESFile;
	class TESForm;
	class TESGlobal;
	class TESHair;
	class TESImageSpace;
	class TESImageSpaceModifier;
	class TESLandTexture;
	class TESLoadScreen;
	class TESLoadScreenType;
	class TESObjectANIO;
	class TESObjectCELL;
	class TESObjectList;
	class TESObjectREFR;
	class TESPackage;
	class TESQuest;
	class TESRace;
	class TESRecipe;
	class TESRecipeCategory;
	class TESRegionDataManager;
	class TESRegionList;
	class TESReputation;
	class TESSound;
	class TESTopic;
	class TESTopicInfo;
	class TESWaterForm;
	class TESWeather;
	class TESWorldSpace;

	class TESDataHandler
	{
	public:
		[[nodiscard]] static TESDataHandler* GetSingleton() noexcept
		{
			static REL::Relocation<TESDataHandler**> singleton{ Offsets::TESDataHandler::pSingleton };
			return *singleton;
		}

		bool GetClearingData()
		{
			using func_t = decltype(&TESDataHandler::GetClearingData);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetClearingData };
			return func(this);
		}

		void SetClearingData(bool abNewbool)
		{
			using func_t = decltype(&TESDataHandler::SetClearingData);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::SetClearingData };
			func(this, abNewbool);
		}

		bool GetSaveLoad()
		{
			using func_t = decltype(&TESDataHandler::GetSaveLoad);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetSaveLoad };
			return func(this);
		}

		BSSimpleList<TESQuest*>* GetQuestList()
		{
			using func_t = decltype(&TESDataHandler::GetQuestList);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetQuestList };
			return func(this);
		}

		BSSimpleList<TESWaterForm*>* GetWaterList()
		{
			using func_t = decltype(&TESDataHandler::GetWaterList);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetWaterList };
			return func(this);
		}

		BSSimpleList<TESFile*>* GetFileList()
		{
			using func_t = decltype(&TESDataHandler::GetFileList);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetFileList };
			return func(this);
		}

		bool ClearData()
		{
			using func_t = decltype(&TESDataHandler::ClearData);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::ClearData };
			return func(this);
		}

		static bool LoadForm(TESForm* pForm, TESFile* pFile)
		{
			using func_t = decltype(&TESDataHandler::LoadForm);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::LoadForm };
			return func(pForm, pFile);
		}

		bool SaveForm(TESForm* pForm, bool master)
		{
			using func_t = decltype(&TESDataHandler::SaveForm);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::SaveForm };
			return func(this, pForm, master);
		}

		void CloseAllTES()
		{
			using func_t = decltype(&TESDataHandler::CloseAllTES);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CloseAllTES };
			func(this);
		}

		bool AddFormToDataHandler(TESForm* pNew)
		{
			using func_t = decltype(&TESDataHandler::AddFormToDataHandler);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::AddFormToDataHandler };
			return func(this, pNew);
		}

		BSSimpleList<BGSPerk*>* GetPerkList()
		{
			using func_t = decltype(&TESDataHandler::GetPerkList);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetPerkList };
			return func(this);
		}

		BSSimpleList<TESTopic*>* GetTopicList()
		{
			using func_t = decltype(&TESDataHandler::GetTopicList);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetTopicList };
			return func(this);
		}

		TESObjectCELL* NewCell(char* apName, std::int32_t aiX, std::int32_t aiY, TESWorldSpace* apWorldSpace)
		{
			using func_t = decltype(&TESDataHandler::NewCell);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::NewCell };
			return func(this, apName, aiX, aiY, apWorldSpace);
		}

		void UpdateAutoCalcNPCs()
		{
			using func_t = decltype(&TESDataHandler::UpdateAutoCalcNPCs);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::UpdateAutoCalcNPCs };
			func(this);
		}

		TESClass* GetClass(std::uint32_t aiSearchID)
		{
			using func_t = decltype(&TESDataHandler::GetClass);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetClass };
			return func(this, aiSearchID);
		}

		TESFaction* GetFaction(std::uint32_t aiSearchID)
		{
			using func_t = decltype(&TESDataHandler::GetFaction);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetFaction };
			return func(this, aiSearchID);
		}

		TESReputation* GetReputation(std::uint32_t aiSearchID)
		{
			using func_t = decltype(&TESDataHandler::GetReputation);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetReputation };
			return func(this, aiSearchID);
		}

		TESSound* GetSound(char const* soundID)
		{
			using func_t = decltype(&TESDataHandler::GetSound);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetSound };
			return func(this, soundID);
		}

		BGSAddonNode* GetAddonNode(std::uint32_t aiIndex)
		{
			using func_t = decltype(&TESDataHandler::GetAddonNode);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetAddonNode };
			return func(this, aiIndex);
		}

		void AddAddonNode(BGSAddonNode* apAddonNode)
		{
			using func_t = decltype(&TESDataHandler::AddAddonNode);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::AddAddonNode };
			func(this, apAddonNode);
		}

		std::uint32_t GetInteriorCellCount()
		{
			using func_t = decltype(&TESDataHandler::GetInteriorCellCount);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetInteriorCellCount };
			return func(this);
		}

		TESObjectCELL* GetInteriorCellByIndex(std::uint32_t aiIndex)
		{
			using func_t = decltype(&TESDataHandler::GetInteriorCellByIndex);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetInteriorCellByIndex };
			return func(this, aiIndex);
		}

		void SortInteriorCells()
		{
			using func_t = decltype(&TESDataHandler::SortInteriorCells);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::SortInteriorCells };
			func(this);
		}

		TESObjectCELL* GetCellFromWorldCoord(float afX, float a_arg2, TESWorldSpace* a_arg3, bool apWorldSpace)
		{
			using func_t = decltype(&TESDataHandler::GetCellFromWorldCoord);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetCellFromWorldCoord };
			return func(this, afX, a_arg2, a_arg3, apWorldSpace);
		}

		TESObjectCELL* GetCellFromCellCoord(std::int32_t aiX, std::int32_t apWorldSpace, TESWorldSpace* abCreateCell, bool a_arg4)
		{
			using func_t = decltype(&TESDataHandler::GetCellFromCellCoord);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetCellFromCellCoord };
			return func(this, aiX, apWorldSpace, abCreateCell, a_arg4);
		}

		TESWorldSpace* GetExtCellDataFromFileByEditorID(char const* apCellID, std::int32_t& aiOutX, std::int32_t& aiOutY)
		{
			using func_t = decltype(&TESDataHandler::GetExtCellDataFromFileByEditorID);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetExtCellDataFromFileByEditorID };
			return func(this, apCellID, aiOutX, aiOutY);
		}

		void UnloadCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESDataHandler::UnloadCell);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::UnloadCell };
			func(this, apCell);
		}

		bool BuildFileList(char* pdirectory)
		{
			using func_t = decltype(&TESDataHandler::BuildFileList);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::BuildFileList };
			return func(this, pdirectory);
		}

		void CreateThreadSafeFiles()
		{
			using func_t = decltype(&TESDataHandler::CreateThreadSafeFiles);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CreateThreadSafeFiles };
			func(this);
		}

		TESFile* GetListFile(char* pname)
		{
			using func_t = decltype(&TESDataHandler::GetListFile);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetListFile };
			return func(this, pname);
		}

		void CleanUpBadForms()
		{
			using func_t = decltype(&TESDataHandler::CleanUpBadForms);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CleanUpBadForms };
			func(this);
		}

		TESFile* GetCompiledFile(std::int32_t index)
		{
			using func_t = decltype(&TESDataHandler::GetCompiledFile);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetCompiledFile };
			return func(this, index);
		}

		static TESForm* CreateFormOfType(std::uint8_t aType)
		{
			using func_t = decltype(&TESDataHandler::CreateFormOfType);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CreateFormOfType };
			return func(aType);
		}

		bool ConstructObject(TESFile* pFile, bool abNoExistingForms, TESForm* apOldForm, bool abIgnoreMissingLastLoadedCell)
		{
			using func_t = decltype(&TESDataHandler::ConstructObject);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::ConstructObject };
			return func(this, pFile, abNoExistingForms, apOldForm, abIgnoreMissingLastLoadedCell);
		}

		std::uint32_t GetNextID()
		{
			using func_t = decltype(&TESDataHandler::GetNextID);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetNextID };
			return func(this);
		}

		bool IsFormIDCreated(std::uint32_t aiFormID)
		{
			using func_t = decltype(&TESDataHandler::IsFormIDCreated);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::IsFormIDCreated };
			return func(this, aiFormID);
		}

		TESObjectREFR* CreateReferenceAtLocation(TESBoundObject* apObject, NiPoint3 const& aLocation, NiPoint3 const& aDirection, TESObjectCELL* apInterior, TESWorldSpace* apWorld, TESObjectREFR* apReference, BGSPrimitive* apAddPrimitive, void* apAdditionalData)
		{
			using func_t = decltype(&TESDataHandler::CreateReferenceAtLocation);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CreateReferenceAtLocation };
			return func(this, apObject, aLocation, aDirection, apInterior, apWorld, apReference, apAddPrimitive, apAdditionalData);
		}

		TESObjectREFR* CreateProjectileAtLocation(TESBoundObject* apObject, NiPoint3 const& aLocation, NiPoint3 const& aDirection, TESObjectCELL* apInterior, TESWorldSpace* apWorld)
		{
			using func_t = decltype(&TESDataHandler::CreateProjectileAtLocation);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CreateProjectileAtLocation };
			return func(this, apObject, aLocation, aDirection, apInterior, apWorld);
		}

		TESObjectREFR* CreateExplosionAtLocation(TESBoundObject* apObject, NiPoint3 const& aLocation, NiPoint3 const& aDirection, TESObjectCELL* apInterior, TESWorldSpace* apWorld)
		{
			using func_t = decltype(&TESDataHandler::CreateExplosionAtLocation);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CreateExplosionAtLocation };
			return func(this, apObject, aLocation, aDirection, apInterior, apWorld);
		}

		void GenerateDefaultObjects()
		{
			using func_t = decltype(&TESDataHandler::GenerateDefaultObjects);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GenerateDefaultObjects };
			func(this);
		}

		void CheckModels(bool abUpdateBounds)
		{
			using func_t = decltype(&TESDataHandler::CheckModels);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CheckModels };
			func(this, abUpdateBounds);
		}

		void CheckTexturesRecurse(NiAVObject* apObject, char const* apModel)
		{
			using func_t = decltype(&TESDataHandler::CheckTexturesRecurse);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CheckTexturesRecurse };
			func(this, apObject, apModel);
		}

		void CheckIcons()
		{
			using func_t = decltype(&TESDataHandler::CheckIcons);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CheckIcons };
			func(this);
		}

		void CheckForNiRawImageData(char* pFilename)
		{
			using func_t = decltype(&TESDataHandler::CheckForNiRawImageData);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CheckForNiRawImageData };
			func(this, pFilename);
		}

		void CreateBarterContainer(TESObjectREFR* apVendor)
		{
			using func_t = decltype(&TESDataHandler::CreateBarterContainer);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::CreateBarterContainer };
			func(this, apVendor);
		}

		void RemoveItemBarterContainer(ItemChange* apitem, std::int32_t aiNumber, TESObjectREFR* apVendor)
		{
			using func_t = decltype(&TESDataHandler::RemoveItemBarterContainer);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::RemoveItemBarterContainer };
			func(this, apitem, aiNumber, apVendor);
		}

		void ClearBarterContainer()
		{
			using func_t = decltype(&TESDataHandler::ClearBarterContainer);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::ClearBarterContainer };
			func(this);
		}

		void SetSaveLoad(bool abNewbool)
		{
			using func_t = decltype(&TESDataHandler::SetSaveLoad);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::SetSaveLoad };
			func(this, abNewbool);
		}

		TESRegionDataManager* GetRegionDataManager()
		{
			using func_t = decltype(&TESDataHandler::GetRegionDataManager);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetRegionDataManager };
			return func(this);
		}

		InventoryChanges* GetBarterContainer()
		{
			using func_t = decltype(&TESDataHandler::GetBarterContainer);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::GetBarterContainer };
			return func(this);
		}

	protected:
		bool IsFormIDInUse(std::uint32_t aiFormID)
		{
			using func_t = decltype(&TESDataHandler::IsFormIDInUse);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::IsFormIDInUse };
			return func(this, aiFormID);
		}

		void DataError(DAT_ERROR error)
		{
			using func_t = decltype(&TESDataHandler::DataError);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::DataError };
			func(this, error);
		}

		std::int32_t IsDLCPackageName(char* apfilename)
		{
			using func_t = decltype(&TESDataHandler::IsDLCPackageName);
			static REL::Relocation<func_t> func{ Offsets::TESDataHandler::IsDLCPackageName };
			return func(this, apfilename);
		}

	public:
		// members
		char                                    cDLCFlags;                     // 00
		std::uint8_t                            pad01[0x3];                    // 01
		TESObjectList*                          pObjectList;                   // 04
		BSSimpleList<TESPackage*>               listPackages;                  // 08
		BSSimpleList<TESWorldSpace*>            listWorldSpaces;               // 10
		BSSimpleList<TESClimate*>               listClimates;                  // 18
		BSSimpleList<TESImageSpace*>            listImageSpaces;               // 20
		BSSimpleList<TESImageSpaceModifier*>    listImageSpaceModifiers;       // 28
		BSSimpleList<TESWeather*>               listWeather;                   // 30
		BSSimpleList<EnchantmentItem*>          listEnchantmentItems;          // 38
		BSSimpleList<SpellItem*>                listSpellItems;                // 40
		BSSimpleList<BGSHeadPart*>              listHeadParts;                 // 48
		BSSimpleList<TESHair*>                  listHair;                      // 50
		BSSimpleList<TESEyes*>                  listEyes;                      // 58
		BSSimpleList<TESRace*>                  listRaces;                     // 60
		BSSimpleList<BGSEncounterZone*>         listZones;                     // 68
		BSSimpleList<TESLandTexture*>           listLandTexts;                 // 70
		BSSimpleList<BGSCameraShot*>            listCameraShots;               // 78
		BSSimpleList<TESClass*>                 listClasses;                   // 80
		BSSimpleList<TESFaction*>               listFactions;                  // 88
		BSSimpleList<TESReputation*>            listReputations;               // 90
		BSSimpleList<TESChallenge*>             listChallenges;                // 98
		BSSimpleList<TESRecipe*>                listRecipes;                   // A0
		BSSimpleList<TESRecipeCategory*>        listRecipeCategories;          // A8
		BSSimpleList<TESAmmoEffect*>            listAmmoEffects;               // B0
		BSSimpleList<TESCasino*>                listCasinos;                   // B8
		BSSimpleList<TESCaravanDeck*>           listCaravanDecks;              // C0
		BSSimpleList<Script*>                   listScripts;                   // C8
		BSSimpleList<TESSound*>                 listSounds;                    // D0
		BSSimpleList<BGSAcousticSpace*>         listAcousticSpaces;            // D8
		BSSimpleList<BGSRagdoll*>               listRagdolls;                  // E0
		BSSimpleList<TESGlobal*>                listGlobals;                   // E8
		BSSimpleList<BGSVoiceType*>             listVoiceTypes;                // F0
		BSSimpleList<BGSImpactData*>            listImpactData;                // F8
		BSSimpleList<BGSImpactDataSet*>         listImpactDataSet;             // 100
		BSSimpleList<TESTopic*>                 listTopics;                    // 108
		BSSimpleList<TESTopicInfo*>             listTopicInfos;                // 110
		BSSimpleList<TESQuest*>                 listQuests;                    // 118
		BSSimpleList<TESCombatStyle*>           listCombatStyles;              // 120
		BSSimpleList<TESLoadScreen*>            listLoadScreens;               // 128
		BSSimpleList<TESWaterForm*>             listWater;                     // 130
		BSSimpleList<TESEffectShader*>          listEffectShaders;             // 138
		BSSimpleList<BGSProjectile*>            listProjectiles;               // 140
		BSSimpleList<BGSExplosion*>             listExplosions;                // 148
		BSSimpleList<BGSRadiationStage*>        listRadiation;                 // 150
		BSSimpleList<BGSDehydrationStage*>      listDehydration;               // 158
		BSSimpleList<BGSHungerStage*>           listHunger;                    // 160
		BSSimpleList<BGSSleepDeprevationStage*> listSleepDeprevation;          // 168
		BSSimpleList<BGSDebris*>                listDebris;                    // 170
		BSSimpleList<BGSPerk*>                  listPerks;                     // 178
		BSSimpleList<BGSBodyPartData*>          listPartData;                  // 180
		BSSimpleList<BGSNote*>                  listNotes;                     // 188
		BSSimpleList<BGSListForm*>              listListForms;                 // 190
		BSSimpleList<BGSMenuIcon*>              listMenuIcons;                 // 198
		BSSimpleList<TESObjectANIO*>            animObjects;                   // 1A0
		BSSimpleList<BGSMessage*>               listMessages;                  // 1A8
		BSSimpleList<BGSLightingTemplate*>      listLightingTemplates;         // 1B0
		BSSimpleList<BGSMusicType*>             listMusicTypes;                // 1B8
		BSSimpleList<TESLoadScreenType*>        listLoadScreenTypes;           // 1C0
		BSSimpleList<MediaSet*>                 listMediaSets;                 // 1C8
		BSSimpleList<MediaLocationController*>  listMediaLocationControllers;  // 1D0
		TESRegionList*                          pRegionList;                   // 1D8
		NiTPrimitiveArray<TESObjectCELL*>       arrayInteriorCells;            // 1DC
		NiTPrimitiveArray<BGSAddonNode*>        arrayAddonNodes;               // 1EC
		NiTList<TESForm*>                       listBadForms;                  // 1FC
		std::uint32_t                           iNextID;                       // 208
		TESFile*                                pActiveFile;                   // 20C
		BSSimpleList<TESFile*>                  listFiles;                     // 210
		std::uint32_t                           iNumCompile;                   // 218
		TESFile*                                pFileIndex[255];               // 21C
		bool                                    bMasterSave;                   // 618
		bool                                    bSaveLoadGame;                 // 619
		bool                                    bSaveLoad;                     // 61A
		bool                                    bAutoSaving;                   // 61B
		bool                                    bExportingPlugin;              // 61C
		bool                                    bClearingData;                 // 61D
		bool                                    bHasDesiredFiles;              // 61E
		bool                                    bCheckingModels;               // 61F
		bool                                    bLoadingFiles;                 // 620
		bool                                    bDontRemoveIDs;                // 621
		std::uint8_t                            ucGameSettingsLoadState;       // 622
		std::uint8_t                            pad623;                        // 623
		TESRegionDataManager*                   pRegionDataManager;            // 624
		InventoryChanges*                       pBarterContainer;              // 628
		InventoryChanges*                       pRecipeContainer;              // 62C
		TESEffectShader*                        pSpotterShader;                // 630
		TESEffectShader*                        pItemDetectedShader;           // 634
		TESEffectShader*                        pCateyeMobileShader;           // 638
	};
	static_assert(sizeof(TESDataHandler) == 0x63C);
}
