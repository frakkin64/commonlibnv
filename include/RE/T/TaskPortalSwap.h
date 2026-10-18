#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshEdgeHandle.h"

namespace RE
{
	class TaskPortalSwap
	{
	public:
		TaskPortalSwap* ctor()
		{
			using func_t = TaskPortalSwap*(__thiscall*)(TaskPortalSwap*);
			static REL::Relocation<func_t> func{ Offsets::TaskPortalSwap::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TaskPortalSwap*);
			static REL::Relocation<func_t> func{ Offsets::TaskPortalSwap::dtor };
			func(this);
		}

	public:
		// members
		BSSimpleArray<NavMeshEdgeHandle, 1024> PotentialChildren;  // 00
		BSSimpleArray<NavMeshEdgeHandle, 1024> PotentialParents;   // 10
	};
}
