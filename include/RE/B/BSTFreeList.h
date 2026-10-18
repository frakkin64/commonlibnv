#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTFreeListElem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class __declspec(novtable) BSTFreeList
	{
	public:
		// add
		virtual ~BSTFreeList() = default;  // 00

		// members
		std::uint32_t uiLock;
		BSTFreeListElem<T>* pFree;
	};
}
