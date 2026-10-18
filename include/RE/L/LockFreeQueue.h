#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/InterfacedClass.h"
#include "RE/T/T.h"
#include "RE/T/ThreadSpecificInterfaceManager.h"

namespace RE
{
	class LockFreeQueueInterface;
	class LockFreeQueueNode;

	template <class T>
	class LockFreeQueue :
		public InterfacedClass  // 00
	{
	public:
		class LockFreeQueueNode
		{
		public:
			// members
			LockFreeQueueNode* pNext;
			T Data;
		};

		class LockFreeQueueInterface
		{
		public:
			// members
			LockFreeQueue<T>* pOwner;
			LockFreeQueueNode** pReferencedNodes[2];
			std::uint32_t iDeleteCount;
			LockFreeQueueNode* pDeleteHead;
		};

		// override (InterfacedClass)
		virtual ~LockFreeQueue() = default;                    // 00
		virtual void* AllocateInterface(std::uint32_t aiNum);  // 01

		// add
		virtual void IncrementCount();     // 02
		virtual void DecrementCount();     // 03
		virtual std::uint32_t GetCount();  // 04

		// members
		LockFreeQueueNode* pHead;
		LockFreeQueueNode* pTail;
		std::uint32_t iDeleteBatchSize;
		LockFreeQueueNode** volatile pReferencedNodes;
		ThreadSpecificInterfaceManager<LockFreeQueueInterface>* pInterfaceManager;
		volatile std::int32_t iCount;
	};
}
