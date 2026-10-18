#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMap.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiBound.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSDistantTreeBlockLoadTask;
	class BGSTerrainNode;
	class BSDistantTreeShaderProperty;
	class BSResizableTriShape;
	class NiFile;
	class NiTriShapeData;
	class TESWorldSpace;

	class BGSDistantTreeBlock
	{
	public:
		class InstanceData;
		class TreeGroup;
		class TreeType;

		class InstanceData
		{
		public:
			// members
			NiPoint3      Pos;         // 00
			float         fRotZ;       // 0C
			float         fScale;      // 10
			std::uint32_t id;          // 14
			std::uint32_t uiGroup;     // 18
			bool          bHidden;     // 1C
			std::uint8_t  pad1D[0x3];  // 1D
		};
		static_assert(sizeof(InstanceData) == 0x20);

		class TreeType
		{
		public:
			// members
			std::uint32_t             uiNumber;           // 00
			float                     fWidth;             // 04
			float                     fHeight;            // 08
			float                     u0;                 // 0C
			float                     v0;                 // 10
			float                     u1;                 // 14
			float                     v1;                 // 18
			NiPointer<NiTriShapeData> spSharedModelData;  // 1C
		};
		static_assert(sizeof(TreeType) == 0x20);

		class TreeGroup
		{
		public:
			// members
			BGSDistantTreeBlock::TreeType*                         pTreeType;                // 00
			NiPointer<BSResizableTriShape>                         spGeometry;               // 04
			BSSimpleArray<BGSDistantTreeBlock::InstanceData, 1024> Instances;                // 08
			std::uint32_t                                          uiNum;                    // 18?
			bool                                                   bShaderPropertyUpToDate;  // 1C?
			std::uint8_t                                           pad1D[0x3];               // 1D
		};

		BGSDistantTreeBlock* ctor(BGSTerrainNode* apNode, std::uint32_t auiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = BGSDistantTreeBlock*(__thiscall*)(BGSDistantTreeBlock*, BGSTerrainNode*, std::uint32_t, std::int16_t, std::int16_t);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::ctor };
			return func(this, apNode, auiLevel, asCellX, asCellY);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSDistantTreeBlock*);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::dtor };
			func(this);
		}

		static void AllocateStaticData(TESWorldSpace* apWorld)
		{
			using func_t = decltype(&BGSDistantTreeBlock::AllocateStaticData);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::AllocateStaticData };
			func(apWorld);
		}

		void AddTree(std::uint32_t uiType, BGSDistantTreeBlock::InstanceData const& apInstanceData)
		{
			using func_t = decltype(&BGSDistantTreeBlock::AddTree);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::AddTree };
			func(this, uiType, apInstanceData);
		}

		static void BuildBlockFileName(char* apOutput, TESWorldSpace* apWorld, std::int32_t aiLevel, std::int16_t asCellX, std::int16_t asCellY)
		{
			using func_t = decltype(&BGSDistantTreeBlock::BuildBlockFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::BuildBlockFileName };
			func(apOutput, apWorld, aiLevel, asCellX, asCellY);
		}

		void Read(NiFile* apInputFile)
		{
			using func_t = decltype(&BGSDistantTreeBlock::Read);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::Read };
			func(this, apInputFile);
		}

		void Attach()
		{
			using func_t = decltype(&BGSDistantTreeBlock::Attach);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::Attach };
			func(this);
		}

		static void ReadTypes(NiFile* apInputFile)
		{
			using func_t = decltype(&BGSDistantTreeBlock::ReadTypes);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::ReadTypes };
			func(apInputFile);
		}

		void UpdateShaderProperties()
		{
			using func_t = decltype(&BGSDistantTreeBlock::UpdateShaderProperties);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::UpdateShaderProperties };
			func(this);
		}

		void HideQueuedTrees()
		{
			using func_t = decltype(&BGSDistantTreeBlock::HideQueuedTrees);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::HideQueuedTrees };
			func(this);
		}

	private:
		static void AllocateStaticDataForTreeType(BGSDistantTreeBlock::TreeType& aType)
		{
			using func_t = decltype(&BGSDistantTreeBlock::AllocateStaticDataForTreeType);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::AllocateStaticDataForTreeType };
			func(aType);
		}

		NiBound ComputeBound(BGSDistantTreeBlock::TreeGroup const& result)
		{
			using func_t = decltype(&BGSDistantTreeBlock::ComputeBound);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::ComputeBound };
			return func(this, result);
		}

		void SetupShaderProperty(BSDistantTreeShaderProperty* apProp, BGSDistantTreeBlock::TreeGroup& aGroup)
		{
			using func_t = decltype(&BGSDistantTreeBlock::SetupShaderProperty);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlock::SetupShaderProperty };
			func(this, apProp, aGroup);
		}

	public:
		// members
		NiPointer<BGSDistantTreeBlockLoadTask>                   spLoadTask;         // 00
		BSSimpleArray<BGSDistantTreeBlock::TreeGroup*, 1024>     TreeGroups;         // 04
		BSMap<std::uint32_t, BGSDistantTreeBlock::InstanceData*> InstanceMap;        // 14
		BSMap<std::uint32_t, BGSDistantTreeBlock::TreeGroup*>    NextGroup;          // 24
		BSSimpleArray<std::uint32_t, 1024>                       TreesQueuedToHide;  // 34
		BGSTerrainNode*                                          pNode;              // 44
		bool                                                     bDoneLoading;       // 48
		bool                                                     bAttached;          // 49
		std::uint16_t                                            pad4A;              // 4A
	};
}
