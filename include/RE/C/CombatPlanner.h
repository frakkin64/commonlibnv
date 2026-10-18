#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/A/AStarSearch.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/C/CombatPlannerData.h"
#include "RE/C/CombatWorldStateArray.h"
#include "RE/S/ScrapHeap.h"

namespace RE
{
	class CombatController;
	class CombatGoal;
	class CombatPlan;
	class CombatPlanLink;
	class CombatPlanNode;

	class CombatPlanner :
		public AStarSearch<CombatPlanNode*, CombatPlanLink*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatPlanner };
		static constexpr auto VTABLE{ VTABLE::CombatPlanner };

		// override (AStarSearch<CombatPlanNode*, CombatPlanLink*>)
		virtual ~CombatPlanner() = default;                                                                                                                                         // 00
		virtual bool GetNodeConnections(AStarNode<CombatPlanNode*, CombatPlanLink*> const* apNode, BSSimpleArray<AStarNode<CombatPlanNode*, CombatPlanLink*>*, 1024>* apRetNodes);  // 01
		virtual bool IsGoalNode(AStarNode<CombatPlanNode*, CombatPlanLink*> const* apNode);                                                                                         // 02

		CombatPlanner* ctor()
		{
			using func_t = CombatPlanner*(__thiscall*)(CombatPlanner*);
			static REL::Relocation<func_t> func{ Offsets::CombatPlanner::ctor };
			return func(this);
		}

		CombatPlan* CreatePlan(CombatController* apCombatController, bool abDebugPlan)
		{
			using func_t = CombatPlan* (CombatPlanner::*)(CombatController*, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatPlanner::CreatePlan };
			return func(this, apCombatController, abDebugPlan);
		}

		CombatPlan* CreatePlan(CombatController* apCombatController, CombatGoal* apGoal, CombatPlanNode* apStartNode, bool abDebugPlan)
		{
			using func_t = CombatPlan* (CombatPlanner::*)(CombatController*, CombatGoal*, CombatPlanNode*, bool);
			static REL::Relocation<func_t> func{ Offsets::CombatPlanner::CreatePlan_1 };
			return func(this, apCombatController, apGoal, apStartNode, abDebugPlan);
		}

	public:
		// members
		CombatController*     pCombatController;  // 2058
		CombatWorldStateArray InitialWorldState;  // 205C
		ScrapHeap             PlannerHeap;        // 20B8
		CombatPlannerData     PlannerData;        // 20C8
	};
}
