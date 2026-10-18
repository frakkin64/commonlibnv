#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSTempEffect.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPlane.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSDecalNode;
	class BGSTextureSet;
	class BSOcclusionQuery;
	class BSRenderedTexture;
	class DecalVertex;
	class NiAVObject;
	class NiColorA;
	class NiPoint2;

	class BSTempEffectSimpleDecal :
		public BSTempEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempEffectSimpleDecal };
		static constexpr auto VTABLE{ VTABLE::BSTempEffectSimpleDecal };

		void CleanUpMemory()
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::CleanUpMemory);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::CleanUpMemory };
			func(this);
		}

		static void PreloadDecalData()
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::PreloadDecalData);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::PreloadDecalData };
			func();
		}

		bool ProcessGeometry(NiAVObject* apAVObj)
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::ProcessGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::ProcessGeometry };
			return func(this, apAVObj);
		}

		bool FinalizeGeometry()
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::FinalizeGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::FinalizeGeometry };
			return func(this);
		}

		bool AddPolygon(std::int32_t aiVertexCount, std::int32_t* apIndex, NiPoint3* apVertex, NiPoint3 const* apNormal)
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::AddPolygon);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::AddPolygon };
			return func(this, aiVertexCount, apIndex, apVertex, apNormal);
		}

		void ClipMesh(NiAVObject* apAVObj)
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::ClipMesh);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::ClipMesh };
			func(this, apAVObj);
		}

		std::int32_t ClipPolygon(std::int32_t aiVertexCount, std::int32_t const* apInIndex, NiPoint3 const* apInVertex, NiPoint3 const* apInNormal, std::int32_t* apOutIndex, NiPoint3* apOutVertex, NiPoint3* apOutNormal)
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::ClipPolygon);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::ClipPolygon };
			return func(this, aiVertexCount, apInIndex, apInVertex, apInNormal, apOutIndex, apOutVertex, apOutNormal);
		}

		static std::int32_t ClipPolygonAgainstPlane(NiPlane* apPlane, std::int32_t aiVertexCount, std::int32_t const* apInIndex, NiPoint3 const* apInVertex, NiPoint3 const* apInNormal, std::int32_t* apOutIndex, NiPoint3* apOutVertex, NiPoint3* apOutNormal)
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::ClipPolygonAgainstPlane);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::ClipPolygonAgainstPlane };
			return func(apPlane, aiVertexCount, apInIndex, apInVertex, apInNormal, apOutIndex, apOutVertex, apOutNormal);
		}

		bool CheckOcclusionQueryResults()
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::CheckOcclusionQueryResults);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::CheckOcclusionQueryResults };
			return func(this);
		}

		void CreateDebugBox(NiColorA& arColor, bool abWireframe)
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::CreateDebugBox);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::CreateDebugBox };
			func(this, arColor, abWireframe);
		}

	private:
		void ResizeDataArrays()
		{
			using func_t = decltype(&BSTempEffectSimpleDecal::ResizeDataArrays);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectSimpleDecal::ResizeDataArrays };
			func(this);
		}

	public:
		// members
		bool                              bFinished;                     // 18
		bool                              bFinalize;                     // 19
		bool                              bOcclusionQuery;               // 1A
		bool                              bClearQueryTexture;            // 1B
		BSOcclusionQuery*                 pOcclusionQuery;               // 1C
		NiPointer<BSRenderedTexture>      spQueryTexture;                // 20
		std::uint32_t                     iCurrentOcclusionResult;       // 24
		NiPointer<NiAVObject>             sp3D;                          // 28
		bool                              bPermanent;                    // 2C
		bool                              bValidDecal;                   // 2D
		bool                              bForceFade;                    // 2E
		std::uint8_t                      pad2F;                         // 2F
		BGSTextureSet*                    pTextureSet;                   // 30
		NiPoint3                          pOrigin;                       // 34
		NiPoint3                          pVector;                       // 40
		NiPoint3                          pDecalCenter;                  // 4C
		NiPoint3                          pDecalNormal;                  // 58
		NiPlane                           pClippingPlanes[6];            // 64
		std::int32_t                      iDecalVertexCount;             // C4
		std::int32_t                      iDecalTriangleCount;           // C8
		NiPoint3*                         pTempVertexArray;              // CC
		NiPoint3*                         pFinalVertexArray;             // D0
		NiPoint3*                         pTempNormalArray;              // D4
		NiPoint3*                         pFinalNormalArray;             // D8
		NiPoint2*                         pTempTexcoordArray;            // DC
		NiPoint2*                         pFinalTexcoordArray;           // E0
		NiColorA*                         pTempColorArray;               // E4
		NiColorA*                         pFinalColorArray;              // E8
		std::uint16_t*                    pTempIndexArray;               // EC
		std::uint16_t*                    pFinalIndexArray;              // F0
		std::int16_t*                     pOldToNewIndexArray;           // F4
		BSSimpleArray<DecalVertex*, 1024> pNewIndexMap;                  // F8
		BGSDecalNode*                     pParentNode;                   // 108
		NiPointer<NiAVObject>             spTargetNode;                  // 10C
		float                             fScale;                        // 110
		float                             fRotation;                     // 114
		float                             fWidth;                        // 118
		float                             fHeight;                       // 11C
		float                             fDepth;                        // 120
		std::uint8_t                      cSubTexture;                   // 124
		bool                              bUseParallaxOcclusion;         // 125
		std::uint16_t                     pad126;                        // 126
		float                             fParallaxOcclusionScale;       // 128
		std::uint8_t                      ucParallaxOcclusionMaxPasses;  // 12C
		bool                              bUseAlphaTesting;              // 12D
		bool                              bUseAlphaBlending;             // 12E
		std::uint8_t                      pad12F;                        // 12F
		float                             fSpecular;                     // 130
		NiColor                           fVertexColor;                  // 134
		bool                              bModelSpace;                   // 140
		bool                              bTwoSided;                     // 141
		std::uint16_t                     pad142;                        // 142
	};
	static_assert(sizeof(BSTempEffectSimpleDecal) == 0x144);
}
