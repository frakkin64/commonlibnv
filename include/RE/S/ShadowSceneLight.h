#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiFrustumPlanes.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BSMultiBoundNode;
	class BSPortal;
	class BSPortalGraph;
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class NiAVObject;
	class NiCamera;
	class NiLight;
	class NiNode;
	class NiTexture;
	class NiTriBasedGeom;

	class ShadowSceneLight :
		public NiRefObject  // 00
	{
	public:
		NiLight* GetLight()
		{
			using func_t = decltype(&ShadowSceneLight::GetLight);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneLight::GetLight };
			return func(this);
		}

		void InsertUnusedFence()
		{
			using func_t = decltype(&ShadowSceneLight::InsertUnusedFence);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneLight::InsertUnusedFence };
			func(this);
		}

	public:
		// members
		std::int32_t                              iEnabledPasses;                // 08
		float                                     fLuminance;                    // 0C
		std::uint8_t                              kViewProjection[0x40];         // 10 opaque
		std::uint8_t                              kShadowView[0x40];             // 50 opaque
		std::uint8_t                              kShadowProj[0x40];             // 90 opaque
		float                                     fLODDimmer;                    // D0
		float                                     fShadowLODDimmer;              // D4
		float                                     fShadowLODDimmerTarget;        // D8
		float                                     fShadowLODDimmerElapsed;       // DC
		NiTPointerList<NiPointer<NiTriBasedGeom>> lGeomList;                     // E0
		bool                                      bCastShadow;                   // EC
		bool                                      bCubeShadowMap;                // ED
		std::uint16_t                             padEE;                         // EE
		NiPointer<NiTexture>                      spSpecularAttenuationTexture;  // F0
		bool                                      bPointLight;                   // F4
		bool                                      bAmbientLight;                 // F5
		std::uint16_t                             padF6;                         // F6
		NiPointer<NiLight>                        spLight;                       // F8
		bool                                      bDynamicLight;                 // FC
		std::uint8_t                              padFD[0x3];                    // FD
		NiPoint3                                  bPointPosition;                // 100
		NiPointer<BSRenderedTexture>              spDynamicShadowMap;            // 10C
		std::uint16_t                             usFrustumCull;                 // 110
		std::uint16_t                             pad112;                        // 112
		NiPointer<NiAVObject>                     spFrustumVis;                  // 114
		bool                                      bShadowSpotlight;              // 118
		std::uint8_t                              pad119[0x3];                   // 119
		float                                     fSpotlightFOV;                 // 11C
		float                                     fSpotlightFalloff;             // 120
		bool                                      bShowDebugTexture;             // 124
		std::uint8_t                              pad125[0x3];                   // 125
		NiPointer<NiAVObject>                     spShadowScene;                 // 128
		NiTPointerList<NiPointer<NiAVObject>>     lRootList;                     // 12C
		void*                                     kGeomListFence;                // 138
		NiPointer<NiTriBasedGeom>                 kGeomListFenceObject;          // 13C
		NiPointer<NiCamera>                       spShadowCamera;                // 140?
		NiFrustumPlanes                           kShadowCameraPlanes;           // 144?
		float                                     pfClipSpacePlanes[24];         // 1A8?
		bool                                      bClipSpacePlanesReady;         // 208?
		std::uint8_t                              pad209[0x3];                   // 209
		NiPointer<BSShaderAccumulator>            spShadowAccumulator;           // 20C?
		BSSimpleArray<BSMultiBoundNode*, 1024>    kMultiboundRooms;              // 210?
		BSSimpleArray<BSPortal*, 1024>            kPortals;                      // 220?
		BSSimpleArray<NiNode*, 1024>              kProcessedNodes;               // 230?
		BSPortalGraph*                            pPortalGraph;                  // 240?
	};
}
