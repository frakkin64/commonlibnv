#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMesh;

	class NAVMESH_PORTAL
	{
	public:
		void Endian()
		{
			using func_t = decltype(&NAVMESH_PORTAL::Endian);
			static REL::Relocation<func_t> func{ Offsets::NAVMESH_PORTAL::Endian };
			func(this);
		}

	public:
		// members
		union
		{
			std::uint32_t NavMeshID;
			NavMesh* pNavMesh;
		} ___u0;  // 00
		std::uint16_t iTriIndex;  // 04
		std::uint16_t pad06;      // 06
	};
	static_assert(sizeof(NAVMESH_PORTAL) == 0x8);
}
