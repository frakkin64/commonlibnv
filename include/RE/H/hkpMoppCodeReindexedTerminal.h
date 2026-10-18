#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpMoppCodeReindexedTerminal
	{
	public:
		// members
		std::uint32_t m_origShapeKey;       // 00?
		std::uint32_t m_reindexedShapeKey;  // 04?
	};
}
