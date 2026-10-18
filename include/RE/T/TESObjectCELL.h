#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDecalManager_DECAL_TYPE.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSStringT.h"
#include "RE/E/ExtraDataList.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/R/REGION_DATA_ID.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class Actor;
	class BGSEncounterZone;
	class BGSLightingTemplate;
	class BGSLoadFormBuffer;
	class BGSMusicType;
	class BGSSaveFormBuffer;
	class BSMultiBoundNode;
	class BSPortalGraph;
	class BSRenderedTexture;
	class CellMopp;
	class DECAL_CREATION_DATA;
	class EXTERIOR_DATA;
	class FORM;
	class FORM_GROUP;
	class INTERIOR_DATA;
	class IntSeenData;
	class InventoryChanges;
	class LOADED_CELL_DATA;
	class NavMeshArray;
	class NiAVObject;
	class NiCamera;
	class NiNode;
	class NiPick;
	class NiRenderedTexture;
	class SeenData;
	class TESActorBase;
	class TESClimate;
	class TESFile;
	class TESImageSpace;
	class TESObject;
	class TESObjectLAND;
	class TESObjectREFR;
	class TESRegionList;
	class TESRegionObjectBase;
	class TESRegionPoint;
	class TESWaterForm;
	class TESWorldSpace;
	class bhkPickData;
	class bhkWorld;
	class bhkWorldM;

	class TESObjectCELL :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectCELL };
		static constexpr auto VTABLE{ VTABLE::TESObjectCELL };

		class QUEUED_ATTACH;
		class RENDER_DATA;
		class RENDER_FAILURE_DATA;
		class RENDER_TEST_DATA;

		enum class CELLNODE : std::int32_t
		{
			kCN_ACTOR = 0x0,
			kCN_MARKER = 0x1,
			kCN_LAND = 0x2,
			kCN_STATIC = 0x3,
			kCN_DYNAMIC = 0x4,
			kCN_OCCLUSION_PLANE = 0x5,
			kCN_PORTAL = 0x6,
			kCN_MULTIBOUND = 0x7,
			kCN_COLLISION = 0x8,
			kCN_LIGHT_MARKER = 0x9,
			kCN_SOUND_MARKER = 0xA,
		};

		enum class CELL_CULL_NODE : std::int32_t
		{
			kCCN_ACTOR = 0x0,
			kCCN_MARKER = 0x1,
			kCCN_LAND = 0x2,
			kCCN_STATIC = 0x3,
			kCCN_DYNAMIC = 0x4,
			kCCN_OCCLUSION_PLANE = 0x5,
			kCCN_PORTAL = 0x6,
			kCCN_MULTIBOUND = 0x7,
			kCCN_COLLISION = 0x8,
			kCCN_LIGHT_MARKER = 0x9,
			kCCN_SOUND_MARKER = 0xA,
			kCCN_WATER = 0xB,
		};

		enum class CELL_STATE : std::int32_t
		{
			kCS_NOTLOADED = 0x0,
			kCS_UNLOADING = 0x1,
			kCS_LOADING = 0x2,
			kCS_LOADED = 0x3,
			kCS_DETACHING = 0x4,
			kCS_ATTACHING = 0x5,
			kCS_ATTACHED = 0x6,
		};

		class QUEUED_ATTACH
		{
		public:
			void dtor()
			{
				using func_t = void(__thiscall*)(QUEUED_ATTACH*);
				static REL::Relocation<func_t> func{ Offsets::TESObjectCELL_QUEUED_ATTACH::dtor };
				func(this);
			}

		public:
			// members
			NiPointer<NiAVObject> spAttachChild;  // 00
			NiPointer<NiNode>     spAttachNode;   // 04
			bool                  bFirstAvail;    // 08?
			std::uint8_t          pad09[0x3];     // 09
		};

		class RENDER_DATA
		{
		public:
			// members
			std::uint32_t iGeometryCount;       // 00?
			std::uint32_t iTriangleCount;       // 04?
			std::uint32_t iNewRenderPassCount;  // 08?
			std::uint32_t iActiveLights;        // 0C?
			std::uint32_t iTotalTime;           // 10?
			std::uint32_t iAccumulateTime;      // 14?
		};

		class RENDER_FAILURE_DATA
		{
		public:
			// members
			TESObjectCELL::RENDER_DATA RenderData;  // 00?
			TESObjectCELL*             pTestCell;   // 18?
			NiPoint3                   TestPos;     // 1C?
			NiMatrix3                  TestRot;     // 28?
		};

		class RENDER_TEST_DATA
		{
		public:
			// members
			TESObjectCELL::RENDER_DATA Thresholds;            // 00?
			void*                      pFailureCallbackFunc;  // 18?
			void*                      pFailureCallbackData;  // 1C?
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCELL_ID };

		// override (TESForm)
		virtual ~TESObjectCELL() = default;                                                                                  // 04
		virtual bool ProcessBeforeSave() override;                                                                           // 06
		virtual bool Load(TESFile* apFile) override;                                                                         // 08
		virtual bool Save(TESFile* apFile) override;                                                                         // 0A
		virtual void Save() override;                                                                                        // 0B
		virtual bool SaveEdit(TESFile* apFile) override;                                                                     // 0D
		virtual bool SavesBefore(FORM* apGroupFORM) override;                                                                // 0E
		virtual bool SavesBefore(TESForm* apForm) override;                                                                  // 0F
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;  // 10
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                   // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                 // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                               // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                 // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                 // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                             // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                 // 1A
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                   // 1C
		virtual void Revert(std::uint32_t aiFlags) override;                                                                 // 1D
		virtual bool FindInFileFast(TESFile* apFile) override;                                                               // 1F
		virtual void InitItem() override;                                                                                    // 22
		virtual void GetFormDetailedString(BSStringT<char>& aString) override;                                               // 24
		virtual void SetAltered(bool abAltered) override;                                                                    // 32
		virtual void Copy(TESForm* apCopy) override;                                                                         // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                      // 43
		virtual bool BelongsInGroup(FORM* apGroupFORM, bool abAllowParentGroups, bool abCurrentOnly) override;               // 44
		virtual void CreateGroupData(FORM* apOutGroupFORM, FORM_GROUP* apParentGroup) override;                              // 45
		virtual char const* GetFormEditorID() override;                                                                      // 46
		virtual bool IsFormTypeChild(std::uint8_t aeType) override;                                                          // 48

		bool GetInterior() const
		{
			using func_t = decltype(&TESObjectCELL::GetInterior);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetInterior };
			return func(this);
		}

		void DecQueuedRefCount()
		{
			using func_t = decltype(&TESObjectCELL::DecQueuedRefCount);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::DecQueuedRefCount };
			func(this);
		}

		void DecCriticalQueuedRefCount()
		{
			using func_t = decltype(&TESObjectCELL::DecCriticalQueuedRefCount);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::DecCriticalQueuedRefCount };
			func(this);
		}

		bool GetLoaded()
		{
			using func_t = decltype(&TESObjectCELL::GetLoaded);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLoaded };
			return func(this);
		}

		TESObjectCELL::CELL_STATE GetState()
		{
			using func_t = decltype(&TESObjectCELL::GetState);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetState };
			return func(this);
		}

		bool GetAttached()
		{
			using func_t = decltype(&TESObjectCELL::GetAttached);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetAttached };
			return func(this);
		}

		static bhkWorldM* ExteriorWorld()
		{
			using func_t = decltype(&TESObjectCELL::ExteriorWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ExteriorWorld };
			return func();
		}

		void SetState(TESObjectCELL::CELL_STATE aeState)
		{
			using func_t = decltype(&TESObjectCELL::SetState);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetState };
			func(this, aeState);
		}

		bool HasWater()
		{
			using func_t = decltype(&TESObjectCELL::HasWater);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::HasWater };
			return func(this);
		}

		char const* GetCellName()
		{
			using func_t = decltype(&TESObjectCELL::GetCellName);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetCellName };
			return func(this);
		}

		bool GetAttaching()
		{
			using func_t = decltype(&TESObjectCELL::GetAttaching);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetAttaching };
			return func(this);
		}

		bhkWorld* GetbhkWorld()
		{
			using func_t = decltype(&TESObjectCELL::GetbhkWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetbhkWorld };
			return func(this);
		}

		bool GetFakeExterior()
		{
			using func_t = decltype(&TESObjectCELL::GetFakeExterior);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetFakeExterior };
			return func(this);
		}

		NiNode* GetChildNode(TESObjectCELL::CELLNODE aeIndex)
		{
			using func_t = decltype(&TESObjectCELL::GetChildNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetChildNode };
			return func(this, aeIndex);
		}

		NiNode* GetLandNode(std::uint32_t aiQuad)
		{
			using func_t = decltype(&TESObjectCELL::GetLandNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLandNode };
			return func(this, aiQuad);
		}

		void AddDecal(DECAL_CREATION_DATA& arDecalData, BGSDecalManager_DECAL_TYPE aeDecalType, bool abForceAdd)
		{
			using func_t = decltype(&TESObjectCELL::AddDecal);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddDecal };
			func(this, arDecalData, aeDecalType, abForceAdd);
		}

		NiNode* MarkerNode()
		{
			using func_t = decltype(&TESObjectCELL::MarkerNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::MarkerNode };
			return func(this);
		}

		static std::uint32_t GetHoursToRespawnCell()
		{
			using func_t = decltype(&TESObjectCELL::GetHoursToRespawnCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetHoursToRespawnCell };
			return func();
		}

		CellMopp* GetCellMopp()
		{
			using func_t = decltype(&TESObjectCELL::GetCellMopp);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetCellMopp };
			return func(this);
		}

		TESObjectCELL* ctor()
		{
			using func_t = TESObjectCELL*(__thiscall*)(TESObjectCELL*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ctor };
			return func(this);
		}

		std::uint32_t GetGroupBlockKey()
		{
			using func_t = decltype(&TESObjectCELL::GetGroupBlockKey);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetGroupBlockKey };
			return func(this);
		}

		std::uint32_t GetGroupSubBlockKey()
		{
			using func_t = decltype(&TESObjectCELL::GetGroupSubBlockKey);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetGroupSubBlockKey };
			return func(this);
		}

		static std::uint32_t CalcExtGroupBlockKey(std::int32_t aiX, std::int32_t aiY)
		{
			using func_t = decltype(&TESObjectCELL::CalcExtGroupBlockKey);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CalcExtGroupBlockKey };
			return func(aiX, aiY);
		}

		static std::uint32_t CalcExtGroupSubBlockKey(std::int32_t aiX, std::int32_t aiY)
		{
			using func_t = decltype(&TESObjectCELL::CalcExtGroupSubBlockKey);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CalcExtGroupSubBlockKey };
			return func(aiX, aiY);
		}

		bool GetPublicState()
		{
			using func_t = decltype(&TESObjectCELL::GetPublicState);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetPublicState };
			return func(this);
		}

		bool GetCantWaitHere()
		{
			using func_t = decltype(&TESObjectCELL::GetCantWaitHere);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetCantWaitHere };
			return func(this);
		}

		bool CantTravelFrom()
		{
			using func_t = decltype(&TESObjectCELL::CantTravelFrom);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CantTravelFrom };
			return func(this);
		}

		void CreateCellData()
		{
			using func_t = decltype(&TESObjectCELL::CreateCellData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CreateCellData };
			func(this);
		}

		std::uint32_t GetDataAmbient()
		{
			using func_t = decltype(&TESObjectCELL::GetDataAmbient);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataAmbient };
			return func(this);
		}

		std::uint32_t GetDataDirectional()
		{
			using func_t = decltype(&TESObjectCELL::GetDataDirectional);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataDirectional };
			return func(this);
		}

		std::uint32_t GetDataDirectionalZ()
		{
			using func_t = decltype(&TESObjectCELL::GetDataDirectionalZ);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataDirectionalZ };
			return func(this);
		}

		std::uint32_t GetDataFog()
		{
			using func_t = decltype(&TESObjectCELL::GetDataFog);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataFog };
			return func(this);
		}

		float GetDataFogNearPlane()
		{
			using func_t = decltype(&TESObjectCELL::GetDataFogNearPlane);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataFogNearPlane };
			return func(this);
		}

		float GetDataFogFarPlane()
		{
			using func_t = decltype(&TESObjectCELL::GetDataFogFarPlane);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataFogFarPlane };
			return func(this);
		}

		float GetDataFogPower()
		{
			using func_t = decltype(&TESObjectCELL::GetDataFogPower);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataFogPower };
			return func(this);
		}

		float GetDataClipDist()
		{
			using func_t = decltype(&TESObjectCELL::GetDataClipDist);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataClipDist };
			return func(this);
		}

		std::int32_t GetDataY() const
		{
			using func_t = decltype(&TESObjectCELL::GetDataY);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDataY };
			return func(this);
		}

		void AddAnimatedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::AddAnimatedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddAnimatedRef };
			func(this, apRef);
		}

		void RemoveAnimatedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::RemoveAnimatedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveAnimatedRef };
			func(this, apRef);
		}

		void AddEmittanceRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::AddEmittanceRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddEmittanceRef };
			func(this, apRef);
		}

		void RemoveEmittanceRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::RemoveEmittanceRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveEmittanceRef };
			func(this, apRef);
		}

		void AddScriptedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::AddScriptedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddScriptedRef };
			func(this, apRef);
		}

		void RemoveScriptedRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::RemoveScriptedRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveScriptedRef };
			func(this, apRef);
		}

		void RemoveActivatingRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::RemoveActivatingRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveActivatingRef };
			func(this, apRef);
		}

		BSSimpleList<TESObjectREFR*>* GetWaterRefList()
		{
			using func_t = decltype(&TESObjectCELL::GetWaterRefList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetWaterRefList };
			return func(this);
		}

		BSMultiBoundNode* AddMultiBoundRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::AddMultiBoundRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddMultiBoundRef };
			return func(this, apRef);
		}

		BSMultiBoundNode* GetMultiBoundNode(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::GetMultiBoundNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetMultiBoundNode };
			return func(this, apRef);
		}

		BSPortalGraph* CreatePortalGraph()
		{
			using func_t = decltype(&TESObjectCELL::CreatePortalGraph);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CreatePortalGraph };
			return func(this);
		}

		void ClearPortalGraph()
		{
			using func_t = decltype(&TESObjectCELL::ClearPortalGraph);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ClearPortalGraph };
			func(this);
		}

		NiNode* Get3D()
		{
			using func_t = decltype(&TESObjectCELL::Get3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::Get3D };
			return func(this);
		}

		NiNode* Load3D()
		{
			using func_t = decltype(&TESObjectCELL::Load3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::Load3D };
			return func(this);
		}

		static bool IsNodeCulled(TESObjectCELL::CELL_CULL_NODE aiNode)
		{
			using func_t = decltype(&TESObjectCELL::IsNodeCulled);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::IsNodeCulled };
			return func(aiNode);
		}

		void Clear3D()
		{
			using func_t = decltype(&TESObjectCELL::Clear3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::Clear3D };
			func(this);
		}

		TESForm* GetOwner()
		{
			using func_t = decltype(&TESObjectCELL::GetOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetOwner };
			return func(this);
		}

		std::int32_t GetOwnershipRank()
		{
			using func_t = decltype(&TESObjectCELL::GetOwnershipRank);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetOwnershipRank };
			return func(this);
		}

		std::uint32_t GetDetachTime()
		{
			using func_t = decltype(&TESObjectCELL::GetDetachTime);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDetachTime };
			return func(this);
		}

		void SetDetachTime(std::uint32_t aiTime, bool abForce)
		{
			using func_t = void (TESObjectCELL::*)(std::uint32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetDetachTime };
			func(this, aiTime, abForce);
		}

		void SetCellOwnership(TESForm* pform)
		{
			using func_t = decltype(&TESObjectCELL::SetCellOwnership);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetCellOwnership };
			func(this, pform);
		}

		BGSEncounterZone* GetEncounterZone()
		{
			using func_t = decltype(&TESObjectCELL::GetEncounterZone);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetEncounterZone };
			return func(this);
		}

		void SetDetachTime()
		{
			using func_t = void (TESObjectCELL::*)();
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetDetachTime_1 };
			func(this);
		}

		bool IsActorCellOwner(Actor* apActor)
		{
			using func_t = decltype(&TESObjectCELL::IsActorCellOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::IsActorCellOwner };
			return func(this, apActor);
		}

		bool CheckifTrespassing(Actor* apActor)
		{
			using func_t = decltype(&TESObjectCELL::CheckifTrespassing);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CheckifTrespassing };
			return func(this, apActor);
		}

		bool IsActorBaseCellOwner(TESActorBase* apActorBase)
		{
			using func_t = decltype(&TESObjectCELL::IsActorBaseCellOwner);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::IsActorBaseCellOwner };
			return func(this, apActorBase);
		}

		TESObjectLAND* GetLand()
		{
			using func_t = decltype(&TESObjectCELL::GetLand);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLand };
			return func(this);
		}

		void SetLand(TESObjectLAND* apLand)
		{
			using func_t = decltype(&TESObjectCELL::SetLand);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetLand };
			func(this, apLand);
		}

		TESRegionList* GetRegionList(bool abCreateIfNotFound)
		{
			using func_t = decltype(&TESObjectCELL::GetRegionList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetRegionList };
			return func(this, abCreateIfNotFound);
		}

		float GetWaterHeight()
		{
			using func_t = float (TESObjectCELL::*)();
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetWaterHeight };
			return func(this);
		}

		bool GetWaterHeight(NiPoint3 const& arPos, float& afHeight)
		{
			using func_t = bool (TESObjectCELL::*)(NiPoint3 const&, float&);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetWaterHeight_1 };
			return func(this, arPos, afHeight);
		}

		void SetWaterHeight(float afWaterHeight)
		{
			using func_t = decltype(&TESObjectCELL::SetWaterHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetWaterHeight };
			func(this, afWaterHeight);
		}

		BGSMusicType* GetMusicType(NiPoint3* apLoc)
		{
			using func_t = decltype(&TESObjectCELL::GetMusicType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetMusicType };
			return func(this, apLoc);
		}

		TESClimate* GetClimate()
		{
			using func_t = decltype(&TESObjectCELL::GetClimate);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetClimate };
			return func(this);
		}

		TESImageSpace* GetUsableImageSpace()
		{
			using func_t = decltype(&TESObjectCELL::GetUsableImageSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetUsableImageSpace };
			return func(this);
		}

		TESWaterForm* GetWaterType()
		{
			using func_t = decltype(&TESObjectCELL::GetWaterType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetWaterType };
			return func(this);
		}

		static std::int32_t CreateCanopyShadowMaskForCell(TESObjectCELL* apCell, NiRenderedTexture*& apOutTex, void** apOutRect)
		{
			using func_t = decltype(&TESObjectCELL::CreateCanopyShadowMaskForCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CreateCanopyShadowMaskForCell };
			return func(apCell, apOutTex, apOutRect);
		}

		void PlaceCanopyShadowInAdjacentCell(std::int32_t aiX, std::int32_t aiY, void** apRect, std::int32_t aiIndex, std::int32_t aiValue)
		{
			using func_t = decltype(&TESObjectCELL::PlaceCanopyShadowInAdjacentCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PlaceCanopyShadowInAdjacentCell };
			func(this, aiX, aiY, apRect, aiIndex, aiValue);
		}

		void PlaceCanopyShadow(NiPoint3 aLocation, std::uint32_t aiRadius, float afFalloff)
		{
			using func_t = decltype(&TESObjectCELL::PlaceCanopyShadow);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PlaceCanopyShadow };
			func(this, aLocation, aiRadius, afFalloff);
		}

		void AddReference(TESObjectREFR* apRef, bool abOnTop)
		{
			using func_t = decltype(&TESObjectCELL::AddReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddReference };
			func(this, apRef, abOnTop);
		}

		void AddReferenceSimple(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::AddReferenceSimple);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddReferenceSimple };
			func(this, apRef);
		}

		void AttachReference3D(TESObjectREFR* apRef, bool abOnTop)
		{
			using func_t = decltype(&TESObjectCELL::AttachReference3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AttachReference3D };
			func(this, apRef, abOnTop);
		}

		void PerformCellNodeAttach(TESObjectREFR* apRef, NiNode* apParent)
		{
			using func_t = decltype(&TESObjectCELL::PerformCellNodeAttach);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PerformCellNodeAttach };
			func(this, apRef, apParent);
		}

		NiNode* DynamicNode()
		{
			using func_t = decltype(&TESObjectCELL::DynamicNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::DynamicNode };
			return func(this);
		}

		bool TestObjectAgainstRoom(TESObjectREFR* apRef, NiAVObject* apRef3D, TESObjectREFR* apBoundRef, bool& abFoundRoom, bool abMultipleRoomTest)
		{
			using func_t = decltype(&TESObjectCELL::TestObjectAgainstRoom);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::TestObjectAgainstRoom };
			return func(this, apRef, apRef3D, apBoundRef, abFoundRoom, abMultipleRoomTest);
		}

		NiNode* ActorNode()
		{
			using func_t = decltype(&TESObjectCELL::ActorNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ActorNode };
			return func(this);
		}

		void TestObjectAgainstMultibounds(TESObjectREFR* apRef, bool abForceRoomTest, bool abMultipleRoomTest)
		{
			using func_t = decltype(&TESObjectCELL::TestObjectAgainstMultibounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::TestObjectAgainstMultibounds };
			func(this, apRef, abForceRoomTest, abMultipleRoomTest);
		}

		NiNode* StaticNode()
		{
			using func_t = decltype(&TESObjectCELL::StaticNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::StaticNode };
			return func(this);
		}

		static void QueueAttachChild(TESObjectREFR* apRef, NiNode* apParent)
		{
			using func_t = decltype(&TESObjectCELL::QueueAttachChild);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::QueueAttachChild };
			func(apRef, apParent);
		}

		static void PerformQueuedChildAttaches()
		{
			using func_t = decltype(&TESObjectCELL::PerformQueuedChildAttaches);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PerformQueuedChildAttaches };
			func();
		}

		void ChangeProcessLevel(bool abChangeLevel)
		{
			using func_t = decltype(&TESObjectCELL::ChangeProcessLevel);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ChangeProcessLevel };
			func(this, abChangeLevel);
		}

		void ProcessActors()
		{
			using func_t = decltype(&TESObjectCELL::ProcessActors);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ProcessActors };
			func(this);
		}

		static TESObjectREFR* PickRandomTeleportDoorInSpace(TESForm* apDoorSpace, TESForm* apTargetSpace, TESObjectREFR** appOutBackUp)
		{
			using func_t = decltype(&TESObjectCELL::PickRandomTeleportDoorInSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PickRandomTeleportDoorInSpace };
			return func(apDoorSpace, apTargetSpace, appOutBackUp);
		}

		void FillRecipeContainer(TESObjectREFR* apActor, InventoryChanges* apBarterContainer)
		{
			using func_t = decltype(&TESObjectCELL::FillRecipeContainer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::FillRecipeContainer };
			func(this, apActor, apBarterContainer);
		}

		void SaveGameTest()
		{
			using func_t = decltype(&TESObjectCELL::SaveGameTest);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SaveGameTest };
			func(this);
		}

		void ClearReference3D()
		{
			using func_t = decltype(&TESObjectCELL::ClearReference3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ClearReference3D };
			func(this);
		}

		void AddMapMarkersToList(BSSimpleList<TESObjectREFR*>* apMarkList)
		{
			using func_t = decltype(&TESObjectCELL::AddMapMarkersToList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddMapMarkersToList };
			func(this, apMarkList);
		}

		void AddAudioMarkersToList(BSSimpleList<TESObjectREFR*>* apAudioList)
		{
			using func_t = decltype(&TESObjectCELL::AddAudioMarkersToList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddAudioMarkersToList };
			func(this, apAudioList);
		}

		void AttachSounds(bool abAttach)
		{
			using func_t = decltype(&TESObjectCELL::AttachSounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AttachSounds };
			func(this, abAttach);
		}

		void UpdateSounds()
		{
			using func_t = decltype(&TESObjectCELL::UpdateSounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateSounds };
			func(this);
		}

		void AttachLights(bool abAttach)
		{
			using func_t = decltype(&TESObjectCELL::AttachLights);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AttachLights };
			func(this, abAttach);
		}

		void UpdateLights()
		{
			using func_t = decltype(&TESObjectCELL::UpdateLights);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateLights };
			func(this);
		}

		std::uint32_t GetLightCount()
		{
			using func_t = decltype(&TESObjectCELL::GetLightCount);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLightCount };
			return func(this);
		}

		void UpdateReferences3DandProcess()
		{
			using func_t = decltype(&TESObjectCELL::UpdateReferences3DandProcess);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateReferences3DandProcess };
			func(this);
		}

		void AttachModels(bool abSetupMopp)
		{
			using func_t = decltype(&TESObjectCELL::AttachModels);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AttachModels };
			func(this, abSetupMopp);
		}

		void CalcRefCenterPoint(NiPoint3& aOutCenter)
		{
			using func_t = decltype(&TESObjectCELL::CalcRefCenterPoint);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CalcRefCenterPoint };
			func(this, aOutCenter);
		}

		bool RunScripts(bool bIgnore3D, bool bIgnoreActors)
		{
			using func_t = decltype(&TESObjectCELL::RunScripts);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RunScripts };
			return func(this, bIgnore3D, bIgnoreActors);
		}

		void AssignPersistentRefsToCellsInWorld(TESWorldSpace* apWorld)
		{
			using func_t = decltype(&TESObjectCELL::AssignPersistentRefsToCellsInWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AssignPersistentRefsToCellsInWorld };
			func(this, apWorld);
		}

		void AddFurnitureToList(BSSimpleList<TESObjectREFR*>* apFurnList)
		{
			using func_t = decltype(&TESObjectCELL::AddFurnitureToList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddFurnitureToList };
			func(this, apFurnList);
		}

		void RemoveReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::RemoveReference);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveReference };
			func(this, apRef);
		}

		void ClearRefList()
		{
			using func_t = decltype(&TESObjectCELL::ClearRefList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ClearRefList };
			func(this);
		}

		TESObjectREFR* GetFirstRefr()
		{
			using func_t = TESObjectREFR* (TESObjectCELL::*)();
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetFirstRefr };
			return func(this);
		}

		TESObjectREFR* GetFirstRefr(TESObject* apObject, bool abSkipDeleted)
		{
			using func_t = TESObjectREFR* (TESObjectCELL::*)(TESObject*, bool);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetFirstRefr_1 };
			return func(this, apObject, abSkipDeleted);
		}

		void GetCOCPlacementInfo(NiPoint3& aOutPos, NiPoint3& aOutRot)
		{
			using func_t = decltype(&TESObjectCELL::GetCOCPlacementInfo);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetCOCPlacementInfo };
			func(this, aOutPos, aOutRot);
		}

		void DetermineCOCPlacement(NiPoint3& aOutPos, NiPoint3& aOutRot)
		{
			using func_t = decltype(&TESObjectCELL::DetermineCOCPlacement);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::DetermineCOCPlacement };
			func(this, aOutPos, aOutRot);
		}

		static bool EnumReferencesCloseToPointFromInterior(TESObjectCELL* apStartInt, NiPoint3 const& aPoint1, float afRadius1, NiPoint3 const& aPoint2, float afRadius2, void* apfnEnumFunc, std::int32_t aiEnumData)
		{
			using func_t = decltype(&TESObjectCELL::EnumReferencesCloseToPointFromInterior);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::EnumReferencesCloseToPointFromInterior };
			return func(apStartInt, aPoint1, afRadius1, aPoint2, afRadius2, apfnEnumFunc, aiEnumData);
		}

		bool EnumReferencesCloseToPoint(NiPoint3 const& aPoint1, float a_arg2, NiPoint3 const& a_arg3, float aPoint2, void* a_arg5, std::int32_t a_arg6)
		{
			using func_t = decltype(&TESObjectCELL::EnumReferencesCloseToPoint);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::EnumReferencesCloseToPoint };
			return func(this, aPoint1, a_arg2, a_arg3, aPoint2, a_arg5, a_arg6);
		}

		void BuildTeleportDoorList(BSSimpleArray<TESObjectREFR*, 1024>& arOutArray)
		{
			using func_t = decltype(&TESObjectCELL::BuildTeleportDoorList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::BuildTeleportDoorList };
			func(this, arOutArray);
		}

		std::uint32_t FindTeleportDoorsForLocation(NiPoint3 const& arLocation, float a_arg2, BSSimpleArray<TESObjectREFR*, 1024>* a_arg3)
		{
			using func_t = decltype(&TESObjectCELL::FindTeleportDoorsForLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::FindTeleportDoorsForLocation };
			return func(this, arLocation, a_arg2, a_arg3);
		}

		void BuildLocalMapDoorList(BSSimpleList<TESObjectREFR*>* apOutList)
		{
			using func_t = decltype(&TESObjectCELL::BuildLocalMapDoorList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::BuildLocalMapDoorList };
			func(this, apOutList);
		}

		TESWorldSpace* GetWorldSpace()
		{
			using func_t = decltype(&TESObjectCELL::GetWorldSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetWorldSpace };
			return func(this);
		}

		void SetWorldSpace(TESWorldSpace* apWorld)
		{
			using func_t = decltype(&TESObjectCELL::SetWorldSpace);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetWorldSpace };
			func(this, apWorld);
		}

		bool HandleExpiredReferences()
		{
			using func_t = decltype(&TESObjectCELL::HandleExpiredReferences);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::HandleExpiredReferences };
			return func(this);
		}

		void TakeExteriorLocalMapPicture(NiPointer<BSRenderedTexture>& aspRenderedTexture)
		{
			using func_t = decltype(&TESObjectCELL::TakeExteriorLocalMapPicture);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::TakeExteriorLocalMapPicture };
			func(this, aspRenderedTexture);
		}

		void TakeInteriorLocalMapPicture(std::int32_t aiSectionX, std::int32_t aiSectionY, NiPointer<BSRenderedTexture>& aspRenderedTexture)
		{
			using func_t = decltype(&TESObjectCELL::TakeInteriorLocalMapPicture);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::TakeInteriorLocalMapPicture };
			func(this, aiSectionX, aiSectionY, aspRenderedTexture);
		}

		float GetDistanceFromPoint(NiPoint3 const& aPos)
		{
			using func_t = decltype(&TESObjectCELL::GetDistanceFromPoint);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetDistanceFromPoint };
			return func(this, aPos);
		}

		float GetScaleBasedOnLocation(TESRegionPoint* apTest, REGION_DATA_ID aID, TESRegionObjectBase* apObjectBase)
		{
			using func_t = decltype(&TESObjectCELL::GetScaleBasedOnLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetScaleBasedOnLocation };
			return func(this, apTest, aID, apObjectBase);
		}

		bool IsPointInCellExterior(NiPoint3 const& aPt)
		{
			using func_t = decltype(&TESObjectCELL::IsPointInCellExterior);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::IsPointInCellExterior };
			return func(this, aPt);
		}

		bool LoadAllTempData()
		{
			using func_t = decltype(&TESObjectCELL::LoadAllTempData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::LoadAllTempData };
			return func(this);
		}

		bool LoadTempDataFromFile(TESFile* apFile)
		{
			using func_t = decltype(&TESObjectCELL::LoadTempDataFromFile);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::LoadTempDataFromFile };
			return func(this, apFile);
		}

		void UnLoadAllTempData()
		{
			using func_t = decltype(&TESObjectCELL::UnLoadAllTempData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UnLoadAllTempData };
			func(this);
		}

		void CalcLeveledCreatures(bool abAllowRecalc)
		{
			using func_t = decltype(&TESObjectCELL::CalcLeveledCreatures);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CalcLeveledCreatures };
			func(this, abAllowRecalc);
		}

		static bool FindReferenceInFile(TESFile* apFile, std::uint32_t aiRefID)
		{
			using func_t = decltype(&TESObjectCELL::FindReferenceInFile);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::FindReferenceInFile };
			return func(apFile, aiRefID);
		}

		static bool FindLandDataInFile(TESFile* apFile)
		{
			using func_t = decltype(&TESObjectCELL::FindLandDataInFile);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::FindLandDataInFile };
			return func(apFile);
		}

		TESObjectREFR* GetLootBag()
		{
			using func_t = decltype(&TESObjectCELL::GetLootBag);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLootBag };
			return func(this);
		}

		TESObjectREFR* CreateLootBagAtRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESObjectCELL::CreateLootBagAtRef);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CreateLootBagAtRef };
			return func(this, apRef);
		}

		void FillLootBag(TESObjectREFR* apBagRef)
		{
			using func_t = decltype(&TESObjectCELL::FillLootBag);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::FillLootBag };
			func(this, apBagRef);
		}

		void SetLowestProcessToMiddleLow(bool abFlag)
		{
			using func_t = decltype(&TESObjectCELL::SetLowestProcessToMiddleLow);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetLowestProcessToMiddleLow };
			func(this, abFlag);
		}

		bool GetLowestProcessMiddleLow()
		{
			using func_t = decltype(&TESObjectCELL::GetLowestProcessMiddleLow);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLowestProcessMiddleLow };
			return func(this);
		}

		bool GetPersistentCell()
		{
			using func_t = decltype(&TESObjectCELL::GetPersistentCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetPersistentCell };
			return func(this);
		}

		void UpdateManagedNodes(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&TESObjectCELL::UpdateManagedNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateManagedNodes };
			func(this, a_arg1, a_arg2);
		}

		static void SyncActorNodeToHavok(NiNode* apNode)
		{
			using func_t = decltype(&TESObjectCELL::SyncActorNodeToHavok);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SyncActorNodeToHavok };
			func(apNode);
		}

		static void RunQueuedParticleUpdates()
		{
			using func_t = decltype(&TESObjectCELL::RunQueuedParticleUpdates);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RunQueuedParticleUpdates };
			func();
		}

		static void UpdateParticlesOnly(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESObjectCELL::UpdateParticlesOnly);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateParticlesOnly };
			func(ap3D);
		}

		static void UpdateMorphControllersOnly(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESObjectCELL::UpdateMorphControllersOnly);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateMorphControllersOnly };
			func(ap3D);
		}

		void AttachToWorld(NiNode* apRoot)
		{
			using func_t = decltype(&TESObjectCELL::AttachToWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AttachToWorld };
			func(this, apRoot);
		}

		void Detach(bool abDetachHavok)
		{
			using func_t = decltype(&TESObjectCELL::Detach);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::Detach };
			func(this, abDetachHavok);
		}

		void InitHavok()
		{
			using func_t = decltype(&TESObjectCELL::InitHavok);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::InitHavok };
			func(this);
		}

		void SetupMopp()
		{
			using func_t = decltype(&TESObjectCELL::SetupMopp);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetupMopp };
			func(this);
		}

		void RunAnimations()
		{
			using func_t = decltype(&TESObjectCELL::RunAnimations);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RunAnimations };
			func(this);
		}

		void UpdateRefSounds()
		{
			using func_t = decltype(&TESObjectCELL::UpdateRefSounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateRefSounds };
			func(this);
		}

		bool PickWaterDistance(NiPick* apPick, NiPoint3 const& aOrigin, NiPoint3 const& aDir, float afDistance)
		{
			using func_t = decltype(&TESObjectCELL::PickWaterDistance);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PickWaterDistance };
			return func(this, apPick, aOrigin, aDir, afDistance);
		}

		bool PickWorldDistance(NiPick* apPick, NiPoint3 const& aOrigin, NiPoint3 const& aDir, float a_arg4, char a_arg5)
		{
			using func_t = decltype(&TESObjectCELL::PickWorldDistance);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::PickWorldDistance };
			return func(this, apPick, aOrigin, aDir, a_arg4, a_arg5);
		}

		NiAVObject* Pick(bhkPickData& arResult)
		{
			using func_t = decltype(&TESObjectCELL::Pick);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::Pick };
			return func(this, arResult);
		}

		bool GetLandHeight(NiPoint3 const& arPos, float& arHeight)
		{
			using func_t = decltype(&TESObjectCELL::GetLandHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLandHeight };
			return func(this, arPos, arHeight);
		}

		static bool IsFormCellChild(FORM* apFORM)
		{
			using func_t = decltype(&TESObjectCELL::IsFormCellChild);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::IsFormCellChild };
			return func(apFORM);
		}

		static bool IsFormTypeCellChild(std::uint8_t aeType)
		{
			using func_t = decltype(&TESObjectCELL::IsFormTypeCellChild);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::IsFormTypeCellChild };
			return func(aeType);
		}

		bool ToggleCollisionGeometry()
		{
			using func_t = decltype(&TESObjectCELL::ToggleCollisionGeometry);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ToggleCollisionGeometry };
			return func(this);
		}

		void SetCollisionGeometryDisplay(bool abTF)
		{
			using func_t = decltype(&TESObjectCELL::SetCollisionGeometryDisplay);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetCollisionGeometryDisplay };
			func(this, abTF);
		}

		void SetActorCollisionGeometry(bool abTF)
		{
			using func_t = decltype(&TESObjectCELL::SetActorCollisionGeometry);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetActorCollisionGeometry };
			func(this, abTF);
		}

		float GetNorthRotation()
		{
			using func_t = decltype(&TESObjectCELL::GetNorthRotation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetNorthRotation };
			return func(this);
		}

		void AdjustCoordForNorthRotation(NiPoint3 const& aStartCoord, NiPoint3& aOutCoord, bool abClockwise)
		{
			using func_t = decltype(&TESObjectCELL::AdjustCoordForNorthRotation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AdjustCoordForNorthRotation };
			func(this, aStartCoord, aOutCoord, abClockwise);
		}

		SeenData* GetSeenData()
		{
			using func_t = decltype(&TESObjectCELL::GetSeenData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetSeenData };
			return func(this);
		}

		void ClearSeenData()
		{
			using func_t = decltype(&TESObjectCELL::ClearSeenData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ClearSeenData };
			func(this);
		}

		static void UpdateSeenDataForPlayer()
		{
			using func_t = decltype(&TESObjectCELL::UpdateSeenDataForPlayer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateSeenDataForPlayer };
			func();
		}

		void UpdateSeenData(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TESObjectCELL::UpdateSeenData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateSeenData };
			func(this, aCoord);
		}

		static std::int32_t GetSeenValue(NiPoint3 const& aCoord)
		{
			using func_t = decltype(&TESObjectCELL::GetSeenValue);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetSeenValue };
			return func(aCoord);
		}

		IntSeenData* GetIntSeenSection(std::int32_t aiSectionX, std::int32_t aiSectionY, bool abCreate)
		{
			using func_t = decltype(&TESObjectCELL::GetIntSeenSection);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetIntSeenSection };
			return func(this, aiSectionX, aiSectionY, abCreate);
		}

		void UpdateTrees()
		{
			using func_t = decltype(&TESObjectCELL::UpdateTrees);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateTrees };
			func(this);
		}

		void QueueReferences(bool abHighPriorityOnly)
		{
			using func_t = decltype(&TESObjectCELL::QueueReferences);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::QueueReferences };
			func(this, abHighPriorityOnly);
		}

		void UpdateFadeNodes()
		{
			using func_t = decltype(&TESObjectCELL::UpdateFadeNodes);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::UpdateFadeNodes };
			func(this);
		}

		void AddReferencesToLoadedReferenceCollection()
		{
			using func_t = decltype(&TESObjectCELL::AddReferencesToLoadedReferenceCollection);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddReferencesToLoadedReferenceCollection };
			func(this);
		}

		void RemoveReferencesFromLoadedReferenceCollection()
		{
			using func_t = decltype(&TESObjectCELL::RemoveReferencesFromLoadedReferenceCollection);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveReferencesFromLoadedReferenceCollection };
			func(this);
		}

		void AddObstaclesAndDoors()
		{
			using func_t = decltype(&TESObjectCELL::AddObstaclesAndDoors);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::AddObstaclesAndDoors };
			func(this);
		}

		void RemoveObstaclesAndDoors()
		{
			using func_t = decltype(&TESObjectCELL::RemoveObstaclesAndDoors);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveObstaclesAndDoors };
			func(this);
		}

		void SetNavMeshArray(NavMeshArray* apNavMeshArray)
		{
			using func_t = decltype(&TESObjectCELL::SetNavMeshArray);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SetNavMeshArray };
			func(this, apNavMeshArray);
		}

		void ClearLocationMarkers()
		{
			using func_t = decltype(&TESObjectCELL::ClearLocationMarkers);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ClearLocationMarkers };
			func(this);
		}

		void CullChildrenOfMultibounds(bool abCull, TESObjectCELL::CELL_CULL_NODE aeAsProxyForNode)
		{
			using func_t = decltype(&TESObjectCELL::CullChildrenOfMultibounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CullChildrenOfMultibounds };
			func(this, abCull, aeAsProxyForNode);
		}

		void ForceLODFadeIn()
		{
			using func_t = decltype(&TESObjectCELL::ForceLODFadeIn);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ForceLODFadeIn };
			func(this);
		}

		void FadeToLowDetail()
		{
			using func_t = decltype(&TESObjectCELL::FadeToLowDetail);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::FadeToLowDetail };
			func(this);
		}

		bool ShouldDisplayHighDetail()
		{
			using func_t = decltype(&TESObjectCELL::ShouldDisplayHighDetail);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ShouldDisplayHighDetail };
			return func(this);
		}

		static void RenderTestCell(TESObjectCELL* apCell, TESObjectCELL::RENDER_TEST_DATA* apTestData, bool abtestEntireCell)
		{
			using func_t = decltype(&TESObjectCELL::RenderTestCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RenderTestCell };
			func(apCell, apTestData, abtestEntireCell);
		}

		static bool RenderTestPos(TESObjectCELL* apCell, NiPoint3 const& aTestPos, TESObjectCELL::RENDER_TEST_DATA* apTestData)
		{
			using func_t = decltype(&TESObjectCELL::RenderTestPos);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RenderTestPos };
			return func(apCell, aTestPos, apTestData);
		}

		static bool RenderTestPosRot(TESObjectCELL* apCell, NiPoint3 const& aTestPos, NiMatrix3 const& aTestRot, TESObjectCELL::RENDER_TEST_DATA* apTestData)
		{
			using func_t = decltype(&TESObjectCELL::RenderTestPosRot);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RenderTestPosRot };
			return func(apCell, aTestPos, aTestRot, apTestData);
		}

		static void SaveRenderFailureData(TESObjectCELL::RENDER_FAILURE_DATA* apFailureData)
		{
			using func_t = decltype(&TESObjectCELL::SaveRenderFailureData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SaveRenderFailureData };
			func(apFailureData);
		}

		BGSLightingTemplate* GetLightingTemplate()
		{
			using func_t = decltype(&TESObjectCELL::GetLightingTemplate);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLightingTemplate };
			return func(this);
		}

		bool GetLightingTemplateInheritanceFlag(std::uint32_t aiFlag)
		{
			using func_t = decltype(&TESObjectCELL::GetLightingTemplateInheritanceFlag);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetLightingTemplateInheritanceFlag };
			return func(this, aiFlag);
		}

		void RemoveAutoWaterReferenceFromReferencesCurrentWater(TESObjectREFR* apThis)
		{
			using func_t = decltype(&TESObjectCELL::RemoveAutoWaterReferenceFromReferencesCurrentWater);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::RemoveAutoWaterReferenceFromReferencesCurrentWater };
			func(this, apThis);
		}

		void ActivateAllSubmergedReferencesIslands()
		{
			using func_t = decltype(&TESObjectCELL::ActivateAllSubmergedReferencesIslands);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ActivateAllSubmergedReferencesIslands };
			func(this);
		}

		BSSimpleList<TESObjectREFR*>* GetRefList()
		{
			using func_t = decltype(&TESObjectCELL::GetRefList);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetRefList };
			return func(this);
		}

		BSPortalGraph* GetPortalGraph()
		{
			using func_t = decltype(&TESObjectCELL::GetPortalGraph);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetPortalGraph };
			return func(this);
		}

	protected:
		void CellRefLockEnter()
		{
			using func_t = decltype(&TESObjectCELL::CellRefLockEnter);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CellRefLockEnter };
			func(this);
		}

		void CellRefLockLeave()
		{
			using func_t = decltype(&TESObjectCELL::CellRefLockLeave);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CellRefLockLeave };
			func(this);
		}

		void SaveReferences(TESFile* apFile)
		{
			using func_t = decltype(&TESObjectCELL::SaveReferences);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::SaveReferences };
			func(this, apFile);
		}

		INTERIOR_DATA* GetInteriorData()
		{
			using func_t = decltype(&TESObjectCELL::GetInteriorData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::GetInteriorData };
			return func(this);
		}

		void CreateLoadedData()
		{
			using func_t = decltype(&TESObjectCELL::CreateLoadedData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CreateLoadedData };
			func(this);
		}

		void TakeLocalMapPicture(NiCamera* apCamera, NiPointer<BSRenderedTexture>& aspRenderedTexture)
		{
			using func_t = decltype(&TESObjectCELL::TakeLocalMapPicture);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::TakeLocalMapPicture };
			func(this, apCamera, aspRenderedTexture);
		}

		void DetachHavok()
		{
			using func_t = decltype(&TESObjectCELL::DetachHavok);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::DetachHavok };
			func(this);
		}

		static bhkWorldM* CreateWorld(NiPoint3& arCenter)
		{
			using func_t = decltype(&TESObjectCELL::CreateWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::CreateWorld };
			return func(arCenter);
		}

		static void MoveExteriorWorld(NiPoint3& arCenter)
		{
			using func_t = decltype(&TESObjectCELL::MoveExteriorWorld);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::MoveExteriorWorld };
			func(arCenter);
		}

		void ProcessAddonNodesForRefs(bool abAttach)
		{
			using func_t = decltype(&TESObjectCELL::ProcessAddonNodesForRefs);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCELL::ProcessAddonNodesForRefs };
			func(this, abAttach);
		}

	public:
		// members
		std::uint8_t                 cCellFlags;                         // 24
		std::uint8_t                 cCellGameFlags;                     // 25
		std::uint8_t                 cCellState;                         // 26
		std::uint8_t                 pad27;                              // 27
		ExtraDataList                ExtraData;                          // 28
		union
		{
			void* pCellData;
			EXTERIOR_DATA* pCellDataExterior;
			INTERIOR_DATA* pCellDataInterior;
		} ___u6;  // 48
		TESObjectLAND*               pCellLand;                          // 4C
		float                        fWaterHeight;                       // 50
		bool                         bAutoWaterLoaded;                   // 54
		std::uint8_t                 pad55[0x3];                         // 55
		TESTexture                   WaterNoiseTexture;                  // 58
		NavMeshArray*                pNavMeshes;                         // 64
		std::uint8_t                 pad68[0x18];                        // 68
		BSSpinLock                   kSpinLock;                          // 80
		std::uint8_t                 pad88[0x18];                        // 88
		std::int32_t                 iCriticalQueuedRefCount;            // A0
		std::int32_t                 iQueuedRefCount;                    // A4
		std::int16_t                 sNumRefsWithVisibleDistant;         // A8
		std::int16_t                 sNumLoadedRefsWithVisibleDistant;   // AA
		BSSimpleList<TESObjectREFR*> listReferences;                     // AC
		NiPointer<NiNode>            spLightMarkerNode;                  // B4
		NiPointer<NiNode>            spSoundMarkerNode;                  // B8
		NiPointer<NiNode>            spMultiBoundNode;                   // BC
		union
		{
			TESWorldSpace* pWorldSpace;
			std::uint32_t iTempDataOffset;
		} ___u21;  // C0
		LOADED_CELL_DATA*            pLoadedData;                        // C4
		float                        fLodFadeInPercent;                  // C8
		bool                         bLODFadingIn;                       // CC
		bool                         bFadedIn;                           // CD
		bool                         bFadingToHighDetail;                // CE
		bool                         bFadingToLowDetail;                 // CF
		bool                         bDisplayHighDetail;                 // D0
		bool                         bCellDetached;                      // D1
		bool                         bUpdateTerrain;                     // D2
		std::uint8_t                 padD3;                              // D3
		NiPointer<BSPortalGraph>     spPortalGraph;                      // D4
		BGSLightingTemplate*         pLightingTemplate;                  // D8
		std::uint32_t                iLightingTemplateInheritanceFlags;  // DC
	};
	static_assert(sizeof(TESObjectCELL) == 0xE0);
}
