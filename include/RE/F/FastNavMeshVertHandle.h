#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMesh;

	class FastNavMeshVertHandle
	{
	public:
		FastNavMeshVertHandle* ctor(NavMesh* apNavMesh, std::uint16_t ausVertex)
		{
			using func_t = FastNavMeshVertHandle*(__thiscall*)(FastNavMeshVertHandle*, NavMesh*, std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshVertHandle::ctor };
			return func(this, apNavMesh, ausVertex);
		}

	public:
		// members
		NavMesh*      pNavMesh;  // 00
		std::uint16_t usVertex;  // 04
		std::uint16_t pad06;     // 06
	};
}
