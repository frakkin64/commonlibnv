#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTCommonMessageQueue.h"
#include "RE/B/BSTFreeList.h"
#include "RE/B/BSTFreeListElem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSTCommonLLMessageQueue :
		public BSTCommonMessageQueue<T>  // 00
	{
	public:
		// override (BSTCommonMessageQueue<T>)
		virtual ~BSTCommonLLMessageQueue() = default;  // 00
		virtual bool DoTryPush(T const& aMessage);     // 05
		virtual bool DoTryPop(T& aMessage);            // 06

		// members
		BSTFreeList<T>* pFreeList;
		BSTFreeListElem<T>* pHead;
		BSTFreeListElem<T>** ppTail;
	};
}
