#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/InterfacedClass.h"
#include "RE/M/MarkedPointer.h"
#include "RE/T/T.h"
#include "RE/T/ThreadSpecificInterfaceManager.h"

namespace RE
{
	class HashListNode;
	class LockFreeMapInterface;

	template <class T, class U>
	class LockFreeMap :
		public InterfacedClass  // 00
	{
	public:
		class HashListNode
		{
		public:
			// members
			T Key;
			U Data;
			MarkedPointer<HashListNode> pNext;
		};

		class LockFreeMapInterface
		{
		public:
			// members
			LockFreeMap<T, U>* pOwner;
			HashListNode** pReferencedNodes[3];
			MarkedPointer<HashListNode>* volatile pPrev;
			MarkedPointer<HashListNode> Current;
			MarkedPointer<HashListNode> Next;
			HashListNode* pDeleteHead;
			std::uint32_t iDeleteCount;
		};

		class LockFreeMapIterator
		{
		public:
			// add
			virtual ~LockFreeMapIterator() = default;  // 00
			virtual void ClearKey();                   // 01

			// members
			std::uint32_t iBucket;
			T LastKey;
			std::uint8_t cFlags;
		};

		// override (InterfacedClass)
		virtual ~LockFreeMap() = default;                      // 00
		virtual void* AllocateInterface(std::uint32_t aiNum);  // 01

		// add
		virtual bool GetAt(T aKey, U& arData);                                                       // 02
		virtual bool SetAt(std::uint32_t aiBucket, T aKey, U const& aData, bool abReplaceExisting);  // 03
		virtual bool SetAt_04(T aKey, U const& aData, bool abReplaceExisting);                       // 04
		virtual bool RemoveAt(T aKey);                                                               // 05
		virtual bool Remove(std::uint32_t aiBucket, U aData);                                        // 06
		virtual void Unk_07();                                                                       // 07
		virtual bool Remove_08(U aData);                                                             // 08
		virtual std::uint32_t GetBucketForKey(T aKey);                                               // 09
		virtual void DeleteKey(T aKey);                                                              // 0A
		virtual T CopyKey(T aKey);                                                                   // 0B
		virtual void CopyKeyDirect(T aKey, T& arCopiedKey);                                          // 0C
		virtual bool IsKeyGreaterOrEqual(T aKey1, T aKey2);                                          // 0D
		virtual bool IsKeyEqual(T aKey1, T aKey2);                                                   // 0E
		virtual void IncrementCount();                                                               // 0F
		virtual void DecrementCount();                                                               // 10
		virtual std::uint32_t GetCount();                                                            // 11

		// members
		HashListNode** volatile pReferencedNodes;
		std::uint32_t iNumBuckets;
		MarkedPointer<HashListNode>* pBuckets;
		std::uint32_t iDeleteBatchSize;
		ThreadSpecificInterfaceManager<LockFreeMapInterface>* pInterfaceManager;
		volatile std::int32_t iCount;
	};
}
