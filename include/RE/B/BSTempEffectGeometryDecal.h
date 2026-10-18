#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTempEffect.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSTextureSet;
	class DECAL_CREATION_DATA;
	class NiNode;
	class NiSkinData_BoneData;
	class NiSkinPartition;
	class NiTriBasedGeom;

	class BSTempEffectGeometryDecal :
		public BSTempEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempEffectGeometryDecal };
		static constexpr auto VTABLE{ VTABLE::BSTempEffectGeometryDecal };

		void InitializeUsingAGD()
		{
			using func_t = decltype(&BSTempEffectGeometryDecal::InitializeUsingAGD);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectGeometryDecal::InitializeUsingAGD };
			func(this);
		}

		void InitializeUsingData()
		{
			using func_t = decltype(&BSTempEffectGeometryDecal::InitializeUsingData);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectGeometryDecal::InitializeUsingData };
			func(this);
		}

		void CreateGeometry(NiTriBasedGeom* apGeometry, std::uint16_t aiNewVertex, std::uint16_t aiNewIndex, NiPoint3* apGeomVertex, NiPoint3* apGeomTexCoord, std::uint16_t* apGeomIndex, NiSkinData_BoneData* apGeomBoneData, NiSkinPartition* apPartition, std::uint16_t* apBodyPartIndex)
		{
			using func_t = decltype(&BSTempEffectGeometryDecal::CreateGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSTempEffectGeometryDecal::CreateGeometry };
			func(this, apGeometry, aiNewVertex, aiNewIndex, apGeomVertex, apGeomTexCoord, apGeomIndex, apGeomBoneData, apPartition, apBodyPartIndex);
		}

	public:
		// members
		DECAL_CREATION_DATA*      pDecalData;       // 18
		NiPointer<NiTriBasedGeom> spDecalGeometry;  // 1C
		NiTriBasedGeom*           pGeometry;        // 20
		std::uint16_t*            pOldIndex;        // 24
		bool                      bFinished;        // 28
		std::uint8_t              pad29[0x3];       // 29
		NiPointer<NiTriBasedGeom> spTargetGeom;     // 2C
		NiPointer<NiNode>         spParent;         // 30
		NiPointer<NiNode>         spDecalParent;    // 34
		NiPoint3                  pOrigin;          // 38
		NiPoint3                  pVector;          // 44
		float                     fScale;           // 50
		float                     fRotation;        // 54
		BGSTextureSet*            pTextureSet;      // 58
		std::int32_t              iNumVerts;        // 5C
		std::uint32_t             iBodyParts;       // 60
	};
	static_assert(sizeof(BSTempEffectGeometryDecal) == 0x64);
}
