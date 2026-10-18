#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshTriHandle.h"

namespace RE
{
	class FastNavMeshEdgeHandle :
		public FastNavMeshTriHandle  // 00
	{
	public:
		FastNavMeshEdgeHandle* ctor(FastNavMeshEdgeHandle const& aNavMeshEdgeHandle)
		{
			using func_t = FastNavMeshEdgeHandle*(__thiscall*)(FastNavMeshEdgeHandle*, FastNavMeshEdgeHandle const&);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshEdgeHandle::ctor };
			return func(this, aNavMeshEdgeHandle);
		}

	public:
		// members
		std::int32_t iEdgeIndex;  // 08
	};
	static_assert(sizeof(FastNavMeshEdgeHandle) == 0xC);
}
