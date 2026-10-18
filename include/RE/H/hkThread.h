#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkThread
	{
	public:
		// members
		void*         m_thread;    // 00?
		std::uint32_t pad04;       // 04
		std::uint64_t m_threadId;  // 08?
	};
}
