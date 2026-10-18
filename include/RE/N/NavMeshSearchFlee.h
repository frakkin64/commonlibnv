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
	class PathingRequestFlee;

	class NavMeshSearchFlee :
		public AStarSearch<NavMeshSearchNode, NavMeshSearchLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearchFlee };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearchFlee };

		// override (AStarSearch<NavMeshSearchNode, NavMeshSearchLink>)
		virtual bool GetNodeConnections(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshSearchNode, NavMeshSearchLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode);                                                                                             // 02

		NavMeshSearchFlee* ctor()
		{
			using func_t = NavMeshSearchFlee*(__thiscall*)(NavMeshSearchFlee*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchFlee::ctor };
			return func(this);
		}

		bool BuildNodePath(PathingRequestFlee const* apRequest, NavMeshSearchNode const& aStartNode, BSSimpleArray<NavMeshSearchNode, 1024>* apReturnNodeArray, BSSimpleArray<NavMeshSearchLink, 1024>* apReturnLinkArray)
		{
			using func_t = decltype(&NavMeshSearchFlee::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchFlee::BuildNodePath };
			return func(this, apRequest, aStartNode, apReturnNodeArray, apReturnLinkArray);
		}

		std::uint32_t GetKeyForNode(NavMesh* apNavMesh, std::uint16_t aiTri) const
		{
			using func_t = decltype(&NavMeshSearchFlee::GetKeyForNode);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchFlee::GetKeyForNode };
			return func(this, apNavMesh, aiTri);
		}

		void SetNodeData(AStarNode<NavMeshSearchNode, NavMeshSearchLink>* apNode, NavMesh* apNavMesh, std::uint16_t aiTriangle) const
		{
			using func_t = decltype(&NavMeshSearchFlee::SetNodeData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchFlee::SetNodeData };
			func(this, apNode, apNavMesh, aiTriangle);
		}

	public:
		// members
		const PathingRequestFlee* pCurrentRequest;         // 2058
		NavMeshSearchNode         StartNode;               // 205C
		NiPoint3                  AvoidNodeCenter;         // 2070
		float                     fDistanceUpperBound;     // 207C
		bool                      bFavorGoingTowardsGoal;  // 2080
		std::uint8_t              pad2081[0x3];            // 2081
		NiPoint3                  GoalLocation;            // 2084
	};
}
