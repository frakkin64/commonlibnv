#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSTPersistentList.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiTMap.h"
#include "RE/N/NiTPointerAllocator.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BSInstanceRendering;
	class BSShaderProperty_RenderPass;

	// not confirmed: no named code in the executable refers to this type
	class BSBatchRenderer :
		public NiObject  // 00
	{
	public:
		class GeometryGroup;
		class PassGroup;

		class GeometryGroup
		{
		public:
			// members
			std::uint8_t                                                                        ucFlags;         // 00?
			std::uint8_t                                                                        pad01;           // 01
			std::uint16_t                                                                       usCount;         // 02?
			std::uint32_t                                                                       uiPassCount;     // 04?
			BSBatchRenderer*                                                                    pBatchRenderer;  // 08?
			BSTPersistentList<NiTPointerAllocator<std::uint32_t>, BSShaderProperty_RenderPass*> PassList;        // 0C?
			float                                                                               fDepth;          // 20?
		};

		class PassGroup
		{
		public:
			// members
			BSTPersistentList<NiTPointerAllocator<std::uint32_t>, BSShaderProperty_RenderPass*> pListA[5];  // 00?
			std::int32_t                                                                        iSize;      // 64?
		};

		// members
		BSBatchRenderer::PassGroup*                     pRenderPassA;           // 08?
		NiTMap<std::uint32_t, std::uint32_t>            RenderPassMap;          // 0C?
		std::uint32_t                                   uiRenderPassCount;      // 1C?
		std::uint32_t                                   uiCurrentFirstPass;     // 20?
		std::uint32_t                                   uiCurrentLastPass;      // 24?
		BSInstanceRendering*                            pInstanceRenderer;      // 28?
		BSSimpleList<std::uint16_t>                     kActivePassIndexList;   // 2C?
		std::int32_t                                    iGroupingAlphas;        // 34?
		bool                                            bAlphaGroupZPrePass;    // 38?
		std::uint8_t                                    pad39[0x3];             // 39
		BSBatchRenderer::GeometryGroup*                 pGeometryGroupsA[13];   // 3C?
		BSBatchRenderer::GeometryGroup*                 pAlphaGroupA[2];        // 70?
		NiTPointerList<BSBatchRenderer::GeometryGroup*> AlphaGroupList[2];      // 78?
		BSBatchRenderer::GeometryGroup*                 pCurrentAlphaGroup[2];  // 90?
	};
}
