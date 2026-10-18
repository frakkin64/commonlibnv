#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESTerrainLODManager.h"
#include "RE/T/TESTexture.h"
#include "RE/W/WORLD_MAP_DATA.h"
#include "RE/W/WORLD_MAP_OFFSET_DATA.h"

namespace RE
{
	class BGSEncounterZone;
	class BGSMusicType;
	class BGSTerrainManager;
	class BSPortalGraph;
	class FORM;
	class ImpactSwap;
	class TESClimate;
	class TESFile;
	class TESGrassAreaParam;
	class TESImageSpace;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWaterForm;

	class TESWorldSpace :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESTexture  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::TESWorldSpace };
		static constexpr auto VTABLE{ VTABLE::TESWorldSpace };

		class OFFSET_DATA;

		enum class PARENT_USE_FLAG : std::int32_t
		{
			kPU_LAND = 0x0,
			kPU_LOD = 0x1,
			kPU_MAP = 0x2,
			kPU_WATER = 0x3,
			kPU_CLIMATE = 0x4,
			kPU_IMAGESPACE = 0x5,
			kPU_COUNT = 0x6,
		};

		class OFFSET_DATA
		{
		public:
			// members
			// not placed: pCellFileOffsets(absent)
			NiPoint2      OffsetMinCoords;  // 00
			NiPoint2      OffsetMaxCoords;  // 08?
			std::uint32_t pad10;            // 10
			std::uint32_t iFileOffset;      // 14
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kWRLD_ID };

		// override (TESForm)
		virtual ~TESWorldSpace() = default;                                                                                  // 04
		virtual void ClearData() override;                                                                                   // 05
		virtual bool ProcessBeforeSave() override;                                                                           // 06
		virtual bool Load(TESFile* apFile) override;                                                                         // 08
		virtual bool LoadPartial(TESFile* apFile) override;                                                                  // 09
		virtual void Save() override;                                                                                        // 0B
		virtual bool SavesBefore(FORM* apGroupFORM) override;                                                                // 0E
		virtual bool SavesBefore(TESForm* apForm) override;                                                                  // 0F
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;  // 10
		virtual bool FindInFileFast(TESFile* apFile) override;                                                               // 1F
		virtual void InitItem() override;                                                                                    // 22
		virtual void Copy(TESForm* apCopy) override;                                                                         // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                      // 43
		virtual bool IsFormTypeChild(std::uint8_t aeType) override;                                                          // 48

		// add
		virtual bool GetMapNameForLocation(BSStringT<char>& aMapName, NiPoint3 aWorldLoc);                                                                 // 4E
		virtual void GetGrassForLocation(NiPoint2 aMaxWorldLoc, NiPoint2 apGrassParams, TESGrassAreaParam* const aiNumGrassParams, std::uint32_t a_arg4);  // 4F

		BGSEncounterZone* GetEncounterZone()
		{
			using func_t = decltype(&TESWorldSpace::GetEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetEncounterZone };
			return func(this);
		}

		TESWorldSpace* ctor()
		{
			using func_t = TESWorldSpace*(__thiscall*)(TESWorldSpace*);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::ctor };
			return func(this);
		}

		void ClearPortalGraph()
		{
			using func_t = decltype(&TESWorldSpace::ClearPortalGraph);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::ClearPortalGraph };
			func(this);
		}

		bool FindCellInFile(TESFile* apFile, std::int32_t aiX, std::int32_t aiY)
		{
			using func_t = decltype(&TESWorldSpace::FindCellInFile);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::FindCellInFile };
			return func(this, apFile, aiX, aiY);
		}

		bool GetExtCellDataFromFileByEditorID(char const* apCellID, std::int32_t& aiOutX, std::int32_t& aiOutY)
		{
			using func_t = decltype(&TESWorldSpace::GetExtCellDataFromFileByEditorID);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetExtCellDataFromFileByEditorID };
			return func(this, apCellID, aiOutX, aiOutY);
		}

		TESObjectCELL* LoadCell(std::int32_t aiX, std::int32_t aiY)
		{
			using func_t = decltype(&TESWorldSpace::LoadCell);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::LoadCell };
			return func(this, aiX, aiY);
		}

		void UnLoadCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESWorldSpace::UnLoadCell);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::UnLoadCell };
			func(this, apCell);
		}

		bool FindLandDataInFile(std::int32_t aiX, std::int32_t aiY, TESFile*& apOutFile, std::uint32_t& aiOutOffset)
		{
			using func_t = decltype(&TESWorldSpace::FindLandDataInFile);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::FindLandDataInFile };
			return func(this, aiX, aiY, apOutFile, aiOutOffset);
		}

		TESClimate* GetClimate()
		{
			using func_t = decltype(&TESWorldSpace::GetClimate);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetClimate };
			return func(this);
		}

		TESImageSpace* GetUsableImageSpace()
		{
			using func_t = decltype(&TESWorldSpace::GetUsableImageSpace);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetUsableImageSpace };
			return func(this);
		}

		TESWaterForm* GetWaterType()
		{
			using func_t = decltype(&TESWorldSpace::GetWaterType);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetWaterType };
			return func(this);
		}

		TESWaterForm* GetLODWaterType()
		{
			using func_t = decltype(&TESWorldSpace::GetLODWaterType);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetLODWaterType };
			return func(this);
		}

		BGSTerrainManager* GetTerrainManager()
		{
			using func_t = decltype(&TESWorldSpace::GetTerrainManager);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetTerrainManager };
			return func(this);
		}

		bool CantTravelFrom()
		{
			using func_t = decltype(&TESWorldSpace::CantTravelFrom);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::CantTravelFrom };
			return func(this);
		}

		bool GetParentUseFlag(TESWorldSpace::PARENT_USE_FLAG aeFlag)
		{
			using func_t = decltype(&TESWorldSpace::GetParentUseFlag);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetParentUseFlag };
			return func(this, aeFlag);
		}

		TESWorldSpace* GetParentWorld(TESWorldSpace::PARENT_USE_FLAG aeFlags)
		{
			using func_t = decltype(&TESWorldSpace::GetParentWorld);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetParentWorld };
			return func(this, aeFlags);
		}

		WORLD_MAP_DATA* GetWorldMapData()
		{
			using func_t = decltype(&TESWorldSpace::GetWorldMapData);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetWorldMapData };
			return func(this);
		}

		static std::int32_t GetKeyForCellCoord(std::int16_t asX, std::int16_t asY)
		{
			using func_t = decltype(&TESWorldSpace::GetKeyForCellCoord);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetKeyForCellCoord };
			return func(asX, asY);
		}

		static std::int32_t GetKeyForWorldCoord(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TESWorldSpace::GetKeyForWorldCoord);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetKeyForWorldCoord };
			return func(aCoord);
		}

		TESObjectCELL* GetCellFromWorldCoord(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TESWorldSpace::GetCellFromWorldCoord);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetCellFromWorldCoord };
			return func(this, aCoord);
		}

		TESObjectCELL* GetCellFromCellCoord(std::int32_t aiX, std::int32_t aiY)
		{
			using func_t = decltype(&TESWorldSpace::GetCellFromCellCoord);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetCellFromCellCoord };
			return func(this, aiX, aiY);
		}

		bool AddCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESWorldSpace::AddCell);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::AddCell };
			return func(this, apCell);
		}

		void ReleaseCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESWorldSpace::ReleaseCell);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::ReleaseCell };
			func(this, apCell);
		}

		void AddMultiBoundRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESWorldSpace::AddMultiBoundRef);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::AddMultiBoundRef };
			func(this, apRef);
		}

		static bool IsFixedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESWorldSpace::IsFixedRef);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::IsFixedRef };
			return func(apRef);
		}

		void AddToPersistentRefData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESWorldSpace::AddToPersistentRefData);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::AddToPersistentRefData };
			func(this, apRef);
		}

		void RemoveFromPersistentRefData(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESWorldSpace::RemoveFromPersistentRefData);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::RemoveFromPersistentRefData };
			func(this, apRef);
		}

		void AddPersistentRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESWorldSpace::AddPersistentRef);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::AddPersistentRef };
			func(this, apRef);
		}

		void AssignPersistentRefsToCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESWorldSpace::AssignPersistentRefsToCell);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::AssignPersistentRefsToCell };
			func(this, apCell);
		}

		BSSimpleList<TESObjectREFR*>* BuildMapMarkerList(bool abLocalOnly)
		{
			using func_t = decltype(&TESWorldSpace::BuildMapMarkerList);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::BuildMapMarkerList };
			return func(this, abLocalOnly);
		}

		BSSimpleList<TESObjectREFR*>* BuildAudioMarkerList(bool abLocalOnly)
		{
			using func_t = decltype(&TESWorldSpace::BuildAudioMarkerList);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::BuildAudioMarkerList };
			return func(this, abLocalOnly);
		}

		void EnumReferencesCloseToPoint(NiPoint3 const& aPoint1, float a_arg2, NiPoint3 const& a_arg3, float aPoint2, void* a_arg5, std::int32_t a_arg6)
		{
			using func_t = decltype(&TESWorldSpace::EnumReferencesCloseToPoint);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::EnumReferencesCloseToPoint };
			func(this, aPoint1, a_arg2, a_arg3, aPoint2, a_arg5, a_arg6);
		}

		void AdjustMapMarkerCoord(NiPoint3& aMapCoord, bool abInverse)
		{
			using func_t = decltype(&TESWorldSpace::AdjustMapMarkerCoord);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::AdjustMapMarkerCoord };
			func(this, aMapCoord, abInverse);
		}

	protected:
		TESWorldSpace::OFFSET_DATA* GetOffsetData(TESFile* apFile)
		{
			using func_t = decltype(&TESWorldSpace::GetOffsetData);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::GetOffsetData };
			return func(this, apFile);
		}

		TESWorldSpace::OFFSET_DATA* CreateOffsetData(TESFile* apFile)
		{
			using func_t = decltype(&TESWorldSpace::CreateOffsetData);
			static REL::Relocation<func_t> func{ Offsets::TESWorldSpace::CreateOffsetData };
			return func(this, apFile);
		}

	public:
		// members
		NiTPointerMap<std::int32_t, TESObjectCELL*>*                 pCellMap;                  // 30
		TESObjectCELL*                                               pPersistentCell;           // 34
		TESTerrainLODManager                                         TerrainLODManager;         // 38
		std::uint8_t                                                 pad39[0x3];                // 39
		BGSTerrainManager*                                           pTerrainManager;           // 3C
		TESClimate*                                                  pClimate;                  // 40
		TESImageSpace*                                               pImageSpace;               // 44
		ImpactSwap*                                                  pImpactSwap;               // 48
		std::uint8_t                                                 cFlags;                    // 4C
		std::uint8_t                                                 pad4D;                     // 4D
		std::uint16_t                                                sParentUseFlags;           // 4E
		NiTPointerMap<std::uint32_t, BSSimpleList<TESObjectREFR*>*>  FixedPersistentRefMap;     // 50
		BSSimpleList<TESObjectREFR*>                                 MobilePersistentRefList;   // 60
		NiTPointerMap<std::uint32_t, BSSimpleList<TESObjectREFR*>*>* pOverlappedMultiboundMap;  // 68
		NiPointer<BSPortalGraph>                                     spPortalGraph;             // 6C
		TESWorldSpace*                                               pParentWorld;              // 70
		TESWaterForm*                                                pWorldWater;               // 74
		TESWaterForm*                                                pLODWater;                 // 78
		float                                                        fLODWaterHeight;           // 7C
		WORLD_MAP_DATA                                               WorldMapData;              // 80
		WORLD_MAP_OFFSET_DATA                                        WorldMapOffsetData;        // 90
		BGSMusicType*                                                pMusicType;                // 9C
		NiPoint2                                                     MinimumCoords;             // A0
		NiPoint2                                                     MaximumCoords;             // A8
		NiTMap<TESFile*, TESWorldSpace::OFFSET_DATA*>                OffsetDataMap;             // B0
		BSStringT<char>                                              cEditorID;                 // C0
		float                                                        fDefaultLandHeight;        // C8
		float                                                        fDefaultWaterHeight;       // CC
		BGSEncounterZone*                                            pEncounterZone;            // D0
		TESTexture                                                   CanopyShadowTexture;       // D4
		TESTexture                                                   WaterNoiseTexture;         // E0
	};
	static_assert(sizeof(TESWorldSpace) == 0xEC);
}
