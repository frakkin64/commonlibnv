#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/N/NavMeshSearch.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class NavMesh;
	class PathingRequestSafeStraightLine;

	class NavMeshSearchSLPoint :
		public NavMeshSearch  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearchSLPoint };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearchSLPoint };

		// override (NavMeshSearch)
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode) override;  // 02

		bool FindStraightLinePath(PathingRequestSafeStraightLine* apRequest, NavMeshSearchNode& aStartNode, NavMeshSearchNode& aGoalNode)
		{
			using func_t = decltype(&NavMeshSearchSLPoint::FindStraightLinePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchSLPoint::FindStraightLinePath };
			return func(this, apRequest, aStartNode, aGoalNode);
		}

		bool CheckPointOnGoalCircle(NiPoint3& aCheck, NiPoint3& aTarget, NavMesh* apMesh, NiPoint3& aOutValidPoint)
		{
			using func_t = decltype(&NavMeshSearchSLPoint::CheckPointOnGoalCircle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchSLPoint::CheckPointOnGoalCircle };
			return func(this, aCheck, aTarget, apMesh, aOutValidPoint);
		}

	public:
		// members
		// not placed: TestedStartLocations(absent), TestedEndLocations(absent), TriangleCenters(absent), UnSnappedGoalLocations(absent), FinalGoalLocations(absent), FailedStraightLinePaths(absent), TestedProjectedTriangle(absent)
		PathingLocation TargetLocation;   // 20A4
		NiPoint3        GoalLocation;     // 20CC
		NiPoint3        RightUnitVector;  // 20D8
		NiPoint3        TestStartPoint;   // 20E4
		float           fMinValidRadius;  // 20F0
		float           fMaxValidRadius;  // 20F4
		float           fTargetRadius;    // 20F8
		float           fActorRadius;     // 20FC
		float           fZDelta;          // 2100?
	};
}
