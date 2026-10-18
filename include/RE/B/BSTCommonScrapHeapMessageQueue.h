#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSScrapHeapQueueElem.h"
#include "RE/B/BSTCommonMessageQueue.h"
#include "RE/T/T.h"

namespace RE
{
	class ScrapHeap;

	template <class T>
	class BSTCommonScrapHeapMessageQueue :
		public BSTCommonMessageQueue<T>  // 00
	{
	public:
		// override (BSTCommonMessageQueue<T>)
		virtual ~BSTCommonScrapHeapMessageQueue() = default;  // 00
		virtual bool DoTryPush(T const& aMessage);            // 05
		virtual bool DoTryPop(T& aMessage);                   // 06

		// members
		ScrapHeap* pScrapHeap;
		BSScrapHeapQueueElem<T>* pHead;
		BSScrapHeapQueueElem<T>** ppTail;
	};
}
