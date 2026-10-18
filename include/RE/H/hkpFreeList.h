#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpFreeListElem;

	template <class T>
	class hkpFreeList
	{
	public:
		// members
		hkpFreeListElem* m_elems;
		std::int32_t m_freeElems;
	};
}
