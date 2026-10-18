#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshEdgeHandle.h"
#include "RE/P/Pathing_CheckLineOfSightFilter.h"

namespace RE
{
	class CheckLineOfSightFilterWater :
		public Pathing_CheckLineOfSightFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CheckLineOfSightFilterWater };
		static constexpr auto VTABLE{ VTABLE::CheckLineOfSightFilterWater };

		// override (Pathing_CheckLineOfSightFilter)
		virtual bool CanCrossEdge(FastNavMeshEdgeHandle a_arg1, FastNavMeshEdgeHandle a_arg2) override;  // 00

		// members
		bool         bIsLargeCreature;  // 04
		std::uint8_t pad05[0x3];        // 05
	};
}
