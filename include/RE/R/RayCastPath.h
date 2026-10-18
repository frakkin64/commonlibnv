#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/P/PathingLocation.h"
#include "RE/R/RAYCASTPATH_RESULT.h"
#include "RE/R/RAYCAST_REQUEST_TYPE.h"

namespace RE
{
	class RayCastPath
	{
	public:
		RayCastPath* ctor()
		{
			using func_t = RayCastPath*(__thiscall*)(RayCastPath*);
			static REL::Relocation<func_t> func{ Offsets::RayCastPath::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(RayCastPath*);
			static REL::Relocation<func_t> func{ Offsets::RayCastPath::dtor };
			func(this);
		}

	public:
		// members
		RAYCAST_REQUEST_TYPE                 eType;    // 00
		RAYCASTPATH_RESULT                   eResult;  // 04
		BSSimpleArray<PathingLocation, 1024> Nodes;    // 08
	};
	static_assert(sizeof(RayCastPath) == 0x18);
}
