#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshEdgeHandle.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class FastNavMeshEdgeLocation :
		public FastNavMeshEdgeHandle  // 00
	{
	public:
		FastNavMeshEdgeLocation* ctor()
		{
			using func_t = FastNavMeshEdgeLocation*(__thiscall*)(FastNavMeshEdgeLocation*);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshEdgeLocation::ctor };
			return func(this);
		}

		FastNavMeshEdgeLocation* ctor(FastNavMeshEdgeHandle const& aHandle, NiPoint3 const& aLocation)
		{
			using func_t = FastNavMeshEdgeLocation*(__thiscall*)(FastNavMeshEdgeLocation*, FastNavMeshEdgeHandle const&, NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshEdgeLocation::ctor_1 };
			return func(this, aHandle, aLocation);
		}

		FastNavMeshEdgeLocation* ctor(FastNavMeshEdgeLocation const& aLocation)
		{
			using func_t = FastNavMeshEdgeLocation*(__thiscall*)(FastNavMeshEdgeLocation*, FastNavMeshEdgeLocation const&);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshEdgeLocation::ctor_2 };
			return func(this, aLocation);
		}

		FastNavMeshEdgeLocation& operator_call(FastNavMeshEdgeLocation const& aLocation)
		{
			using func_t = decltype(&FastNavMeshEdgeLocation::operator_call);
			static REL::Relocation<func_t> func{ Offsets::FastNavMeshEdgeLocation::operator_call };
			return func(this, aLocation);
		}

	public:
		// members
		NiPoint3 Location;  // 0C
	};
}
