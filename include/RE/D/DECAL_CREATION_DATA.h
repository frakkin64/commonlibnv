#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSTextureSet;
	class NiAVObject;
	class NiNode;
	class TESObjectCELL;
	class TESObjectREFR;

	class DECAL_CREATION_DATA
	{
	public:
		DECAL_CREATION_DATA* ctor()
		{
			using func_t = DECAL_CREATION_DATA*(__thiscall*)(DECAL_CREATION_DATA*);
			static REL::Relocation<func_t> func{ Offsets::DECAL_CREATION_DATA::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: fParallaxOcclusionScale(absent), pSkinnedDecalNode(absent), fPlacementRadius
		NiPoint3       pOrigin;                       // 00
		NiPoint3       pDirection;                    // 0C
		NiPoint3       pSurfaceNormal;                // 18
		TESObjectREFR* pObjRefr;                      // 24
		NiAVObject*    pAVObj;                        // 28
		NiNode*        pClone;                        // 2C
		BGSTextureSet* pTexSet;                       // 30
		std::int32_t   iIndex;                        // 34
		float          fDecalWidth;                   // 38
		float          fDecalHeight;                  // 3C
		float          fDecalDepth;                   // 40
		float          fRotation;                     // 44
		TESObjectCELL* pParentCell;                   // 48
		float          fSpecular;                     // 4C
		float          fDecalEpsilon;                 // 50
		NiColor        fVertexColor;                  // 54
		std::uint32_t  iBodyParts;                    // 60
		std::uint8_t   cSubTex;                       // 64
		bool           bPermanent;                    // 65
		bool           bUseOcclusionQuery;            // 66
		bool           bUseParallaxOcclusion;         // 67
		bool           bAlphaTesting;                 // 68
		bool           bAlphaBlending;                // 69?
		std::uint8_t   ucParallaxOcclusionMaxPasses;  // 6A?
		bool           bModelSpace;                   // 6B?
		bool           bForceFade;                    // 6C?
		bool           bTwoSided;                     // 6D?
		std::uint16_t  pad6E;                         // 6E
	};
}
