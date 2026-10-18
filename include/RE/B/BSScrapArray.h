#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/T/T.h"

namespace RE
{
	class CombatPlanLink;
	class CombatPlanNode;
	class ScrapHeap;

	template <class T, std::size_t N>
	class BSScrapArray :
		public BSSimpleArray<T, 1024>  // 00
	{
	public:
		// override (BSSimpleArray<T, 1024>)
		virtual ~BSScrapArray() = default;                                                                                                                         // 00
		virtual AStarNode<CombatPlanNode*, CombatPlanLink*>** _Allocate(std::uint32_t aiSizeInItem);                                                               // 01
		virtual void _Deallocate(AStarNode<CombatPlanNode*, CombatPlanLink*>** apBuffer);                                                                          // 02
		virtual AStarNode<CombatPlanNode*, CombatPlanLink*>** _Reallocate(AStarNode<CombatPlanNode*, CombatPlanLink*>** apBuffer, std::uint32_t aiNewSizeInItem);  // 03

		// members
		ScrapHeap* pScrapHeap;
	};
}
