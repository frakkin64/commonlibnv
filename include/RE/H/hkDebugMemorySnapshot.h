#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemoryPointerInfo;

	class hkDebugMemorySnapshot
	{
	public:
		// members
		void**               m_pointers;     // 00?
		hkMemoryPointerInfo* m_info;         // 04?
		std::int32_t         m_numPointers;  // 08?
	};
}
