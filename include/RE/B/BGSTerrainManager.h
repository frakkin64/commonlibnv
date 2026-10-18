#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSDistantTreeBlock;
	class BGSTerrainChunk;
	class BGSTerrainNode;
	class NiCamera;
	class NiNode;
	class NiPoint3;
	class NiTexture;
	class TESObjectREFR;
	class TESWorldSpace;

	class BGSTerrainManager
	{
	public:
		enum class LOD_UPDATE_TYPE : std::int32_t
		{
			kUPDATE_LAND_AND_BLOCKS = 0x1,
			kUPDATE_BLOCK_VISIBILITY = 0x2,
			kUPDATE_WATER_VISIBILITY = 0x4,
			kUPDATE_TREES = 0x8,
			kUPDATE_ALL = 0xF,
		};

		NiNode* GetLODLandRoot()
		{
			using func_t = decltype(&BGSTerrainManager::GetLODLandRoot);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetLODLandRoot };
			return func(this);
		}

		NiNode* GetLODObjectRoot()
		{
			using func_t = decltype(&BGSTerrainManager::GetLODObjectRoot);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetLODObjectRoot };
			return func(this);
		}

		NiNode* GetTreeNode()
		{
			using func_t = decltype(&BGSTerrainManager::GetTreeNode);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetTreeNode };
			return func(this);
		}

		BGSTerrainManager* ctor(TESWorldSpace* apWorld)
		{
			using func_t = BGSTerrainManager*(__thiscall*)(BGSTerrainManager*, TESWorldSpace*);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::ctor };
			return func(this, apWorld);
		}

		void Update(NiPoint3 const& aViewPosition, BGSTerrainManager::LOD_UPDATE_TYPE aWhatToUpdate)
		{
			using func_t = decltype(&BGSTerrainManager::Update);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::Update };
			func(this, aViewPosition, aWhatToUpdate);
		}

		NiTexture* GetDiffuseTextureForPoint(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainManager::GetDiffuseTextureForPoint);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetDiffuseTextureForPoint };
			return func(this, aPoint);
		}

		NiTexture* GetNormalTextureForPoint(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainManager::GetNormalTextureForPoint);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetNormalTextureForPoint };
			return func(this, aPoint);
		}

		BGSTerrainChunk* GetChunkForPoint(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainManager::GetChunkForPoint);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetChunkForPoint };
			return func(this, aPoint);
		}

		BGSDistantTreeBlock* GetTreeBlockForPoint(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainManager::GetTreeBlockForPoint);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetTreeBlockForPoint };
			return func(this, aPoint);
		}

		void HideTree(TESObjectREFR* apTreeRef, bool abQueue)
		{
			using func_t = decltype(&BGSTerrainManager::HideTree);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::HideTree };
			func(this, apTreeRef, abQueue);
		}

		void ShowTree(TESObjectREFR* apTreeRef)
		{
			using func_t = decltype(&BGSTerrainManager::ShowTree);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::ShowTree };
			func(this, apTreeRef);
		}

		void UpdateMultiBoundVisibility(NiCamera* apCamera)
		{
			using func_t = decltype(&BGSTerrainManager::UpdateMultiBoundVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::UpdateMultiBoundVisibility };
			func(this, apCamera);
		}

		static bool GetCurrentWorldHasLOD()
		{
			using func_t = decltype(&BGSTerrainManager::GetCurrentWorldHasLOD);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::GetCurrentWorldHasLOD };
			return func();
		}

		static void ShowMinimumDetail()
		{
			using func_t = decltype(&BGSTerrainManager::ShowMinimumDetail);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::ShowMinimumDetail };
			func();
		}

		static void ShowNormalDetail()
		{
			using func_t = decltype(&BGSTerrainManager::ShowNormalDetail);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::ShowNormalDetail };
			func();
		}

		static void DisableBlockVisibility()
		{
			using func_t = decltype(&BGSTerrainManager::DisableBlockVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::DisableBlockVisibility };
			func();
		}

		static void EnableBlockVisibility()
		{
			using func_t = decltype(&BGSTerrainManager::EnableBlockVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::EnableBlockVisibility };
			func();
		}

		void SetNeedsImmediateUpdate(bool abUpdate)
		{
			using func_t = decltype(&BGSTerrainManager::SetNeedsImmediateUpdate);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainManager::SetNeedsImmediateUpdate };
			func(this, abUpdate);
		}

	public:
		// members
		TESWorldSpace*                      pWorld;                 // 00
		BGSTerrainNode*                     pRootNode;              // 04
		NiPointer<NiNode>                   spLODRoot;              // 08
		NiPointer<NiNode>                   spLODWaterRoot;         // 0C
		std::int16_t                        sMinCellX;              // 10
		std::int16_t                        sMinCellY;              // 12
		std::int16_t                        sMaxCellX;              // 14
		std::int16_t                        sMaxCellY;              // 16
		std::uint32_t                       iMaxLevel;              // 18
		std::uint32_t                       iMinLevel;              // 1C
		std::uint32_t                       iRootLevel;             // 20
		std::uint32_t                       iBlockLevel;            // 24
		bool                                bNeedsImmediateUpdate;  // 28
		bool                                bHasLOD;                // 29
		std::uint16_t                       pad2A;                  // 2A
		BSSimpleArray<TESObjectREFR*, 1024> TreesQueuedToHide;      // 2C
	};
	static_assert(sizeof(BGSTerrainManager) == 0x3C);
}
