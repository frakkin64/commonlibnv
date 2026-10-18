#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AngleSinCos.h"
#include "RE/F/FastNavMeshEdgeLocation.h"

namespace RE
{
	class PathSmootherPOVLink
	{
	public:
		PathSmootherPOVLink* ctor()
		{
			using func_t = PathSmootherPOVLink*(__thiscall*)(PathSmootherPOVLink*);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVLink::ctor };
			return func(this);
		}

		PathSmootherPOVLink& operator_call(PathSmootherPOVLink const& __that)
		{
			using func_t = decltype(&PathSmootherPOVLink::operator_call);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVLink::operator_call };
			return func(this, __that);
		}

	public:
		// members
		AngleSinCos             ExitAngle;      // 00
		AngleSinCos             EntryAngle;     // 08
		FastNavMeshEdgeLocation ExitLocation;   // 10
		FastNavMeshEdgeLocation EntryLocation;  // 28
	};
}
