#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NavMeshPOV
	{
	public:
		enum class POV_TYPE : std::int32_t
		{
			kPOV_TYPE_INVALID = -1,
			kPOV_TYPE_LEFT_VERTEX = 0x0,
			kPOV_TYPE_RIGHT_VERTEX = 0x1,
			kPOV_TYPE_START = 0x2,
			kPOV_TYPE_GOAL = 0x3,
			kPOV_TYPE_AVOIDNODE = 0x4,
			kPOV_TYPE_AVOIDNODE_NOCROSS = 0x5,
		};

		// members
		NavMeshPOV::POV_TYPE              eType;         // 00
		NiPoint3                          Center;        // 04
		float                             fRadius;       // 10
		NiPoint3                          Edge1;         // 14
		NiPoint3                          Edge2;         // 20
		float                             fCostFactor;   // 2C
		BSSimpleArray<NavMeshPOV*, 1024>* pDuplicates;   // 30
		std::uint16_t                     iVertexIndex;  // 34
		std::uint16_t                     pad36;         // 36
	};
	static_assert(sizeof(NavMeshPOV) == 0x38);
}
