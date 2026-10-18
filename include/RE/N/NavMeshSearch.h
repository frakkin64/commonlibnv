#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/D/DoorLock.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"

namespace RE
{
	class NavMesh;
	class NavMeshInfo;
	class PathingRequest;

	class NavMeshSearch :
		public AStarSearch<NavMeshSearchNode, NavMeshSearchLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearch };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearch };

		// override (AStarSearch<NavMeshSearchNode, NavMeshSearchLink>)
		virtual bool GetNodeConnections(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshSearchNode, NavMeshSearchLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode);                                                                                             // 02

		NavMeshSearch* ctor()
		{
			using func_t = NavMeshSearch*(__thiscall*)(NavMeshSearch*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearch::ctor };
			return func(this);
		}

		bool BuildNodePath(PathingRequest const* apRequest, NavMeshSearchNode const& aStartNode, NavMeshSearchNode const& aGoalNode, BSSimpleArray<NavMeshSearchNode, 1024>* apReturnNodeArray, BSSimpleArray<NavMeshSearchLink, 1024>* apReturnLinkArray, BSSimpleArray<NavMeshInfo const*, 1024> const* apHighLevelSolution)
		{
			using func_t = decltype(&NavMeshSearch::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearch::BuildNodePath };
			return func(this, apRequest, aStartNode, aGoalNode, apReturnNodeArray, apReturnLinkArray, apHighLevelSolution);
		}

		void SetNodeData(AStarNode<NavMeshSearchNode, NavMeshSearchLink>* apNode, NavMesh* apNavMesh, std::uint16_t aiTriangle) const
		{
			using func_t = decltype(&NavMeshSearch::SetNodeData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearch::SetNodeData };
			func(this, apNode, apNavMesh, aiTriangle);
		}

	public:
		// members
		const PathingRequest*                          pCurrentRequest;     // 2058
		NavMeshSearchNode                              StartNode;           // 205C
		NavMeshSearchNode                              GoalNode;            // 2070
		const BSSimpleArray<NavMeshSearchLink, 1024>*  pBadNodes;           // 2084
		const BSSimpleArray<NavMeshInfo const*, 1024>* pHighLevelSolution;  // 2088
		DoorLock                                       TempDoorLock;        // 208C
	};
	static_assert(sizeof(NavMeshSearch) == 0x20A4);
}
