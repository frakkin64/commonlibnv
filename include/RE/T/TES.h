#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/E/ENUM_LOD_MULT.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/M/MODEL_COUNT_TYPE.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class BSCloningProcess;
	class DeadCountObject;
	class GridCell;
	class GridCellArray;
	class GridDistantArray;
	class ImageSpaceModifierInstance;
	class LoadedAreaBound;
	class NavMeshInfoMap;
	class NiAVObject;
	class NiCamera;
	class NiColorA;
	class NiDirectionalLight;
	class NiFogProperty;
	class NiGeometry;
	class NiNode;
	class NiPick;
	class NiSourceTexture;
	class QueuedFile;
	class QueuedReference;
	class Sky;
	class TESForm;
	class TESLandTexture;
	class TESObject;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESRegion;
	class TESWaterSystem;
	class TESWorldSpace;
	class bhkPickData;

	class __declspec(novtable) TES
	{
	public:
		static constexpr auto RTTI{ RTTI::TES };
		static constexpr auto VTABLE{ VTABLE::TES };

		class ParticleObjectCache;

		class ParticleObjectCache
		{
		public:
			// members
			NiPointer<NiAVObject>     spModel;    // 00?
			NiPointer<NiAVObject>*    pspClones;  // 04?
			TES::ParticleObjectCache* pNext;      // 08?
		};

		// add
		virtual bool GetMapNameForLocation(BSStringT<char>& aMapName, NiPoint3 aWorldLoc, TESWorldSpace* apWorldSpace);  // 00

		TES* ctor(char* apPathname, NiNode* apRoot, NiNode* apLandRoot, Sky* apSky, NiNode* apLODWaterRoot)
		{
			using func_t = TES*(__thiscall*)(TES*, char*, NiNode*, NiNode*, Sky*, NiNode*);
			static REL::Relocation<func_t> func{ Offsets::TES::ctor };
			return func(this, apPathname, apRoot, apLandRoot, apSky, apLODWaterRoot);
		}

		static void InitFadeOutMultipliers()
		{
			using func_t = decltype(&TES::InitFadeOutMultipliers);
			static REL::Relocation<func_t> func{ Offsets::TES::InitFadeOutMultipliers };
			func();
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TES*);
			static REL::Relocation<func_t> func{ Offsets::TES::dtor };
			func(this);
		}

		void InitializeWater()
		{
			using func_t = decltype(&TES::InitializeWater);
			static REL::Relocation<func_t> func{ Offsets::TES::InitializeWater };
			func(this);
		}

		bool IsCoordInLoadedArea(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TES::IsCoordInLoadedArea);
			static REL::Relocation<func_t> func{ Offsets::TES::IsCoordInLoadedArea };
			return func(this, aCoord);
		}

		bool IsCellLoaded(TESObjectCELL* apCell, bool abIgnorebuffered)
		{
			using func_t = decltype(&TES::IsCellLoaded);
			static REL::Relocation<func_t> func{ Offsets::TES::IsCellLoaded };
			return func(this, apCell, abIgnorebuffered);
		}

		bool CellTestRunning()
		{
			using func_t = decltype(&TES::CellTestRunning);
			static REL::Relocation<func_t> func{ Offsets::TES::CellTestRunning };
			return func(this);
		}

		void InitGridCells(NiPoint3 const* apPos, bool abFullreload)
		{
			using func_t = decltype(&TES::InitGridCells);
			static REL::Relocation<func_t> func{ Offsets::TES::InitGridCells };
			func(this, apPos, abFullreload);
		}

		GridCell* FindFirstGridCellWithWater()
		{
			using func_t = decltype(&TES::FindFirstGridCellWithWater);
			static REL::Relocation<func_t> func{ Offsets::TES::FindFirstGridCellWithWater };
			return func(this);
		}

		TESObjectCELL* GetGridCellCell(std::int32_t aiCellX, std::int32_t aiCellY)
		{
			using func_t = decltype(&TES::GetGridCellCell);
			static REL::Relocation<func_t> func{ Offsets::TES::GetGridCellCell };
			return func(this, aiCellX, aiCellY);
		}

		TESObjectCELL* GetCellForPoint(NiPoint3 aLocation)
		{
			using func_t = decltype(&TES::GetCellForPoint);
			static REL::Relocation<func_t> func{ Offsets::TES::GetCellForPoint };
			return func(this, aLocation);
		}

		void UpdateGridLights()
		{
			using func_t = decltype(&TES::UpdateGridLights);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateGridLights };
			func(this);
		}

		void CleanTemp3D(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TES::CleanTemp3D);
			static REL::Relocation<func_t> func{ Offsets::TES::CleanTemp3D };
			func(this, apRef);
		}

		bool CanAttach3D(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TES::CanAttach3D);
			static REL::Relocation<func_t> func{ Offsets::TES::CanAttach3D };
			return func(this, apRef);
		}

		void AttachModel(TESObjectREFR* apRef, TESObjectCELL* apCell, QueuedReference* apQueuedReference, bool abMoved)
		{
			using func_t = decltype(&TES::AttachModel);
			static REL::Relocation<func_t> func{ Offsets::TES::AttachModel };
			func(this, apRef, apCell, apQueuedReference, abMoved);
		}

		void CleanUpUnusedTextures(bool abWaitForCompletion)
		{
			using func_t = decltype(&TES::CleanUpUnusedTextures);
			static REL::Relocation<func_t> func{ Offsets::TES::CleanUpUnusedTextures };
			func(this, abWaitForCompletion);
		}

		std::int32_t UpdateCurrentGridCell(NiPoint3 const* apPos, bool abAllowPartialRemovals)
		{
			using func_t = decltype(&TES::UpdateCurrentGridCell);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateCurrentGridCell };
			return func(this, apPos, abAllowPartialRemovals);
		}

		void SetUpdateGridString()
		{
			using func_t = decltype(&TES::SetUpdateGridString);
			static REL::Relocation<func_t> func{ Offsets::TES::SetUpdateGridString };
			func(this);
		}

		void UpdateCellAnimations(float afTime)
		{
			using func_t = decltype(&TES::UpdateCellAnimations);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateCellAnimations };
			func(this, afTime);
		}

		void UpdateCellMainThread()
		{
			using func_t = decltype(&TES::UpdateCellMainThread);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateCellMainThread };
			func(this);
		}

		void LockHavokUpdateMT(bool abLock)
		{
			using func_t = decltype(&TES::LockHavokUpdateMT);
			static REL::Relocation<func_t> func{ Offsets::TES::LockHavokUpdateMT };
			func(this, abLock);
		}

		void UpdateDeferredCellAnimationTransforms()
		{
			using func_t = decltype(&TES::UpdateDeferredCellAnimationTransforms);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateDeferredCellAnimationTransforms };
			func(this);
		}

		void ClearAllCells(bool abBufferedonly, bool abDoNotSetInterior)
		{
			using func_t = decltype(&TES::ClearAllCells);
			static REL::Relocation<func_t> func{ Offsets::TES::ClearAllCells };
			func(this, abBufferedonly, abDoNotSetInterior);
		}

		bool ClearOldestBufferedCell()
		{
			using func_t = decltype(&TES::ClearOldestBufferedCell);
			static REL::Relocation<func_t> func{ Offsets::TES::ClearOldestBufferedCell };
			return func(this);
		}

		void LoadInterior(TESObjectCELL* apNewInterior, NiPoint3 const* apPos)
		{
			using func_t = decltype(&TES::LoadInterior);
			static REL::Relocation<func_t> func{ Offsets::TES::LoadInterior };
			func(this, apNewInterior, apPos);
		}

		void LeaveInterior(NiPoint3* apPos)
		{
			using func_t = decltype(&TES::LeaveInterior);
			static REL::Relocation<func_t> func{ Offsets::TES::LeaveInterior };
			func(this, apPos);
		}

		void SetAtmosphere(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::SetAtmosphere);
			static REL::Relocation<func_t> func{ Offsets::TES::SetAtmosphere };
			func(this, apCell);
		}

		void RunScripts()
		{
			using func_t = decltype(&TES::RunScripts);
			static REL::Relocation<func_t> func{ Offsets::TES::RunScripts };
			func(this);
		}

		void RunAnimations()
		{
			using func_t = decltype(&TES::RunAnimations);
			static REL::Relocation<func_t> func{ Offsets::TES::RunAnimations };
			func(this);
		}

		void UpdateRefSounds()
		{
			using func_t = decltype(&TES::UpdateRefSounds);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateRefSounds };
			func(this);
		}

		void TestAllCells(std::int32_t aiControl)
		{
			using func_t = decltype(&TES::TestAllCells);
			static REL::Relocation<func_t> func{ Offsets::TES::TestAllCells };
			func(this, aiControl);
		}

		std::int32_t GetFaceCount(NiNode* apRoot, bool abCountculled)
		{
			using func_t = decltype(&TES::GetFaceCount);
			static REL::Relocation<func_t> func{ Offsets::TES::GetFaceCount };
			return func(this, apRoot, abCountculled);
		}

		void CreateTextureImage(char const* apfilename, NiPointer<NiSourceTexture>& aspSourceTexture, bool abNoFileOK, bool abArchiveOnly)
		{
			using func_t = decltype(&TES::CreateTextureImage);
			static REL::Relocation<func_t> func{ Offsets::TES::CreateTextureImage };
			func(this, apfilename, aspSourceTexture, abNoFileOK, abArchiveOnly);
		}

		void ToggleCollisionGeometry()
		{
			using func_t = decltype(&TES::ToggleCollisionGeometry);
			static REL::Relocation<func_t> func{ Offsets::TES::ToggleCollisionGeometry };
			func(this);
		}

		void TogglePrimitives()
		{
			using func_t = decltype(&TES::TogglePrimitives);
			static REL::Relocation<func_t> func{ Offsets::TES::TogglePrimitives };
			func(this);
		}

		void SaveWorld(char const* apFileName)
		{
			using func_t = decltype(&TES::SaveWorld);
			static REL::Relocation<func_t> func{ Offsets::TES::SaveWorld };
			func(this, apFileName);
		}

		void ToggleCollision()
		{
			using func_t = decltype(&TES::ToggleCollision);
			static REL::Relocation<func_t> func{ Offsets::TES::ToggleCollision };
			func(this);
		}

		static bool QCollisionDisableFlag()
		{
			using func_t = decltype(&TES::QCollisionDisableFlag);
			static REL::Relocation<func_t> func{ Offsets::TES::QCollisionDisableFlag };
			return func();
		}

		void ShowLandBorders(bool abShow)
		{
			using func_t = decltype(&TES::ShowLandBorders);
			static REL::Relocation<func_t> func{ Offsets::TES::ShowLandBorders };
			func(this, abShow);
		}

		void ShowCellNode(std::int32_t aiNode, bool abShow, bool abActiveCellsOnly)
		{
			using func_t = decltype(&TES::ShowCellNode);
			static REL::Relocation<func_t> func{ Offsets::TES::ShowCellNode };
			func(this, aiNode, abShow, abActiveCellsOnly);
		}

		GridCell* GetGridCell(std::int32_t aix, std::int32_t aiy)
		{
			using func_t = decltype(&TES::GetGridCell);
			static REL::Relocation<func_t> func{ Offsets::TES::GetGridCell };
			return func(this, aix, aiy);
		}

		TESObjectCELL* GetCurrentCell()
		{
			using func_t = decltype(&TES::GetCurrentCell);
			static REL::Relocation<func_t> func{ Offsets::TES::GetCurrentCell };
			return func(this);
		}

		bool PickWaterDistance(NiPick* apPick, NiPoint3 const& aOrigin, NiPoint3 const& aDir, float afDistance)
		{
			using func_t = decltype(&TES::PickWaterDistance);
			static REL::Relocation<func_t> func{ Offsets::TES::PickWaterDistance };
			return func(this, apPick, aOrigin, aDir, afDistance);
		}

		bool PickWorldDistance(NiPick* apPick, NiPoint3 const& aOrigin, NiPoint3 const& aDir, float afDistance, char acNodeFlags)
		{
			using func_t = decltype(&TES::PickWorldDistance);
			static REL::Relocation<func_t> func{ Offsets::TES::PickWorldDistance };
			return func(this, apPick, aOrigin, aDir, afDistance, acNodeFlags);
		}

		bool GetLandHeight(NiPoint3 const& acoord, float& afHeight)
		{
			using func_t = decltype(&TES::GetLandHeight);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLandHeight };
			return func(this, acoord, afHeight);
		}

		bool GetLandNormal(NiPoint3 const& aCoord, NiPoint3& aNormal, NiPoint3& aFaceNormal)
		{
			using func_t = decltype(&TES::GetLandNormal);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLandNormal };
			return func(this, aCoord, aNormal, aFaceNormal);
		}

		bool GetLandColor(NiPoint3 const& acoord, NiColorA& acolor)
		{
			using func_t = decltype(&TES::GetLandColor);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLandColor };
			return func(this, acoord, acolor);
		}

		NiGeometry* GetLandGeometry(NiPoint3 const& acoord)
		{
			using func_t = decltype(&TES::GetLandGeometry);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLandGeometry };
			return func(this, acoord);
		}

		TESLandTexture* GetLandTexture(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TES::GetLandTexture);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLandTexture };
			return func(this, aCoord);
		}

		MATERIAL_TYPE GetLandMaterialType(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TES::GetLandMaterialType);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLandMaterialType };
			return func(this, aCoord);
		}

		NiAVObject* CreateDeepCopySameTextures(NiAVObject* apObject, BSCloningProcess& arCloneData)
		{
			using func_t = decltype(&TES::CreateDeepCopySameTextures);
			static REL::Relocation<func_t> func{ Offsets::TES::CreateDeepCopySameTextures };
			return func(this, apObject, arCloneData);
		}

		void InitModelsToLoad(MODEL_COUNT_TYPE aeType)
		{
			using func_t = decltype(&TES::InitModelsToLoad);
			static REL::Relocation<func_t> func{ Offsets::TES::InitModelsToLoad };
			func(this, aeType);
		}

		bool ShowLoadingMenu(bool abShow, TESForm* apLocation, bool abScriptedTrigger)
		{
			using func_t = decltype(&TES::ShowLoadingMenu);
			static REL::Relocation<func_t> func{ Offsets::TES::ShowLoadingMenu };
			return func(this, abShow, apLocation, abScriptedTrigger);
		}

		void SetWorldSpace(TESWorldSpace* apWorldSpace)
		{
			using func_t = decltype(&TES::SetWorldSpace);
			static REL::Relocation<func_t> func{ Offsets::TES::SetWorldSpace };
			func(this, apWorldSpace);
		}

		NiAVObject* Pick(bhkPickData& arResult)
		{
			using func_t = NiAVObject* (TES::*)(bhkPickData&);
			static REL::Relocation<func_t> func{ Offsets::TES::Pick };
			return func(this, arResult);
		}

		NiAVObject* Pick(bhkPickData& arResult, bool abHavok)
		{
			using func_t = NiAVObject* (TES::*)(bhkPickData&, bool);
			static REL::Relocation<func_t> func{ Offsets::TES::Pick_1 };
			return func(this, arResult, abHavok);
		}

		NiAVObject* PickNI(bhkPickData& arResult)
		{
			using func_t = decltype(&TES::PickNI);
			static REL::Relocation<func_t> func{ Offsets::TES::PickNI };
			return func(this, arResult);
		}

		IO_TASK_PRIORITY GetCellPriority(TESObjectCELL* apCell, NiPoint3* apPos)
		{
			using func_t = decltype(&TES::GetCellPriority);
			static REL::Relocation<func_t> func{ Offsets::TES::GetCellPriority };
			return func(this, apCell, apPos);
		}

		void AddTempDebugObject(NiAVObject* apObject, float afTime)
		{
			using func_t = decltype(&TES::AddTempDebugObject);
			static REL::Relocation<func_t> func{ Offsets::TES::AddTempDebugObject };
			func(this, apObject, afTime);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&TES::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TES::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = void (TES::*)();
			static REL::Relocation<func_t> func{ Offsets::TES::SaveGame };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void (TES::*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TES::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&TES::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::TES::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void FinishLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&TES::FinishLoadGame);
			static REL::Relocation<func_t> func{ Offsets::TES::FinishLoadGame };
			func(this, apLoadGameBuffer);
		}

		void CreateFurnitureList()
		{
			using func_t = decltype(&TES::CreateFurnitureList);
			static REL::Relocation<func_t> func{ Offsets::TES::CreateFurnitureList };
			func(this);
		}

		void QueueReferencesForAttachedCells()
		{
			using func_t = decltype(&TES::QueueReferencesForAttachedCells);
			static REL::Relocation<func_t> func{ Offsets::TES::QueueReferencesForAttachedCells };
			func(this);
		}

		void UpdateFadeNodesForAttachedCells()
		{
			using func_t = decltype(&TES::UpdateFadeNodesForAttachedCells);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateFadeNodesForAttachedCells };
			func(this);
		}

		void RunCellTest(std::uint32_t aiOptions)
		{
			using func_t = decltype(&TES::RunCellTest);
			static REL::Relocation<func_t> func{ Offsets::TES::RunCellTest };
			func(this, aiOptions);
		}

		void TestCell(TESObjectCELL* apCell, std::uint32_t aiOptions, std::uint32_t aiTestStartTime)
		{
			using func_t = decltype(&TES::TestCell);
			static REL::Relocation<func_t> func{ Offsets::TES::TestCell };
			func(this, apCell, aiOptions, aiTestStartTime);
		}

		void PreloadAddonNodes()
		{
			using func_t = decltype(&TES::PreloadAddonNodes);
			static REL::Relocation<func_t> func{ Offsets::TES::PreloadAddonNodes };
			func(this);
		}

		void PreloadForms()
		{
			using func_t = decltype(&TES::PreloadForms);
			static REL::Relocation<func_t> func{ Offsets::TES::PreloadForms };
			func(this);
		}

		void PreloadDefaultModels()
		{
			using func_t = decltype(&TES::PreloadDefaultModels);
			static REL::Relocation<func_t> func{ Offsets::TES::PreloadDefaultModels };
			func(this);
		}

		void UnloadDefaultModels()
		{
			using func_t = decltype(&TES::UnloadDefaultModels);
			static REL::Relocation<func_t> func{ Offsets::TES::UnloadDefaultModels };
			func(this);
		}

		void PreloadPlaceableWaterNoiseTextures()
		{
			using func_t = decltype(&TES::PreloadPlaceableWaterNoiseTextures);
			static REL::Relocation<func_t> func{ Offsets::TES::PreloadPlaceableWaterNoiseTextures };
			func(this);
		}

		void SetupTemporaryParticleCache()
		{
			using func_t = decltype(&TES::SetupTemporaryParticleCache);
			static REL::Relocation<func_t> func{ Offsets::TES::SetupTemporaryParticleCache };
			func(this);
		}

		void CleanupTemporaryParticleCache()
		{
			using func_t = decltype(&TES::CleanupTemporaryParticleCache);
			static REL::Relocation<func_t> func{ Offsets::TES::CleanupTemporaryParticleCache };
			func(this);
		}

		NavMeshInfoMap* GetNavMeshInfoMap()
		{
			using func_t = decltype(&TES::GetNavMeshInfoMap);
			static REL::Relocation<func_t> func{ Offsets::TES::GetNavMeshInfoMap };
			return func(this);
		}

		void SetNavMeshInfoMap(NavMeshInfoMap* apNavMeshInfoMap)
		{
			using func_t = decltype(&TES::SetNavMeshInfoMap);
			static REL::Relocation<func_t> func{ Offsets::TES::SetNavMeshInfoMap };
			func(this, apNavMeshInfoMap);
		}

		static void KillSDM()
		{
			using func_t = decltype(&TES::KillSDM);
			static REL::Relocation<func_t> func{ Offsets::TES::KillSDM };
			func();
		}

		void UpdateMultiBoundVisibility(NiCamera* apCamera)
		{
			using func_t = decltype(&TES::UpdateMultiBoundVisibility);
			static REL::Relocation<func_t> func{ Offsets::TES::UpdateMultiBoundVisibility };
			func(this, apCamera);
		}

		void ResetAllMultiBoundNodes(bool abLandscape, bool abRooms)
		{
			using func_t = decltype(&TES::ResetAllMultiBoundNodes);
			static REL::Relocation<func_t> func{ Offsets::TES::ResetAllMultiBoundNodes };
			func(this, abLandscape, abRooms);
		}

		static ENUM_LOD_MULT GetLODMult(TESObject* apObj)
		{
			using func_t = decltype(&TES::GetLODMult);
			static REL::Relocation<func_t> func{ Offsets::TES::GetLODMult };
			return func(apObj);
		}

		void InitDistantTextureBlending()
		{
			using func_t = decltype(&TES::InitDistantTextureBlending);
			static REL::Relocation<func_t> func{ Offsets::TES::InitDistantTextureBlending };
			func(this);
		}

		float GetWaterHeight(NiPoint3 const& arPos, TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::GetWaterHeight);
			static REL::Relocation<func_t> func{ Offsets::TES::GetWaterHeight };
			return func(this, arPos, apCell);
		}

		void ActivateAllSubmergedReferencesIslands()
		{
			using func_t = decltype(&TES::ActivateAllSubmergedReferencesIslands);
			static REL::Relocation<func_t> func{ Offsets::TES::ActivateAllSubmergedReferencesIslands };
			func(this);
		}

		TESObjectCELL* GetInterior()
		{
			using func_t = decltype(&TES::GetInterior);
			static REL::Relocation<func_t> func{ Offsets::TES::GetInterior };
			return func(this);
		}

	protected:
		void CullGridCells(bool abDisable, NiPoint3* apPos)
		{
			using func_t = decltype(&TES::CullGridCells);
			static REL::Relocation<func_t> func{ Offsets::TES::CullGridCells };
			func(this, abDisable, apPos);
		}

		void ReloadGridCells(NiPoint3 const* apPos, bool abFullreload)
		{
			using func_t = decltype(&TES::ReloadGridCells);
			static REL::Relocation<func_t> func{ Offsets::TES::ReloadGridCells };
			func(this, apPos, abFullreload);
		}

		void LoadGridCell(std::int32_t aiGridX, std::int32_t aiGridY, std::int32_t aiCellX, std::int32_t aiCellY)
		{
			using func_t = decltype(&TES::LoadGridCell);
			static REL::Relocation<func_t> func{ Offsets::TES::LoadGridCell };
			func(this, aiGridX, aiGridY, aiCellX, aiCellY);
		}

		void GridArrayLoad()
		{
			using func_t = decltype(&TES::GridArrayLoad);
			static REL::Relocation<func_t> func{ Offsets::TES::GridArrayLoad };
			func(this);
		}

		bool IsBuffered(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::IsBuffered);
			static REL::Relocation<func_t> func{ Offsets::TES::IsBuffered };
			return func(this, apCell);
		}

		void DetachGridCells()
		{
			using func_t = decltype(&TES::DetachGridCells);
			static REL::Relocation<func_t> func{ Offsets::TES::DetachGridCells };
			func(this);
		}

		void AddToBuffer(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::AddToBuffer);
			static REL::Relocation<func_t> func{ Offsets::TES::AddToBuffer };
			func(this, apCell);
		}

		bool IsInteriorBuffered(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::IsInteriorBuffered);
			static REL::Relocation<func_t> func{ Offsets::TES::IsInteriorBuffered };
			return func(this, apCell);
		}

		void AddToInteriorBuffer(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::AddToInteriorBuffer);
			static REL::Relocation<func_t> func{ Offsets::TES::AddToInteriorBuffer };
			func(this, apCell);
		}

		std::uint32_t FreeInteriorBuffer(bool abBufferedonly)
		{
			using func_t = decltype(&TES::FreeInteriorBuffer);
			static REL::Relocation<func_t> func{ Offsets::TES::FreeInteriorBuffer };
			return func(this, abBufferedonly);
		}

		void AddToExteriorBuffer(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TES::AddToExteriorBuffer);
			static REL::Relocation<func_t> func{ Offsets::TES::AddToExteriorBuffer };
			func(this, apCell);
		}

		std::uint32_t FreeExteriorBuffer(bool abBufferedonly, TESWorldSpace* apWorldSpace)
		{
			using func_t = decltype(&TES::FreeExteriorBuffer);
			static REL::Relocation<func_t> func{ Offsets::TES::FreeExteriorBuffer };
			return func(this, abBufferedonly, apWorldSpace);
		}

		void HideUnneededLandPasses()
		{
			using func_t = decltype(&TES::HideUnneededLandPasses);
			static REL::Relocation<func_t> func{ Offsets::TES::HideUnneededLandPasses };
			func(this);
		}

		void HideFarLandNormalMaps()
		{
			using func_t = decltype(&TES::HideFarLandNormalMaps);
			static REL::Relocation<func_t> func{ Offsets::TES::HideFarLandNormalMaps };
			func(this);
		}

		void SetHideLandBlendPassForGridCell(std::int32_t aiGridX, std::int32_t aiGridY, bool abFlag)
		{
			using func_t = decltype(&TES::SetHideLandBlendPassForGridCell);
			static REL::Relocation<func_t> func{ Offsets::TES::SetHideLandBlendPassForGridCell };
			func(this, aiGridX, aiGridY, abFlag);
		}

		void SetHideLandNormalMapForGridCell(std::int32_t aiGridX, std::int32_t aiGridY, bool abFlag)
		{
			using func_t = decltype(&TES::SetHideLandNormalMapForGridCell);
			static REL::Relocation<func_t> func{ Offsets::TES::SetHideLandNormalMapForGridCell };
			func(this, aiGridX, aiGridY, abFlag);
		}

	public:
		// members
		GridDistantArray*                                   pGridDistantA;                  // 04
		GridCellArray*                                      pGridCellA;                     // 08
		NiNode*                                             pObjRoot;                       // 0C
		NiNode*                                             pObjLandRoot;                   // 10
		NiNode*                                             pObjLODWaterRoot;               // 14
		NiNode*                                             pTempNodeManager;               // 18
		NiDirectionalLight*                                 pObjLight;                      // 1C
		NiFogProperty*                                      pObjFog;                        // 20
		std::int32_t                                        iCurrentGridX;                  // 24
		std::int32_t                                        iCurrentGridY;                  // 28
		std::int32_t                                        iCurrentQueuedX;                // 2C
		std::int32_t                                        iCurrentQueuedY;                // 30
		TESObjectCELL*                                      pInteriorCell;                  // 34
		TESObjectCELL**                                     pInteriorBuffer;                // 38
		TESObjectCELL**                                     pExteriorBuffer;                // 3C
		std::uint32_t                                       iTempInteriorBufferSize;        // 40
		std::uint32_t                                       iTempExteriorBufferSize;        // 44
		std::int32_t                                        iSaveGridX;                     // 48
		std::int32_t                                        iSaveGridY;                     // 4C
		bool                                                bCollisionBoxes;                // 50
		bool                                                bRunningCellTests;              // 51
		bool                                                bRunningCellTests2;             // 52
		bool                                                bRunningSubmergedObjectTest;    // 53
		void*                                               pfnTACCallbackFunc;             // 54
		void*                                               pTACCallbackData;               // 58
		TESRegion*                                          pTACRegionFilter;               // 5C
		bool                                                bShowLANDborders;               // 60
		std::uint8_t                                        pad61[0x3];                     // 61
		TESWaterSystem*                                     pWaterSystem;                   // 64
		Sky*                                                pSky;                           // 68
		BSSimpleList<NiPointer<ImageSpaceModifierInstance>> listActiveImageSpaceModifiers;  // 6C
		std::uint32_t                                       iTotalToLoad;                   // 74
		std::uint32_t                                       iLoaded;                        // 78
		bool                                                bDisablePercentageUpdate;       // 7C
		bool                                                bUpdateGridString;              // 7D
		std::uint16_t                                       pad7E;                          // 7E
		float                                               fCell_delta_x;                  // 80
		float                                               fCell_delta_y;                  // 84
		TESWorldSpace*                                      pWorldSpace;                    // 88
		BSSimpleList<TESObjectCELL*>                        listLastLoadedExteriors;        // 8C
		BSSimpleList<TESObjectREFR*>                        ListofBedsAndChairs;            // 94
		BSSimpleList<DeadCountObject*>                      DeadCount;                      // 9C
		NiPointer<QueuedFile>                               spPreloadedAddonNodes;          // A4
		NiPointer<NiSourceTexture>                          BloodDecalPreload1;             // A8
		NiPointer<QueuedFile>                               spPreloadedForms;               // AC
		TES::ParticleObjectCache*                           pParticleCacheHead;             // B0
		bool                                                bFadeWhenLoading;               // B4
		bool                                                bAllowUnusedPurge;              // B5
		std::uint16_t                                       padB6;                          // B6
		std::uint32_t                                       iPlaceableWaterCount;           // B8
		NavMeshInfoMap*                                     pNavMeshInfoMap;                // BC
		NiPointer<LoadedAreaBound>                          spLoadedAreaBound;              // C0
	};
	static_assert(sizeof(TES) == 0xC4);
}
