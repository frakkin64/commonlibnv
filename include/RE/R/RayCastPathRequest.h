#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshEdgeLocation.h"
#include "RE/P/PathingLocation.h"
#include "RE/R/RAYCAST_REQUEST_TYPE.h"

namespace RE
{
	class PathingRequest;

	class RayCastPathRequest
	{
	public:
		RayCastPathRequest* ctor()
		{
			using func_t = RayCastPathRequest*(__thiscall*)(RayCastPathRequest*);
			static REL::Relocation<func_t> func{ Offsets::RayCastPathRequest::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(RayCastPathRequest*);
			static REL::Relocation<func_t> func{ Offsets::RayCastPathRequest::dtor };
			func(this);
		}

	public:
		// members
		RAYCAST_REQUEST_TYPE                     eType;                // 00
		PathingRequest*                          pInitialPathRequest;  // 04
		PathingLocation                          StartLocation;        // 08
		PathingLocation                          GoalLocation;         // 30
		BSSimpleArray<NavMeshEdgeLocation, 1024> Edges;                // 58
	};
	static_assert(sizeof(RayCastPathRequest) == 0x68);
}
