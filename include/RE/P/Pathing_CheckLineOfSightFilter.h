#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshEdgeHandle.h"

namespace RE
{
	class __declspec(novtable) Pathing_CheckLineOfSightFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::Pathing_CheckLineOfSightFilter };
		static constexpr auto VTABLE{ VTABLE::Pathing_CheckLineOfSightFilter };

		// add
		virtual bool CanCrossEdge(FastNavMeshEdgeHandle a_arg1, FastNavMeshEdgeHandle a_arg2);  // 00
	};
	static_assert(sizeof(Pathing_CheckLineOfSightFilter) == 0x4);
}
