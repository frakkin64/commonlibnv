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
	class PathingLocation;
	class PathingRequestOptimalLocation;

	class NavMeshSearchMaxCost :
		public NavMeshSearch  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshSearchMaxCost };
		static constexpr auto VTABLE{ VTABLE::NavMeshSearchMaxCost };

		// override (NavMeshSearch)
		virtual bool GetNodeConnections(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode, BSSimpleArray<AStarNode<NavMeshSearchNode, NavMeshSearchLink>*, 1024>* apRetNodes) override;  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshSearchNode, NavMeshSearchLink> const* apNode) override;                                                                                             // 02

		NavMeshSearchMaxCost* ctor()
		{
			using func_t = NavMeshSearchMaxCost*(__thiscall*)(NavMeshSearchMaxCost*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchMaxCost::ctor };
			return func(this);
		}

		bool BuildNodePath(PathingRequestOptimalLocation const* apRequest, NavMeshSearchNode const& aStartNode, PathingLocation& aOptimalLocation, BSSimpleArray<NavMeshSearchNode, 1024>* apReturnNodeArray, BSSimpleArray<NavMeshSearchLink, 1024>* apReturnLinkArray)
		{
			using func_t = decltype(&NavMeshSearchMaxCost::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchMaxCost::BuildNodePath };
			return func(this, apRequest, aStartNode, aOptimalLocation, apReturnNodeArray, apReturnLinkArray);
		}

		NiPoint3 FindClosestPoint(NiPoint3 const& result, NavMeshSearchNode const& aStartLocation, NiPoint3 const& aStartNode, NavMeshSearchNode const& aGoalLocation, float aGoalNode)
		{
			using func_t = decltype(&NavMeshSearchMaxCost::FindClosestPoint);
			static REL::Relocation<func_t> func{ Offsets::NavMeshSearchMaxCost::FindClosestPoint };
			return func(this, result, aStartLocation, aStartNode, aGoalLocation, aGoalNode);
		}

	public:
		// members
		float        fMaxDist;      // 20A4
		bool         bHasGoalNode;  // 20A8
		std::uint8_t pad20A9[0x3];  // 20A9
	};
}
