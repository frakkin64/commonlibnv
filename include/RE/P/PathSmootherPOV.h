#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshEdgeHandle.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class PathSmootherPOV
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

		PathSmootherPOV* ctor()
		{
			using func_t = PathSmootherPOV*(__thiscall*)(PathSmootherPOV*);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOV::ctor };
			return func(this);
		}

	public:
		// members
		PathSmootherPOV::POV_TYPE eType;            // 00
		NiPoint3                  Center;           // 04
		float                     fRadius;          // 10
		FastNavMeshEdgeHandle     EdgeHandle;       // 14
		NiPoint3                  Edge1;            // 20
		NiPoint3                  Edge2;            // 2C
		float                     fCostFactor;      // 38
		std::uint32_t             iThisSideIndex;   // 3C
		std::uint32_t             iOtherSideIndex;  // 40
		std::uint32_t             iAvoidNodeIndex;  // 44
		std::uint16_t             iVertexIndex;     // 48
		std::uint16_t             pad4A;            // 4A
	};
	static_assert(sizeof(PathSmootherPOV) == 0x4C);
}
