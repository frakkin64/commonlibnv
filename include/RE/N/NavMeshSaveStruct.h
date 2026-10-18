#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshSaveStruct
	{
	public:
		void Endian()
		{
			using func_t = decltype(&NavMeshSaveStruct::Endian);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSaveStruct::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t ParentCellID;     // 00
		std::uint32_t VertexCount;      // 04
		std::uint32_t TriangleCount;    // 08
		std::uint32_t ExtraInfoCount;   // 0C
		std::uint32_t CoverArrayCount;  // 10
		std::uint32_t DoorPortalCount;  // 14
	};
	static_assert(sizeof(NavMeshSaveStruct) == 0x18);
}
