#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NavMesh;
	class PathingLOSMap;
	class PathingRequestLOS;

	class NavMeshSearchLOS :
		public AStarSearch<NavMeshSearchNode, NavMeshSearchLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearchLOS };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearchLOS };

		// override (AStarSearch<NavMeshSearchNode, NavMeshSearchLink>)
		virtual bool GetNodeConnections(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshSearchNode, NavMeshSearchLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode);                                                                                             // 02

		NavMeshSearchLOS* ctor()
		{
			using func_t = NavMeshSearchLOS*(__thiscall*)(NavMeshSearchLOS*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchLOS::ctor };
			return func(this);
		}

		bool BuildNodePath(PathingRequestLOS const* apRequest, NavMeshSearchNode const& aStartNode, BSSimpleArray<NavMeshSearchNode, 1024>* apReturnNodeArray, BSSimpleArray<NavMeshSearchLink, 1024>* apReturnLinkArray)
		{
			using func_t = decltype(&NavMeshSearchLOS::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchLOS::BuildNodePath };
			return func(this, apRequest, aStartNode, apReturnNodeArray, apReturnLinkArray);
		}

		void SetNodeData(AStarNode<NavMeshSearchNode, NavMeshSearchLink>* apNode, NavMesh* apNavMesh, std::uint16_t aiTriangle) const
		{
			using func_t = decltype(&NavMeshSearchLOS::SetNodeData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchLOS::SetNodeData };
			func(this, apNode, apNavMesh, aiTriangle);
		}

	public:
		// members
		// not placed: pFirstIgnoredGoal
		const PathingRequestLOS*                               pCurrentRequest;              // 2058
		NavMeshSearchNode                                      StartNode;                    // 205C
		NiPointer<PathingLOSMap>                               spLOSMap;                     // 2070
		bool                                                   bHasGoalNode;                 // 2074
		std::uint8_t                                           pad2075[0x3];                 // 2075
		NavMeshSearchNode                                      GoalNode;                     // 2078
		char                                                   cMinLOSScore;                 // 208C
		std::uint8_t                                           pad208D[0x3];                 // 208D
		float                                                  fClosestNodeDistanceSquared;  // 2090
		const AStarNode<NavMeshSearchNode, NavMeshSearchLink>* pLastValidNode;               // 2094
		const AStarNode<NavMeshSearchNode, NavMeshSearchLink>* pClosestNode;                 // 2098
	};
}
