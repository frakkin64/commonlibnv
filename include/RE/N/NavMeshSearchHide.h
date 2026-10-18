#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshSearch.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NavMesh;
	class PathingRequestHide;

	class NavMeshSearchHide :
		public NavMeshSearch  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearchHide };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearchHide };

		// override (NavMeshSearch)
		virtual bool GetNodeConnections(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshSearchNode, NavMeshSearchLink>*, 1024>* apRetNodes) override;  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode) override;                                                                                             // 02

		NavMeshSearchHide* ctor()
		{
			using func_t = NavMeshSearchHide*(__thiscall*)(NavMeshSearchHide*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchHide::ctor };
			return func(this);
		}

		bool BuildNodePath(PathingRequestHide const* apRequest, NavMeshSearchNode const& aStartNode, BSSimpleArray<NavMeshSearchNode, 1024>* apReturnNodeArray, BSSimpleArray<NavMeshSearchLink, 1024>* apReturnLinkArray)
		{
			using func_t = decltype(&NavMeshSearchHide::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchHide::BuildNodePath };
			return func(this, apRequest, aStartNode, apReturnNodeArray, apReturnLinkArray);
		}

		void SetNodeData(AStarNode<NavMeshSearchNode, NavMeshSearchLink>* apNode, NavMesh* apNavMesh, std::uint16_t aiTriangle) const
		{
			using func_t = decltype(&NavMeshSearchHide::SetNodeData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchHide::SetNodeData };
			func(this, apNode, apNavMesh, aiTriangle);
		}

	public:
		// members
		const PathingRequestHide* pCurrentHideRequest;  // 20A4
		NavMeshSearchNode         StartNode;            // 20A8
		NiPoint3                  AvoidNodeCenter;      // 20BC
		float                     fDistanceUpperBound;  // 20C8
		NiPoint3                  ThreatLocation;       // 20CC?
	};
}
