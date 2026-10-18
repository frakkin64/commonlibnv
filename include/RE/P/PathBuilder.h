#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshEdgeLocation.h"
#include "RE/N/NavMeshPtr.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/P/PathBuilder_FindTriangleForLocationWaterFilter.h"
#include "RE/P/PathingLocation.h"
#include "RE/P/Pathing_UPDATE_DETAILED_PATH_RESULT.h"
#include "RE/R/RAYCASTPATH_RESULT.h"

namespace RE
{
	class Actor;
	class NavMeshInfo;
	class NiPoint3;
	class ParentSpaceNode;
	class PathingRequest;
	class PathingSolution;
	class ScrapHeap;
	class TESObjectREFR;
	class VirtualPathingNode;

	class PathBuilder
	{
	public:
		using FindTriangleForLocationWaterFilter = PathBuilder_FindTriangleForLocationWaterFilter;

		class VirtualNodeSegment;

		enum class ADD_NODES_FROM_NAVMESH_RESULT : std::int32_t
		{
			kADD_NODES_FROM_NAVMESH_RESULT_OK = 0x0,
			kADD_NODES_FROM_NAVMESH_RESULT_INCOMPLETE = 0x1,
			kADD_NODES_FROM_NAVMESH_RESULT_FAILED = 0x2,
		};

		class VirtualNodeSegment
		{
		public:
			// members
			std::int32_t iFirstVirtualNode;  // 00
			std::int32_t iLastVirtualNode;   // 04
			bool         bHasNavMeshes;      // 08
			std::uint8_t pad09[0x3];         // 09
		};
		static_assert(sizeof(VirtualNodeSegment) == 0xC);

		PathBuilder* ctor(PathingRequest* apRequest, PathingSolution* apSolution)
		{
			using func_t = PathBuilder*(__thiscall*)(PathBuilder*, PathingRequest*, PathingSolution*);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::ctor };
			return func(this, apRequest, apSolution);
		}

		Pathing_UPDATE_DETAILED_PATH_RESULT UpdateDetailedPath(std::uint32_t aiCurrentVirtualNodeIndex, NiPoint3 const& aCurrentActorLocation)
		{
			using func_t = decltype(&PathBuilder::UpdateDetailedPath);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::UpdateDetailedPath };
			return func(this, aiCurrentVirtualNodeIndex, aCurrentActorLocation);
		}

		Pathing_UPDATE_DETAILED_PATH_RESULT UpdatePathMoveToHigh(std::uint32_t aiCurrentVirtualNodeIndex)
		{
			using func_t = decltype(&PathBuilder::UpdatePathMoveToHigh);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::UpdatePathMoveToHigh };
			return func(this, aiCurrentVirtualNodeIndex);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(PathBuilder*);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::dtor };
			func(this);
		}

	private:
		bool BuildNavMeshInfoPath(NavMeshInfo const* apStartMesh, NavMeshInfo const* apGoalMesh)
		{
			using func_t = decltype(&PathBuilder::BuildNavMeshInfoPath);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildNavMeshInfoPath };
			return func(this, apStartMesh, apGoalMesh);
		}

		bool BuildTeleportDoorPath()
		{
			using func_t = decltype(&PathBuilder::BuildTeleportDoorPath);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildTeleportDoorPath };
			return func(this);
		}

		bool FindLoadedNodeIndices(std::uint32_t aiFirstHighLevelNode, std::int32_t* apFirstLoadedNodeIndex, std::int32_t* apLastLoadedNodeIndex)
		{
			using func_t = decltype(&PathBuilder::FindLoadedNodeIndices);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::FindLoadedNodeIndices };
			return func(this, aiFirstHighLevelNode, apFirstLoadedNodeIndex, apLastLoadedNodeIndex);
		}

		bool BuildDetailedPath(Actor* pActor, std::uint32_t aiFirstHighLevelNode)
		{
			using func_t = decltype(&PathBuilder::BuildDetailedPath);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildDetailedPath };
			return func(this, pActor, aiFirstHighLevelNode);
		}

		bool FindVirtualNodeSegments(BSSimpleArray<PathBuilder::VirtualNodeSegment, 1024>& aRetSegmentArray)
		{
			using func_t = decltype(&PathBuilder::FindVirtualNodeSegments);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::FindVirtualNodeSegments };
			return func(this, aRetSegmentArray);
		}

		bool BuildDetailedPathForLoadedVirtualNodes(Actor* pActor)
		{
			using func_t = decltype(&PathBuilder::BuildDetailedPathForLoadedVirtualNodes);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildDetailedPathForLoadedVirtualNodes };
			return func(this, pActor);
		}

		RAYCASTPATH_RESULT BuildPathToNavMeshSearchStart(std::uint32_t aiFirstVirtualNodeIndex, BSSimpleArray<PathingLocation, 1024>& aRetPath, BSSimpleArray<NavMeshEdgeLocation, 1024>& aRetEdges)
		{
			using func_t = decltype(&PathBuilder::BuildPathToNavMeshSearchStart);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildPathToNavMeshSearchStart };
			return func(this, aiFirstVirtualNodeIndex, aRetPath, aRetEdges);
		}

		RAYCASTPATH_RESULT BuildPathFromNavMeshSearchGoal(std::uint32_t aiLastVirtualNodeIndex, BSSimpleArray<PathingLocation, 1024>& aRetPath, BSSimpleArray<NavMeshEdgeLocation, 1024>& aRetEdges)
		{
			using func_t = decltype(&PathBuilder::BuildPathFromNavMeshSearchGoal);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildPathFromNavMeshSearchGoal };
			return func(this, aiLastVirtualNodeIndex, aRetPath, aRetEdges);
		}

		RAYCASTPATH_RESULT BuildPathToValidNavMeshTriangle(PathingLocation& aStartLocation, BSSimpleArray<PathingLocation, 1024>& aRetPath, bool abStart, BSSimpleArray<NavMeshEdgeLocation, 1024>& aRetEdges)
		{
			using func_t = decltype(&PathBuilder::BuildPathToValidNavMeshTriangle);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildPathToValidNavMeshTriangle };
			return func(this, aStartLocation, aRetPath, abStart, aRetEdges);
		}

		RAYCASTPATH_RESULT BuildStraightPathUsingRayCasts(PathingLocation& aStartLocation, PathingLocation& aGoalLocation, BSSimpleArray<PathingLocation, 1024>& aRetPath)
		{
			using func_t = decltype(&PathBuilder::BuildStraightPathUsingRayCasts);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildStraightPathUsingRayCasts };
			return func(this, aStartLocation, aGoalLocation, aRetPath);
		}

		bool CheckClosestEdgeToGoal(std::uint32_t aiLastVirtualNodeIndex, BSSimpleArray<NavMeshEdgeLocation, 1024> const& aEndEdges, BSSimpleArray<PathingLocation, 1024>& aEndNodes)
		{
			using func_t = decltype(&PathBuilder::CheckClosestEdgeToGoal);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::CheckClosestEdgeToGoal };
			return func(this, aiLastVirtualNodeIndex, aEndEdges, aEndNodes);
		}

		bool BuildNavMeshPathForVirtualNodes(std::uint32_t aiFirstVirtualNodeIndex, std::uint32_t aiLastVirtualNodeIndex)
		{
			using func_t = decltype(&PathBuilder::BuildNavMeshPathForVirtualNodes);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildNavMeshPathForVirtualNodes };
			return func(this, aiFirstVirtualNodeIndex, aiLastVirtualNodeIndex);
		}

		PathBuilder::ADD_NODES_FROM_NAVMESH_RESULT AddNodesFromNavMesh(PathingLocation& aStartLocation, PathingLocation& aGoalLocation, std::uint32_t aiFirstVirtualNodeIndex, std::uint32_t aiLastVirtualNodeIndex)
		{
			using func_t = decltype(&PathBuilder::AddNodesFromNavMesh);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::AddNodesFromNavMesh };
			return func(this, aStartLocation, aGoalLocation, aiFirstVirtualNodeIndex, aiLastVirtualNodeIndex);
		}

		bool TryBuildStraightPath(PathingLocation& aStartLocation, PathingLocation& aGoalLocation)
		{
			using func_t = decltype(&PathBuilder::TryBuildStraightPath);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::TryBuildStraightPath };
			return func(this, aStartLocation, aGoalLocation);
		}

		bool RunPathSmoother(PathingLocation& aStartLocation, PathingLocation& aGoalLocation, BSSimpleArray<NavMeshSearchLink, 1024>& aBadNodes, BSSimpleArray<NavMeshSearchNode, 1024> const& aNodes, BSSimpleArray<NavMeshSearchLink, 1024> const& aLinks)
		{
			using func_t = decltype(&PathBuilder::RunPathSmoother);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::RunPathSmoother };
			return func(this, aStartLocation, aGoalLocation, aBadNodes, aNodes, aLinks);
		}

		bool FindClosestOpenEdge(PathingLocation aStartLocation, PathingLocation& aRetLocation, bool abStart)
		{
			using func_t = decltype(&PathBuilder::FindClosestOpenEdge);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::FindClosestOpenEdge };
			return func(this, aStartLocation, aRetLocation, abStart);
		}

		bool FindEntryPoint(VirtualPathingNode* apPrevNode, VirtualPathingNode* apCurrentNode, PathingLocation& aRetLocation)
		{
			using func_t = decltype(&PathBuilder::FindEntryPoint);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::FindEntryPoint };
			return func(this, apPrevNode, apCurrentNode, aRetLocation);
		}

		bool FindExitPoint(VirtualPathingNode* apCurrentNode, VirtualPathingNode* apNextNode, PathingLocation& aRetLocation)
		{
			using func_t = decltype(&PathBuilder::FindExitPoint);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::FindExitPoint };
			return func(this, apCurrentNode, apNextNode, aRetLocation);
		}

		bool BuildNavMeshInfoPathInSpace(NiPoint3 const& aStartLocation, NiPoint3 const& aGoalLocation, ParentSpaceNode* pSpace, TESObjectREFR* apTeleportDoor)
		{
			using func_t = decltype(&PathBuilder::BuildNavMeshInfoPathInSpace);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildNavMeshInfoPathInSpace };
			return func(this, aStartLocation, aGoalLocation, pSpace, apTeleportDoor);
		}

		bool BuildStraightPathForVirtualNodes(std::uint32_t aiFirstVirtualNodeIndex, std::uint32_t aiLastVirtualNodeIndex)
		{
			using func_t = decltype(&PathBuilder::BuildStraightPathForVirtualNodes);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder::BuildStraightPathForVirtualNodes };
			return func(this, aiFirstVirtualNodeIndex, aiLastVirtualNodeIndex);
		}

	public:
		// members
		PathingRequest*                                pRequest;            // 00
		PathingSolution*                               pSolution;           // 04
		ScrapHeap*                                     pScrapHeap;          // 08
		PathBuilder_FindTriangleForLocationWaterFilter WaterFilter;         // 0C
		bool                                           bPathUpdate;         // 10
		std::uint8_t                                   pad11[0x3];          // 11
		BSSimpleArray<NavMeshInfo const*, 1024>        DetailedPathInfos;   // 14
		BSSimpleArray<NavMeshPtr, 1024>                DetailedPathMeshes;  // 24
	};
}
