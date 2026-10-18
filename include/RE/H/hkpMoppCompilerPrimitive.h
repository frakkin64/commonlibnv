#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMoppExtent.h"

namespace RE
{
	class hkpMoppCompilerPrimitive
	{
	public:
		// members
		std::uint32_t m_primitiveID;      // 00
		std::uint32_t m_primitiveID2;     // 04
		hkpMoppExtent m_extent;           // 08?
		std::uint32_t m_origPrimitiveID;  // 0C?
	};
}
