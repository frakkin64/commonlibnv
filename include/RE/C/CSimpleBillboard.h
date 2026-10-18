#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CSimpleBillboard
	{
	public:
		// members
		float        m_acTreeBillboard[12];  // 00?
		bool         m_bValid;               // 30?
		std::uint8_t pad31[0x3];             // 31
	};
}
