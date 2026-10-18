#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSDistantObjectBlock;
	class BGSDistantTreeBlock;
	class BGSTerrainChunk;
	class BGSTerrainManager;
	class BSSegmentedTriShape;
	class NiNode;

	class BGSTerrainNode
	{
	public:
		enum class DATA_TO_UNLOAD : std::int32_t
		{
			kUNLOAD_TERRAIN_ONLY = 0x1,
			kUNLOAD_OBJECTS_ONLY = 0x2,
			kUNLOAD_TREES_ONLY = 0x4,
			kUNLOAD_ALL = 0x7,
		};

		enum class PARENT_POSITION : std::int32_t
		{
			kPP_TOPLEVEL = 0x0,
			kPP_UPPER_LEFT = 0x1,
			kPP_UPPER_RIGHT = 0x2,
			kPP_LOWER_LEFT = 0x3,
			kPP_LOWER_RIGHT = 0x4,
		};

		bool QSplitNode()
		{
			using func_t = decltype(&BGSTerrainNode::QSplitNode);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::QSplitNode };
			return func(this);
		}

		bool QPersistentNode()
		{
			using func_t = decltype(&BGSTerrainNode::QPersistentNode);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::QPersistentNode };
			return func(this);
		}

		BGSTerrainNode* ctor(BGSTerrainManager* apManager, BGSTerrainNode* apParent, std::int16_t asBaseCellX, std::int16_t asBaseCellY, std::uint32_t aiLevel, bool abPersistentNode)
		{
			using func_t = BGSTerrainNode*(__thiscall*)(BGSTerrainNode*, BGSTerrainManager*, BGSTerrainNode*, std::int16_t, std::int16_t, std::uint32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::ctor };
			return func(this, apManager, apParent, asBaseCellX, asBaseCellY, aiLevel, abPersistentNode);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSTerrainNode*);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::dtor };
			func(this);
		}

		void UnloadDataRecurse(BGSTerrainNode::DATA_TO_UNLOAD aeDataToUnload)
		{
			using func_t = decltype(&BGSTerrainNode::UnloadDataRecurse);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UnloadDataRecurse };
			func(this, aeDataToUnload);
		}

		void UnloadPersistentDataRecurse()
		{
			using func_t = decltype(&BGSTerrainNode::UnloadPersistentDataRecurse);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UnloadPersistentDataRecurse };
			func(this);
		}

		void UpdateTerrain(NiPoint3 const& aViewPosition, bool abUpdateWaterVisibility)
		{
			using func_t = decltype(&BGSTerrainNode::UpdateTerrain);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UpdateTerrain };
			func(this, aViewPosition, abUpdateWaterVisibility);
		}

		void UpdateBlocks(NiPoint3 const& aViewPosition, bool abUpdateVisibility)
		{
			using func_t = decltype(&BGSTerrainNode::UpdateBlocks);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UpdateBlocks };
			func(this, aViewPosition, abUpdateVisibility);
		}

		void UpdateTrees(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::UpdateTrees);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UpdateTrees };
			func(this, aViewPosition);
		}

		void UpdateMorphParameters(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::UpdateMorphParameters);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UpdateMorphParameters };
			func(this, aViewPosition);
		}

		bool GetPointIsInNode(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainNode::GetPointIsInNode);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::GetPointIsInNode };
			return func(this, aPoint);
		}

		BGSTerrainChunk* GetChunkForPoint(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainNode::GetChunkForPoint);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::GetChunkForPoint };
			return func(this, aPoint);
		}

		BGSDistantTreeBlock* GetTreeBlockForPoint(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&BGSTerrainNode::GetTreeBlockForPoint);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::GetTreeBlockForPoint };
			return func(this, aPoint);
		}

		bool CheckIntersectsLoadedRange()
		{
			using func_t = decltype(&BGSTerrainNode::CheckIntersectsLoadedRange);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::CheckIntersectsLoadedRange };
			return func(this);
		}

		void UpdateBlockVisibility(bool abDebugOutput)
		{
			using func_t = decltype(&BGSTerrainNode::UpdateBlockVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UpdateBlockVisibility };
			func(this, abDebugOutput);
		}

		void UpdateWaterVisibility(BSSegmentedTriShape* apWater, bool abDebugOutput)
		{
			using func_t = decltype(&BGSTerrainNode::UpdateWaterVisibility);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UpdateWaterVisibility };
			func(this, apWater, abDebugOutput);
		}

	private:
		void UnloadData(BGSTerrainNode::DATA_TO_UNLOAD aeDataToUnload)
		{
			using func_t = decltype(&BGSTerrainNode::UnloadData);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::UnloadData };
			func(this, aeDataToUnload);
		}

		bool ShouldSplit(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::ShouldSplit);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::ShouldSplit };
			return func(this, aViewPosition);
		}

		bool ShouldLoadBlock(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::ShouldLoadBlock);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::ShouldLoadBlock };
			return func(this, aViewPosition);
		}

		bool ShouldLoadBlockLowPriority(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::ShouldLoadBlockLowPriority);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::ShouldLoadBlockLowPriority };
			return func(this, aViewPosition);
		}

		bool ShouldLoadTrees(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::ShouldLoadTrees);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::ShouldLoadTrees };
			return func(this, aViewPosition);
		}

		float DistToSquare(NiPoint2 aCenter, float a_arg2, NiPoint2 aPt)
		{
			using func_t = decltype(&BGSTerrainNode::DistToSquare);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::DistToSquare };
			return func(this, aCenter, a_arg2, aPt);
		}

		float ComputeMorphParameter(NiPoint3 const& aViewPosition)
		{
			using func_t = decltype(&BGSTerrainNode::ComputeMorphParameter);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::ComputeMorphParameter };
			return func(this, aViewPosition);
		}

		void StartTextureMorph()
		{
			using func_t = decltype(&BGSTerrainNode::StartTextureMorph);
			static REL::Relocation<func_t> func{ Offsets::BGSTerrainNode::StartTextureMorph };
			func(this);
		}

	public:
		// members
		BGSTerrainManager*              pManager;             // 00
		std::uint32_t                   iLevel;               // 04
		std::int16_t                    sBaseCellX;           // 08
		std::int16_t                    sBaseCellY;           // 0A
		bool                            bHasGeometry;         // 0C
		bool                            bChildrenLoaded;      // 0D
		std::uint16_t                   pad0E;                // 0E
		BGSTerrainChunk*                pChunk;               // 10
		BGSDistantObjectBlock*          pBlock;               // 14
		BGSDistantTreeBlock*            pTrees;               // 18
		NiNode*                         pSceneNode;           // 1C
		BGSTerrainNode*                 pChildren[4];         // 20
		BGSTerrainNode*                 pParent;              // 30
		NiPoint3                        Center;               // 34
		float                           fCornerRadius;        // 40
		float                           fSplitDistance;       // 44
		float                           fStartMorphDistance;  // 48
		float                           fEndMorphDistance;    // 4C
		std::uint32_t                   uiFadeStartTime;      // 50
		bool                            bTexFading;           // 54
		std::uint8_t                    pad55[0x3];           // 55
		BGSTerrainNode::PARENT_POSITION ParentPosition;       // 58
		bool                            bPersistentNode;      // 5C
		bool                            bSplitNode;           // 5D
		std::uint16_t                   pad5E;                // 5E
	};
}
