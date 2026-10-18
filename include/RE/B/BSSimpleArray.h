#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarNode.h"
#include "RE/T/T.h"

namespace RE
{
	class CombatPlanLink;
	class CombatPlanNode;

	template <class T, std::size_t N>
	class __declspec(novtable) BSSimpleArray
	{
	public:
		// add
		virtual ~BSSimpleArray() = default;                                                                                                                        // 00
		virtual AStarNode<CombatPlanNode*, CombatPlanLink*>** _Allocate(std::uint32_t aiSizeInItem);                                                               // 01
		virtual void _Deallocate(AStarNode<CombatPlanNode*, CombatPlanLink*>** apBuffer);                                                                          // 02
		virtual AStarNode<CombatPlanNode*, CombatPlanLink*>** _Reallocate(AStarNode<CombatPlanNode*, CombatPlanLink*>** apBuffer, std::uint32_t aiNewSizeInItem);  // 03

		// members
		union
		{
			T (*pBufferAsAnArray)[1000];
			T* pBuffer;
		} ___u1;
		std::uint32_t iSize;
		std::uint32_t iReservedSize;
	};
}
