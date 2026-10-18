#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTMessageQueue.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSTCommonMessageQueue :
		public BSTMessageQueue<T>  // 00
	{
	public:
		// override (BSTMessageQueue<T>)
		virtual ~BSTCommonMessageQueue() = default;  // 00
		virtual bool Push(T const& aMessage);        // 01
		virtual bool TryPush(T const& aMessage);     // 02
		virtual bool Pop(T& aMessage);               // 03
		virtual bool TryPop(T& aMessage);            // 04

		// add
		virtual bool DoTryPush(T const& aMessage);  // 05
		virtual bool DoTryPop(T& aMessage);         // 06

		// members
		std::uint32_t uiLock;
	};
}
