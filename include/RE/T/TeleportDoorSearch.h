#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/P/ParentSpaceNode.h"
#include "RE/P/PathingLocation.h"
#include "RE/P/Pathing_DOOR_LOCK_DISPOSITION.h"
#include "RE/P/Pathing_TELEPORT_DOOR_PATH_RESTRICTION.h"
#include "RE/T/TeleportLink.h"

namespace RE
{
	class ActorLockData;
	class TESObjectREFR;
	class TeleportPath;

	class TeleportDoorSearch :
		public AStarSearch<ParentSpaceNode, TeleportLink>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TeleportDoorSearch };
		static constexpr auto VTABLE{ VTABLE::TeleportDoorSearch };

		// override (AStarSearch<ParentSpaceNode, TeleportLink>)
		virtual bool GetNodeConnections(AStarNode<ParentSpaceNode, TeleportLink> const* apNode, BSSimpleArray<AStarNode<ParentSpaceNode, TeleportLink>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<ParentSpaceNode, TeleportLink> const* apNode);                                                                                      // 02

		TeleportDoorSearch* ctor()
		{
			using func_t = TeleportDoorSearch*(__thiscall*)(TeleportDoorSearch*);
			static REL::Relocation<func_t> func{ Offsets::TeleportDoorSearch::ctor };
			return func(this);
		}

		bool BuildNodePath(PathingLocation const& aStartLocation, PathingLocation const& aGoalLocation, TeleportPath* apRetPath, Pathing_TELEPORT_DOOR_PATH_RESTRICTION aRestrictions, float a_arg5, ActorLockData* a_arg6, Pathing_DOOR_LOCK_DISPOSITION apLockData)
		{
			using func_t = decltype(&TeleportDoorSearch::BuildNodePath);
			static REL::Relocation<func_t> func{ Offsets::TeleportDoorSearch::BuildNodePath };
			return func(this, aStartLocation, aGoalLocation, apRetPath, aRestrictions, a_arg5, a_arg6, apLockData);
		}

	public:
		// members
		ParentSpaceNode                        StartNode;            // 2058
		PathingLocation                        StartLocation;        // 2064
		ParentSpaceNode                        GoalNode;             // 208C
		Pathing_TELEPORT_DOOR_PATH_RESTRICTION Restrictions;         // 2098
		float                                  fMaxDist;             // 209C
		ActorLockData*                         pLockData;            // 20A0
		BSSimpleArray<TESObjectREFR*, 1024>    DoorList;             // 20A4
		Pathing_DOOR_LOCK_DISPOSITION          DoorLockDisposition;  // 20B4
	};
}
