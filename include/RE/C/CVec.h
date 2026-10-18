#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CVec
	{
	public:
		// members
		float        m_afData[5];  // 00?
		std::int32_t m_nSize;      // 14?
	};
}
