#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class WriteLocation
	{
	public:
		// members
		std::int32_t m_sectionIndex;  // 00?
		std::int32_t m_offset;        // 04?
	};
}
