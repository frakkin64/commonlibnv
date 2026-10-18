#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LockFreeQueue.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class __declspec(novtable) LockFreePriorityQueue
	{
	public:
		// add
		virtual ~LockFreePriorityQueue() = default;  // 00
		virtual void IncrementCount();               // 01
		virtual void DecrementCount();               // 02
		virtual std::uint32_t GetCount();            // 03

		// members
		LockFreeQueue<T>** pQueues;
		std::uint32_t iPriorityCount;
		volatile std::int32_t iCount;
	};
}
