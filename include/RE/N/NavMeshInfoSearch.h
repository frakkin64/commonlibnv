#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/D/DoorLock.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/Pathing_DOOR_LOCK_DISPOSITION.h"

namespace RE
{
	class ActorLockData;
	class NavMeshInfo;
	class TESObjectREFR;

	class NavMeshInfoSearch :
		public AStarSearch<NavMeshInfo*, TESObjectREFR*>
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshInfoSearch };
		static constexpr auto VTABLE{ VTABLE::NavMeshInfoSearch };

		// override (AStarSearch<NavMeshInfo*, TESObjectREFR*>)
		virtual bool GetNodeConnections(AStarNode<NavMeshInfo const*, TESObjectREFR*> const* apNode, BSSimpleArray<AStarNode<NavMeshInfo const*, TESObjectREFR*>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<NavMeshInfo const*, TESObjectREFR*> const* apNode);                                                                                           // 02

		NavMeshInfoSearch* ctor()
		{
			using func_t = NavMeshInfoSearch*(__thiscall*)(NavMeshInfoSearch*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoSearch::ctor };
			return func(this);
		}

		bool Pathfind(ActorLockData* apActorLockData, NiPoint3 const& aStartLocation, NavMeshInfo const* apStartMesh, NiPoint3 const& aGoalLocation, NavMeshInfo const* apGoalMesh, BSSimpleArray<NavMeshInfo const*, 1024>* apReturnNodes, BSSimpleArray<TESObjectREFR*, 1024>* apReturnLinks, Pathing_DOOR_LOCK_DISPOSITION aeDoorLockDisposition)
		{
			using func_t = decltype(&NavMeshInfoSearch::Pathfind);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoSearch::Pathfind };
			return func(this, apActorLockData, aStartLocation, apStartMesh, aGoalLocation, apGoalMesh, apReturnNodes, apReturnLinks, aeDoorLockDisposition);
		}

	public:
		// members
		NiPoint3                      StartLocation;        // 2058
		const NavMeshInfo*            pStartMesh;           // 2064
		NiPoint3                      GoalLocation;         // 2068
		const NavMeshInfo*            pGoalMesh;            // 2074
		ActorLockData*                pActorLockData;       // 2078
		Pathing_DOOR_LOCK_DISPOSITION DoorLockDisposition;  // 207C
		bool                          bSameSpace;           // 2080
		std::uint8_t                  pad2081[0x3];         // 2081
		DoorLock                      TempDoorLock;         // 2084
	};
}
