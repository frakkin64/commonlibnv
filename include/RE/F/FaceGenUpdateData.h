#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryDataIteratorNiPoint3.h"

namespace RE
{
	class BSFaceGenBaseMorphExtraData;
	class BSFaceGenMorphDataHead;
	class NiTriBasedGeom;

	class FaceGenUpdateData
	{
	public:
		// members
		NiTriBasedGeom*                ptri;          // 00
		NiGeometryDataIteratorNiPoint3 iter;          // 04
		BSFaceGenMorphDataHead*        pmorph;        // 10
		BSFaceGenBaseMorphExtraData*   pmorphBase;    // 14
		std::uint32_t                  ivertCount;    // 18
		bool                           bbaseApplied;  // 1C
		std::uint8_t                   pad1D[0x3];    // 1D
	};
}
