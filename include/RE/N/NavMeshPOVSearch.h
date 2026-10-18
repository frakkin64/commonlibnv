#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANGLE_DIRECTION.h"
#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/A/AngleSinCosArc.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/F/FastNavMeshTriHandle.h"
#include "RE/N/NavMeshPOVSearchLink.h"
#include "RE/N/NavMeshPOVSearchNode.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class AngleSinCos;
	class FastNavMeshEdgeLocation;
	class NavMeshPOV;
	class NiColorA;
	class NiPoint3;
	class PathingRequest;
	class PathingSolution;
	class Sphere;

	class NavMeshPOVSearch :
		public AStarSearch<NavMeshPOVSearchNode, NavMeshPOVSearchLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshPOVSearch };
		static constexpr auto VTABLE{ VTABLE::NavMeshPOVSearch };

		// override (AStarSearch<NavMeshPOVSearchNode, NavMeshPOVSearchLink>)
		virtual bool GetNodeConnections(AStarNode<NavMeshPOVSearchNode, NavMeshPOVSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshPOVSearchNode, NavMeshPOVSearchLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshPOVSearchNode, NavMeshPOVSearchLink> const* apNode);                                                                                                   // 02

		NavMeshPOVSearch* ctor()
		{
			using func_t = NavMeshPOVSearch*(__thiscall*)(NavMeshPOVSearch*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::ctor };
			return func(this);
		}

		bool BuildPOVListForTriangles(BSSimpleArray<FastNavMeshTriHandle, 1024> const& apList, BSSimpleArray<BSSimpleArray<NavMeshPOV*, 1024>, 1024>& aRetPOVs)
		{
			using func_t = decltype(&NavMeshPOVSearch::BuildPOVListForTriangles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::BuildPOVListForTriangles };
			return func(this, apList, aRetPOVs);
		}

		bool BuildPath(PathingLocation& aStartLocation, PathingLocation& aGoalLocation, BSSimpleArray<FastNavMeshTriHandle, 1024> const* apList, PathingRequest* apRequest, PathingSolution* apSolution)
		{
			using func_t = decltype(&NavMeshPOVSearch::BuildPath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::BuildPath };
			return func(this, aStartLocation, aGoalLocation, apList, apRequest, apSolution);
		}

		float CheckArcAgainstPOVs(NavMeshPOV* apThisPOV, AngleSinCosArc aArc, NavMeshPOV* apIgnorePOV)
		{
			using func_t = decltype(&NavMeshPOVSearch::CheckArcAgainstPOVs);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::CheckArcAgainstPOVs };
			return func(this, apThisPOV, aArc, apIgnorePOV);
		}

		bool CheckArcAgainstNavMesh2(FastNavMeshEdgeLocation const& aEntryLocation, Sphere& aSphere, AngleSinCosArc aArc, FastNavMeshEdgeLocation* apReturnLocation)
		{
			using func_t = decltype(&NavMeshPOVSearch::CheckArcAgainstNavMesh2);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::CheckArcAgainstNavMesh2 };
			return func(this, aEntryLocation, aSphere, aArc, apReturnLocation);
		}

		bool CheckSegmentAgainstNavMesh(FastNavMeshEdgeLocation const& aStartLocation, NiPoint3 const& aEndLocation, FastNavMeshEdgeLocation* apReturnLocation)
		{
			using func_t = decltype(&NavMeshPOVSearch::CheckSegmentAgainstNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::CheckSegmentAgainstNavMesh };
			return func(this, aStartLocation, aEndLocation, apReturnLocation);
		}

		static void DrawArc(NiPoint3 const& aCenter, float a_arg2, AngleSinCos const& a_arg3, AngleSinCos const& aStartAngle, ANGLE_DIRECTION aGoalAngle, NiColorA const& aDirection)
		{
			using func_t = decltype(&NavMeshPOVSearch::DrawArc);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::DrawArc };
			func(aCenter, a_arg2, a_arg3, aStartAngle, aGoalAngle, aDirection);
		}

		static void DrawLine(NiPoint3 const& aStart, NiPoint3 const& aGoal, NiColorA const& aColor)
		{
			using func_t = decltype(&NavMeshPOVSearch::DrawLine);
			static REL::Relocation<func_t> func{ Offsets::NavMeshPOVSearch::DrawLine };
			func(aStart, aGoal, aColor);
		}

	public:
		// members
		BSSimpleArray<NavMeshPOV*, 1024>                      allPOVs;        // 2058
		BSSimpleArray<BSSimpleArray<NavMeshPOV*, 1024>, 1024> POVs;           // 2068
		NavMeshPOV*                                           pStartPov;      // 2078
		NavMeshPOV*                                           pGoalPov;       // 207C
		PathingRequest*                                       pRequest;       // 2080
		PathingSolution*                                      pSolution;      // 2084
		PathingLocation                                       StartLocation;  // 2088
		PathingLocation                                       GoalLocation;   // 20B0
		BSSimpleArray<NavMeshPOVSearchNode, 1024>             Nodes;          // 20D8?
		BSSimpleArray<NavMeshPOVSearchLink, 1024>             Links;          // 20E8?
	};
}
