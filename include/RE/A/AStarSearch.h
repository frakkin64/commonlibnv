#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarMap.h"
#include "RE/A/AStarNode.h"
#include "RE/A/AStarNodeHeap.h"
#include "RE/A/AStarQueue.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class __declspec(novtable) AStarSearch
	{
	public:
		// add
		virtual ~AStarSearch() = default;                                                                               // 00
		virtual bool GetNodeConnections(const AStarNode<T, U>* a_arg1, BSSimpleArray<AStarNode<T, U>*, 1024>* a_arg2);  // 01
		virtual bool IsGoalNode(const AStarNode<T, U>* a_arg1);                                                         // 02

		// members
		AStarNodeHeap<T, U, 512> NodeHeap;
		AStarMap<AStarNode<T, U>> AStarNodeMap;
		AStarQueue<T, U> SearchQueue;
		AStarNode<T, U>* BestNodeSoFar;
		AStarNode<T, U>* pLastSearchedNode;
		AStarNode<T, U>* pStartAStarNode;
		bool bIsRunningInTasklet;
	};
}
