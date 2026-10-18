#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class AStarNode
	{
	public:
		// members
		float fCost;
		float fHeuristic;
		T NodeData;
		U ParentLink;
		AStarNode<T, U>* pParentAStarNode;
		AStarNode<T, U>** ppPrevNode;
		AStarNode<T, U>* pNextNode;
		std::uint32_t iKey;
		AStarNode<T, U>* pNextNodeInBucket;
	};
}
