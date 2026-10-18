#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	class AntiBloatAllocator;
	class ListItem;

	template <class T, class U>
	class __declspec(novtable) BSTPersistentList
	{
	public:
		class ListItem
		{
		public:
			// members
			ListItem* pNext;
			ListItem* pPrev;
			U tElement;
		};

		class AntiBloatAllocator :
			public T  // 00
		{
		public:
			// members
			// not placed: uiCount
		};

		virtual ~BSTPersistentList() = default;  // 00

		// members
		ListItem* pHead;
		ListItem* pTail;
		ListItem* pNextFreeItem;
		AntiBloatAllocator Allocator;
	};
}
