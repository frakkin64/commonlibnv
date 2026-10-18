#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NavMesh;
	class PathingRequestClosePoint;

	class NavMeshSearchClosePoint :
		public AStarSearch<NavMeshSearchNode, NavMeshSearchLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearchClosePoint };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearchClosePoint };

		// override (AStarSearch<NavMeshSearchNode, NavMeshSearchLink>)
		virtual bool GetNodeConnections(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshSearchNode, NavMeshSearchLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode);                                                                                             // 02

		bool BuildNodePath(PathingRequestClosePoint const* apRequest, NavMeshSearchNode const& aStartNode, BSSimpleArray<NavMeshSearchNode, 1024>* apReturnNodeArray, BSSimpleArray<NavMeshSearchLink, 1024>* apReturnLinkArray)
		{
			using func_t = decltype(&NavMeshSearchClosePoint::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchClosePoint::BuildNodePath };
			return func(this, apRequest, aStartNode, apReturnNodeArray, apReturnLinkArray);
		}

		void SetNodeData(AStarNode<NavMeshSearchNode, NavMeshSearchLink>* apNode, NavMesh* apNavMesh, std::uint16_t aiTriangle) const
		{
			using func_t = decltype(&NavMeshSearchClosePoint::SetNodeData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchClosePoint::SetNodeData };
			func(this, apNode, apNavMesh, aiTriangle);
		}

	public:
		// members
		const PathingRequestClosePoint* pCurrentRequest;      // 2058
		NavMeshSearchNode               StartNode;            // 205C
		float                           fMinDistance;         // 2070
		NiPoint3                        Origin;               // 2074
		NiPoint3                        Result;               // 2080
		NiPoint3                        AvoidNodeCenter;      // 208C
		float                           fDistanceUpperBound;  // 2098
	};
}
