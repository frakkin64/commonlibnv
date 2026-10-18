#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiGeometry;

	class NiVisibleArray
	{
	public:
		// members
		NiGeometry**  m_ppkArray;         // 00?
		std::uint32_t m_uiCurrentSize;    // 04?
		std::uint32_t m_uiAllocatedSize;  // 08?
		std::uint32_t m_uiGrowBy;         // 0C?
	};
}
