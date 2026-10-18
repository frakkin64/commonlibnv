#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSFaceGenMorphData;
	class EGMData;
	class NiNode;
	class NiPoint3;
	class NiTriBasedGeom;

	class BSFaceGenModelMeshData
	{
	public:
		void IncRefCount()
		{
			using func_t = decltype(&BSFaceGenModelMeshData::IncRefCount);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMeshData::IncRefCount };
			func(this);
		}

		void DecRefCount()
		{
			using func_t = decltype(&BSFaceGenModelMeshData::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMeshData::DecRefCount };
			func(this);
		}

	public:
		// members
		BSStringT<char>               EGMFilename;               // 00
		EGMData*                      pEGMData;                  // 08
		NiPointer<NiNode>             spModelRoot;               // 0C
		NiPointer<NiTriBasedGeom>     spModel;                   // 10
		NiPoint3*                     pAdditionalVertices;       // 14
		std::uint32_t                 iAdditionalVerticesCount;  // 18
		NiPointer<BSFaceGenMorphData> spMorph;                   // 1C
		std::int32_t                  iRefCount;                 // 20
	};
}
