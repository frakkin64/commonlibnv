#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemorySystem_FrameInfo
	{
	public:
		// members
		std::int32_t m_stackSize;         // 00?
		std::int32_t m_solverBufferSize;  // 04?
	};
}
