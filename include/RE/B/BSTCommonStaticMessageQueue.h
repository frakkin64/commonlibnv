#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTCommonMessageQueue.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N>
	class BSTCommonStaticMessageQueue :
		public BSTCommonMessageQueue<T>  // 00
	{
	public:
		// override (BSTCommonMessageQueue<T>)
		virtual ~BSTCommonStaticMessageQueue() = default;  // 00
		virtual bool DoTryPush(T const& aMessage);         // 05
		virtual bool DoTryPop(T& aMessage);                // 06

		// members
		char MessageBuffer[1024];
		std::uint32_t uiCurrentDepth;
		std::uint32_t uiCurrentPush;
		std::uint32_t uiCurrentPop;
	};
}
