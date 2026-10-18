#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSTFreeListElem
	{
	public:
		// members
		std::uint8_t RawElem[8];
		BSTFreeListElem<T>* pNext;
	};
}
