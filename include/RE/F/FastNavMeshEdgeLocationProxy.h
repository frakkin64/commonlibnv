#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshEdgeLocation.h"

namespace RE
{
	class FastNavMeshEdgeLocationProxy
	{
	public:
		FastNavMeshEdgeLocationProxy* ctor()
		{
			using func_t = FastNavMeshEdgeLocationProxy*(__thiscall*)(FastNavMeshEdgeLocationProxy*);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshEdgeLocationProxy::ctor };
			return func(this);
		}

	public:
		// members
		FastNavMeshEdgeLocation Edge;                // 00
		float                   fSqrDistToLocation;  // 18
		float                   fzDelta;             // 1C
	};
	static_assert(sizeof(FastNavMeshEdgeLocationProxy) == 0x20);
}
