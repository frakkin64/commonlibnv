#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPlane.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerListSingleThread.h"

namespace RE
{
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class NiAVObject;
	class NiCamera;
	class TESObjectREFR;
	class TESWaterForm;

	class PlaceableWaterGroup
	{
	public:
		// members
		TESWaterForm*                                    pWaterType;                     // 00
		NiPlane                                          ReflectWaterPlane;              // 04
		NiPlane                                          RefractWaterPlane;              // 14
		NiTPointerListSingleThread<TESObjectREFR*>       PlaceableWaterList;             // 24
		NiTPointerListSingleThread<TESObjectREFR*>       ObjectInWaterList;              // 30
		NiTPointerListSingleThread<TESObjectREFR*>       ActorsInWaterList;              // 3C
		NiTPointerListSingleThread<PlaceableWaterGroup*> SharedReflectionGroups;         // 48
		NiPointer<BSRenderedTexture>                     spGroupReflectionMap;           // 54
		NiPointer<NiAVObject>                            spWadingWaterGeometry;          // 58
		bool                                             bGroupAtWorldSpaceWaterHeight;  // 5C
		bool                                             bRenderGroup;                   // 5D
		bool                                             bRenderDepth;                   // 5E
		bool                                             bRenderGroupReflections;        // 5F
		bool                                             bRenderSilhouetteReflections;   // 60
		std::uint8_t                                     pad61[0x3];                     // 61
		NiTPointerListSingleThread<NiAVObject*>          StaticReflectiveObjects;        // 64
		NiTPointerListSingleThread<NiAVObject*>          DynamicReflectiveObjects;       // 70
		NiTPointerListSingleThread<NiAVObject*>          StaticDepthObjects;             // 7C
		NiTPointerListSingleThread<NiAVObject*>          DynamicDepthObjects;            // 88
		NiPointer<BSShaderAccumulator>                   spGroupReflectionSorter;        // 94
		NiPointer<BSShaderAccumulator>                   spDepthSorter;                  // 98
		std::int32_t                                     iReflectionThreadStage;         // 9C
		std::int32_t                                     iDepthThreadStage;              // A0
		NiPointer<NiCamera>                              spReflectionCamera;             // A4
		NiPointer<NiCamera>                              spDepthCamera;                  // A8
		std::int32_t                                     iStencilBitMask;                // AC
	};
}
