#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiColorA;
	class NiNode;
	class NiPoint2;

	class BSPolygon2D
	{
	public:
		// members
		BSSimpleArray<NiPoint3, 1024>*      pVertexSimpleArray;       // 00
		BSSimpleArray<std::uint16_t, 1024>* pConcaveVertexIndexList;  // 04
		BSSimpleArray<std::uint16_t, 1024>* pIndexSimpleArray;        // 08
		NiPoint3*                           pVertexArray;             // 0C
		std::uint16_t*                      pIndexArray;              // 10
		NiPoint3*                           pNormalArray;             // 14
		NiPoint2*                           pTexcoordArray;           // 18
		NiColorA*                           pColorArray;              // 1C
		bool                                bClockwise;               // 20
		std::uint8_t                        pad21[0x3];               // 21
		std::int32_t                        iVertexCount;             // 24
		std::int32_t                        iTriangleCount;           // 28
		NiPointer<NiNode>                   spRootNode;               // 2C
		NiPointer<NiAVObject>               sp3D;                     // 30
		NiPoint3                            vWorldTranslate;          // 34?
	};
}
