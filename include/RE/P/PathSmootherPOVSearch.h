#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/A/AngleSinCosArc.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/F/FastNavMeshEdgeHandle.h"
#include "RE/F/FastNavMeshVertHandle.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathSmootherPOVLink.h"
#include "RE/P/PathSmootherPOVNode.h"

namespace RE
{
	class FastNavMeshEdgeLocation;
	class NavMesh;
	class NavMeshInfo;
	class PathSmootherPOV;
	class PathingRequest;
	class PathingSolution;
	class Sphere;

	class PathSmootherPOVSearch :
		public AStarSearch<PathSmootherPOVNode, PathSmootherPOVLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathSmootherPOVSearch };
		static constexpr auto VTABLE{ VTABLE::PathSmootherPOVSearch };

		class PathEdgeVert;

		class PathEdgeVert
		{
		public:
			// members
			FastNavMeshVertHandle Vert;             // 00
			FastNavMeshEdgeHandle Edge;             // 08
			std::uint32_t         iOtherSideIndex;  // 14
			std::uint32_t         iThisSideIndex;   // 18
			std::uint32_t         iPOVIndex;        // 1C
		};
		static_assert(sizeof(PathEdgeVert) == 0x20);

		// override (AStarSearch<PathSmootherPOVNode, PathSmootherPOVLink>)
		virtual bool GetNodeConnections(AStarNode<PathSmootherPOVNode, PathSmootherPOVLink> const* apNode, BSSimpleArray<AStarNode<PathSmootherPOVNode, PathSmootherPOVLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<PathSmootherPOVNode, PathSmootherPOVLink> const* apNode);                                                                                                 // 02

		PathSmootherPOVSearch* ctor()
		{
			using func_t = PathSmootherPOVSearch*(__thiscall*)(PathSmootherPOVSearch*);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::ctor };
			return func(this);
		}

		bool SmoothPath(PathingRequest* apRequest, BSSimpleArray<NavMeshSearchNode, 1024> const& aTriSolution, BSSimpleArray<NavMeshSearchLink, 1024> const& aLinks, NiPoint3 const& aStartLocation, NiPoint3 const& aGoalLocation, PathingSolution* apSolution, BSSimpleArray<NavMeshSearchLink, 1024>* apBadNodeArray, BSSimpleArray<NavMeshInfo const*, 1024>* apDetailedPathInfos)
		{
			using func_t = decltype(&PathSmootherPOVSearch::SmoothPath);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::SmoothPath };
			return func(this, apRequest, aTriSolution, aLinks, aStartLocation, aGoalLocation, apSolution, apBadNodeArray, apDetailedPathInfos);
		}

		void BuildPOVList()
		{
			using func_t = decltype(&PathSmootherPOVSearch::BuildPOVList);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::BuildPOVList };
			func(this);
		}

		void AddPOVsFromTrianglePath()
		{
			using func_t = decltype(&PathSmootherPOVSearch::AddPOVsFromTrianglePath);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::AddPOVsFromTrianglePath };
			func(this);
		}

		void CheckAddPOVForVert(BSSimpleArray<PathSmootherPOVSearch::PathEdgeVert, 1024>& aVerts, std::uint32_t aiIndex, bool abLeft)
		{
			using func_t = decltype(&PathSmootherPOVSearch::CheckAddPOVForVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CheckAddPOVForVert };
			func(this, aVerts, aiIndex, abLeft);
		}

		void AddPOVsFromAvoidNodes()
		{
			using func_t = decltype(&PathSmootherPOVSearch::AddPOVsFromAvoidNodes);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::AddPOVsFromAvoidNodes };
			func(this);
		}

		void AddPOVsFromStaticAvoidNodes()
		{
			using func_t = decltype(&PathSmootherPOVSearch::AddPOVsFromStaticAvoidNodes);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::AddPOVsFromStaticAvoidNodes };
			func(this);
		}

		void AddGoalPOVsForGoalsOnNavMeshEdge()
		{
			using func_t = decltype(&PathSmootherPOVSearch::AddGoalPOVsForGoalsOnNavMeshEdge);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::AddGoalPOVsForGoalsOnNavMeshEdge };
			func(this);
		}

		void CreatePathingNodes(bool abFailed)
		{
			using func_t = decltype(&PathSmootherPOVSearch::CreatePathingNodes);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CreatePathingNodes };
			func(this, abFailed);
		}

		void AddNodeForNormalChanges(NavMesh* apStartMesh, std::uint16_t ausStartTri, NiPoint3 const& aStartLoc, NiPoint3 const& aGoalLoc)
		{
			using func_t = decltype(&PathSmootherPOVSearch::AddNodeForNormalChanges);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::AddNodeForNormalChanges };
			func(this, apStartMesh, ausStartTri, aStartLoc, aGoalLoc);
		}

		bool CheckAndAddNodeConnection(AStarNode<PathSmootherPOVNode, PathSmootherPOVLink> const* apNode, PathSmootherPOV* apPOV, BSSimpleArray<AStarNode<PathSmootherPOVNode, PathSmootherPOVLink>*, 1024>* apRetNodes)
		{
			using func_t = decltype(&PathSmootherPOVSearch::CheckAndAddNodeConnection);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CheckAndAddNodeConnection };
			return func(this, apNode, apPOV, apRetNodes);
		}

		bool CheckForLastNode()
		{
			using func_t = decltype(&PathSmootherPOVSearch::CheckForLastNode);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CheckForLastNode };
			return func(this);
		}

		bool CheckArcAgainstNavMesh(FastNavMeshEdgeLocation const& aEntryLocation, Sphere& aSphere, AngleSinCosArc aArc, FastNavMeshEdgeLocation* apReturnLocation)
		{
			using func_t = decltype(&PathSmootherPOVSearch::CheckArcAgainstNavMesh);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CheckArcAgainstNavMesh };
			return func(this, aEntryLocation, aSphere, aArc, apReturnLocation);
		}

		bool CheckSegmentAgainstNavMesh(FastNavMeshEdgeLocation const& aStartLocation, NiPoint3 const& aEndLocation, FastNavMeshEdgeLocation* apReturnLocation, float& afRetPercentPreferred)
		{
			using func_t = decltype(&PathSmootherPOVSearch::CheckSegmentAgainstNavMesh);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CheckSegmentAgainstNavMesh };
			return func(this, aStartLocation, aEndLocation, apReturnLocation, afRetPercentPreferred);
		}

		bool DoubleCheckArcAgainstNavMesh(FastNavMeshEdgeLocation const& aEntryLocation, Sphere& aSphere, AngleSinCosArc aArc)
		{
			using func_t = decltype(&PathSmootherPOVSearch::DoubleCheckArcAgainstNavMesh);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::DoubleCheckArcAgainstNavMesh };
			return func(this, aEntryLocation, aSphere, aArc);
		}

		bool TripleCheckSegmentAgainstNavMesh(FastNavMeshEdgeLocation const& aStartLocation, NiPoint3 const& aEndLocation, FastNavMeshEdgeLocation* apReturnLocation, bool abStartNode, bool abGoalNode, float& afRetPercentPreferred)
		{
			using func_t = decltype(&PathSmootherPOVSearch::TripleCheckSegmentAgainstNavMesh);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::TripleCheckSegmentAgainstNavMesh };
			return func(this, aStartLocation, aEndLocation, apReturnLocation, abStartNode, abGoalNode, afRetPercentPreferred);
		}

		bool CheckSegmentAgainstAvoidNodes(PathSmootherPOV* apPrevPOV, PathSmootherPOV* apNextPOV, NiPoint3 const& aStart, NiPoint3 const& aGoal, float* afRetCost)
		{
			using func_t = decltype(&PathSmootherPOVSearch::CheckSegmentAgainstAvoidNodes);
			static REL::Relocation<func_t> func{ Offsets::PathSmootherPOVSearch::CheckSegmentAgainstAvoidNodes };
			return func(this, apPrevPOV, apNextPOV, aStart, aGoal, afRetCost);
		}

	public:
		// members
		PathingRequest*                                          pRequest;            // 2058
		PathingSolution*                                         pSolution;           // 205C
		NiPoint3                                                 StartLocation;       // 2060
		NiPoint3                                                 GoalLocation;        // 206C
		bool                                                     bUnderWaterPath;     // 2078
		std::uint8_t                                             pad2079[0x3];        // 2079
		const BSSimpleArray<NavMeshSearchNode, 1024>*            Triangles;           // 207C
		const BSSimpleArray<NavMeshSearchLink, 1024>*            Edges;               // 2080
		BSSimpleArray<PathSmootherPOV*, 1024>                    LeftPOVs;            // 2084
		BSSimpleArray<PathSmootherPOV*, 1024>                    RightPOVs;           // 2094
		BSSimpleArray<PathSmootherPOV*, 1024>                    AvoidNodePOVs;       // 20A4
		BSSimpleArray<PathSmootherPOV*, 1024>                    allPOVs;             // 20B4
		PathSmootherPOV*                                         pStartPov;           // 20C4
		PathSmootherPOV*                                         pGoalPov;            // 20C8
		BSSimpleArray<PathSmootherPOVNode, 1024>                 Nodes;               // 20CC
		BSSimpleArray<PathSmootherPOVLink, 1024>                 Links;               // 20DC
		BSSimpleArray<PathSmootherPOVSearch::PathEdgeVert, 1024> LeftVerts;           // 20EC
		BSSimpleArray<PathSmootherPOVSearch::PathEdgeVert, 1024> RightVerts;          // 20FC
		BSSimpleArray<NavMeshInfo const*, 1024>*                 pDetailedPathInfos;  // 210C
	};
}
