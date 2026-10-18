#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSWin32TaskletData.h"
#include "RE/N/NavMeshEdgeLocation.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PathingLocation.h"
#include "RE/R/RAYCASTPATH_RESULT.h"

namespace RE
{
	class ActorPathingMessageQueue;
	class PathingRequest;
	class RayCastPath;
	class RayCastPathRequest;

	class PathingTaskData :
		public BSWin32TaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingTaskData };
		static constexpr auto VTABLE{ VTABLE::PathingTaskData };

		// override (BSWin32TaskletData)
		virtual ~PathingTaskData() = default;  // 00
		virtual void Process() override;       // 02

		PathingTaskData* ctor(NiPointer<PathingRequest> const& aspRequest, NiPointer<ActorPathingMessageQueue> aspMessageQueue)
		{
			using func_t = PathingTaskData*(__thiscall*)(PathingTaskData*, NiPointer<PathingRequest> const&, NiPointer<ActorPathingMessageQueue>);
			static REL::Relocation<func_t> func{ Offsets::PathingTaskData::ctor };
			return func(this, aspRequest, aspMessageQueue);
		}

		std::int32_t ComputeRayCasts()
		{
			using func_t = decltype(&PathingTaskData::ComputeRayCasts);
			static REL::Relocation<func_t> func{ Offsets::PathingTaskData::ComputeRayCasts };
			return func(this);
		}

		bool AllRayCastPathComputed()
		{
			using func_t = decltype(&PathingTaskData::AllRayCastPathComputed);
			static REL::Relocation<func_t> func{ Offsets::PathingTaskData::AllRayCastPathComputed };
			return func(this);
		}

		RAYCASTPATH_RESULT GetRayCastPath(PathingLocation& aStartLocation, PathingLocation& aGoalLocation, BSSimpleArray<PathingLocation, 1024>& aRetPath)
		{
			using func_t = decltype(&PathingTaskData::GetRayCastPath);
			static REL::Relocation<func_t> func{ Offsets::PathingTaskData::GetRayCastPath };
			return func(this, aStartLocation, aGoalLocation, aRetPath);
		}

		RAYCASTPATH_RESULT GetRayCastPathToNavmesh(BSSimpleArray<NavMeshEdgeLocation, 1024> const& aEdges, PathingLocation& aGoalLocation, BSSimpleArray<PathingLocation, 1024>& aRetPath, bool abStart)
		{
			using func_t = decltype(&PathingTaskData::GetRayCastPathToNavmesh);
			static REL::Relocation<func_t> func{ Offsets::PathingTaskData::GetRayCastPathToNavmesh };
			return func(this, aEdges, aGoalLocation, aRetPath, abStart);
		}

	public:
		// members
		// not placed: spRequest(absent), spSolution(absent)
		BSSpinLock                               RayCastLock;          // 20
		BSSimpleArray<RayCastPathRequest*, 1024> RayCastRequests;      // 28?
		BSSimpleArray<RayCastPath*, 1024>        RayCastPaths;         // 38?
		NiPointer<ActorPathingMessageQueue>      spMessageQueue;       // 48?
		bool                                     bWaitingForRayCasts;  // 4C?
		std::uint8_t                             pad4D[0x3];           // 4D
	};
}
