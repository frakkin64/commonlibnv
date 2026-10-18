#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BSCubeMapCamera;
	class BSFogProperty;
	class BSPortalGraph;
	class BSRenderedTexture;
	class NiAVObject;
	class ShadowSceneLight;

	class ShadowSceneNode :
		public NiNode  // 00
	{
	public:
		BSPortalGraph* QPortalGraph()
		{
			using func_t = decltype(&ShadowSceneNode::QPortalGraph);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::QPortalGraph };
			return func(this);
		}

		void SetSceneGraphIndex(std::uint8_t acSceneGraphIndex)
		{
			using func_t = decltype(&ShadowSceneNode::SetSceneGraphIndex);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::SetSceneGraphIndex };
			func(this, acSceneGraphIndex);
		}

		void SetEyePosition(NiPoint3 aPosition)
		{
			using func_t = decltype(&ShadowSceneNode::SetEyePosition);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::SetEyePosition };
			func(this, aPosition);
		}

		void SetLightingOffset(NiPoint3 kOffset)
		{
			using func_t = decltype(&ShadowSceneNode::SetLightingOffset);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::SetLightingOffset };
			func(this, kOffset);
		}

		void RemoveObject(NiAVObject* apObject)
		{
			using func_t = decltype(&ShadowSceneNode::RemoveObject);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::RemoveObject };
			func(this, apObject);
		}

		void RemoveAllLights()
		{
			using func_t = decltype(&ShadowSceneNode::RemoveAllLights);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::RemoveAllLights };
			func(this);
		}

		ShadowSceneNode* ctor()
		{
			using func_t = ShadowSceneNode*(__thiscall*)(ShadowSceneNode*);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::ctor };
			return func(this);
		}

		void AddObject(NiAVObject* apObject)
		{
			using func_t = decltype(&ShadowSceneNode::AddObject);
			static REL::Relocation<func_t> func{ Offsets::ShadowSceneNode::AddObject };
			func(this, apObject);
		}

	public:
		// members
		// not placed: kCompoundFrustum, bVisibleUnboundSpace
		bool                                        bFrustumAddedToVis;               // AC
		std::uint8_t                                padAD[0x3];                       // AD
		float                                       fStoredFarClip;                   // B0
		NiTPointerList<NiPointer<ShadowSceneLight>> lLightList;                       // B4
		NiTPointerList<NiPointer<ShadowSceneLight>> lShadowLightList;                 // C0
		void*                                       kShadowLightListIterator;         // CC
		void*                                       kShadowLightActiveFence;          // D0
		void*                                       kShadowLightFadingInFence;        // D4
		NiPointer<ShadowSceneLight>                 kShadowLightActiveFenceObject;    // D8
		NiPointer<ShadowSceneLight>                 kShadowLightFadingInFenceObject;  // DC
		ShadowSceneLight*                           pSunLight;                        // E0
		NiTPointerList<NiPointer<ShadowSceneLight>> lLightQueueAdd;                   // E4
		NiTPointerList<NiPointer<ShadowSceneLight>> lLightQueueRemove;                // F0
		NiTPointerList<NiPointer<ShadowSceneLight>> lLightQueueUpdate;                // FC
		NiTPointerList<NiPointer<NiAVObject>>       lObjectQueueUpdate;               // 108
		NiTPointerList<NiPointer<NiAVObject>>       lObjectQueueUpdateActiveOnly;     // 114
		std::uint8_t                                cSceneGraphIndex;                 // 120
		std::uint8_t                                pad121[0x3];                      // 121
		NiPointer<BSRenderedTexture>                pWindowReflectionEnvMap;          // 124
		NiPointer<BSCubeMapCamera>                  spCubeMapCamera;                  // 128
		std::int32_t                                iCurrentCubeMapFace;              // 12C
		bool                                        bDisableLightUpdate;              // 130
		bool                                        bWireframe;                       // 131
		std::uint16_t                               pad132;                           // 132
		NiPointer<BSFogProperty>                    spFog;                            // 134
		std::uint8_t                                pad138[0x54];                     // 138
		BSPortalGraph*                              pBSPortalGraph;                   // 18C
		NiPoint3                                    kLightingOffset;                  // 190?
		NiPoint3                                    kEyePosition;                     // 19C?
		bool                                        bAllowLightRemoveQueues;          // 1A8?
		std::uint8_t                                pad1A9[0x3];                      // 1A9
	};
}
