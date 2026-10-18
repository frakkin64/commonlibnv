#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkThreadMemory_FreeList_FreeElem.h"

namespace RE
{
	class hkThreadMemory_FreeList
	{
	public:
		using FreeElem = hkThreadMemory_FreeList_FreeElem;

		// members
		hkThreadMemory_FreeList_FreeElem* m_head;     // 00?
		std::int32_t                      m_numElem;  // 04?
	};
}
