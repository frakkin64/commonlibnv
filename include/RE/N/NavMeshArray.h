#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshPtr.h"

namespace RE
{
	class NavMeshArray
	{
	public:
		NavMeshArray* ctor()
		{
			using func_t = NavMeshArray*(__thiscall*)(NavMeshArray*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshArray::ctor };
			return func(this);
		}

		std::uint32_t AddNavMesh(NavMeshPtr apNavMesh)
		{
			using func_t = decltype(&NavMeshArray::AddNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshArray::AddNavMesh };
			return func(this, apNavMesh);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshArray*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshArray::dtor };
			func(this);
		}

		void RemoveNavMesh(NavMeshPtr apNavMesh)
		{
			using func_t = decltype(&NavMeshArray::RemoveNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshArray::RemoveNavMesh };
			func(this, apNavMesh);
		}

	public:
		// members
		BSSimpleArray<NavMeshPtr, 1024> NavMeshes;  // 00
	};
	static_assert(sizeof(NavMeshArray) == 0x10);
}
