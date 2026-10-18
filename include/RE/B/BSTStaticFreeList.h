#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTFreeList.h"
#include "RE/B/BSTFreeListElem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N>
	class BSTStaticFreeList :
		public BSTFreeList<T>  // 00
	{
	public:
		// override (BSTFreeList<T>)
		virtual ~BSTStaticFreeList() = default;  // 00

		// members
		BSTFreeListElem<T> Elems[N];
	};
}
