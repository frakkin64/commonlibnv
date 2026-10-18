#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderManager_BATCHRENDERER_CREATION_MODE.h"
#include "RE/B/BSShaderManager_etRenderMode.h"
#include "RE/B/BSShaderProperty_RenderPass.h"
#include "RE/B/BSTPersistentList.h"
#include "RE/N/NiAlphaAccumulator.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiCriticalSection.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerAllocator.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/S/SunOcclusionTest.h"

namespace RE
{
	class BSBatchRenderer;
	class BSInstanceRendering;
	class BSOcclusionQuery;
	class BSRenderedTexture;
	class NiAVObject;
	class NiGeometry;
	class NiNode;
	class ReferenceVolume;
	class ShadowSceneLight;
	class ShadowSceneNode;

	class BSShaderAccumulator :
		public NiAlphaAccumulator  // 00
	{
	public:
		enum class etAccumulationMode : std::int32_t
		{
			kBSSA_ACCUMNORMAL = 0x0,
			kBSSA_ACCUMDEPTHMAP = 0x1,
			kBSSA_ACCUMLOD = 0x2,
			kBSSA_ACCUMNONE = 0x3,
		};

		void SetShadowSceneNode(ShadowSceneNode* apShadowSceneNode)
		{
			using func_t = decltype(&BSShaderAccumulator::SetShadowSceneNode);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::SetShadowSceneNode };
			func(this, apShadowSceneNode);
		}

		void SetRenderMode(BSShaderManager_etRenderMode aeRenderMode)
		{
			using func_t = decltype(&BSShaderAccumulator::SetRenderMode);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::SetRenderMode };
			func(this, aeRenderMode);
		}

		void SetWaterReflection(bool abWaterReflection)
		{
			using func_t = decltype(&BSShaderAccumulator::SetWaterReflection);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::SetWaterReflection };
			func(this, abWaterReflection);
		}

		void ClearAllQueries()
		{
			using func_t = decltype(&BSShaderAccumulator::ClearAllQueries);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::ClearAllQueries };
			func(this);
		}

		void RemoveBoundVolume(std::uint32_t auiReferenceID)
		{
			using func_t = decltype(&BSShaderAccumulator::RemoveBoundVolume);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::RemoveBoundVolume };
			func(this, auiReferenceID);
		}

		BSShaderAccumulator* ctor(BSShaderManager_BATCHRENDERER_CREATION_MODE aeBatchRendererCreationType, std::uint32_t auiBatchRendererCount, std::uint32_t auiPassesPerBatchRenderer)
		{
			using func_t = BSShaderAccumulator*(__thiscall*)(BSShaderAccumulator*, BSShaderManager_BATCHRENDERER_CREATION_MODE, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::ctor };
			return func(this, aeBatchRendererCreationType, auiBatchRendererCount, auiPassesPerBatchRenderer);
		}

	protected:
		NiNode* CreateRenderPassTree()
		{
			using func_t = decltype(&BSShaderAccumulator::CreateRenderPassTree);
			static REL::Relocation<func_t> func{ Offsets::BSShaderAccumulator::CreateRenderPassTree };
			return func(this);
		}

	public:
		// members
		BSShaderAccumulator::etAccumulationMode                            eAccumulationMode;                   // 34
		bool                                                               bWorldGeometry;                      // 38
		bool                                                               bCacheGeometry;                      // 39
		bool                                                               bDoDepthPasses;                      // 3A
		std::uint8_t                                                       pad3B;                               // 3B
		std::uint32_t                                                      uiSunPixelCount;                     // 3C
		bool                                                               bWaitingForSunQueury;                // 40
		std::uint8_t                                                       pad41[0x3];                          // 41
		float                                                              fPercentSunOccludedStored;           // 44
		SunOcclusionTest                                                   pSunTests[3];                        // 48
		bool                                                               bAccumulate;                         // 84
		bool                                                               b1stPerson;                          // 85
		bool                                                               bRenderNoShader;                     // 86
		std::uint8_t                                                       pad87;                               // 87
		std::uint16_t                                                      usQueryCount;                        // 88
		std::uint16_t                                                      usQuerySize;                         // 8A
		BSOcclusionQuery**                                                 ppOcclusionQuery;                    // 8C
		NiTPointerList<NiGeometry*>                                        pVolumetricFogGeometry;              // 90
		BSTPersistentList<NiTPointerAllocator<std::uint32_t>, NiGeometry*> pRenderedGeometryCache[4];           // 9C
		BSTPersistentList<NiTPointerAllocator<std::uint32_t>, NiGeometry*> pRendered1stPersonGeometryCache[4];  // EC
		NiPointer<NiGeometry>                                              spBoundTestGeometry;                 // 13C
		NiTPointerList<ReferenceVolume*>                                   ReferenceVolumeList;                 // 140
		std::uint32_t                                                      uiLastOcclusionRef;                  // 14C
		bool                                                               bLastOcclusionResult;                // 150
		std::uint8_t                                                       pad151[0x3];                         // 151
		NiColorA                                                           kSilhouetteColor;                    // 154
		bool                                                               bWaterReflection;                    // 164
		bool                                                               bWaterRefraction;                    // 165
		bool                                                               bCellHasWater;                       // 166
		bool                                                               bUnderWater;                         // 167
		std::int32_t                                                       iCurrentWaterHeight;                 // 168
		bool                                                               bRenderDecals;                       // 16C
		std::uint8_t                                                       pad16D[0x3];                         // 16D
		BSInstanceRendering*                                               pInstanceRenderer;                   // 170
		BSBatchRenderer*                                                   pBatchRenderer[2];                   // 174
		std::uint32_t*                                                     puicurrentPassA;                     // 17C
		std::int32_t*                                                      picurrentBucketA;                    // 180
		bool*                                                              pbcurrentFirstPassA;                 // 184
		bool*                                                              pbcurrentActiveA;                    // 188
		std::uint32_t                                                      uiBatchRendererCount;                // 18C
		std::uint32_t                                                      uiBatchRendererPassCount;            // 190
		ShadowSceneNode*                                                   pActiveShadowSceneNode;              // 194
		NiPointer<BSRenderedTexture>                                       spWaterFogRenderTarget;              // 198
		BSShaderManager_etRenderMode                                       eRenderMode;                         // 19C
		NiPointer<ShadowSceneLight>                                        spShadowLight;                       // 1A0
		BSShaderProperty_RenderPass                                        kAlphaRenderPass;                    // 1A4
		NiTPointerMap<NiAVObject*, bool>                                   kRoomSharedMap;                      // 1B4
		NiCriticalSection                                                  BSCPSharedCrit;                      // 1C4?
	};
}
