#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CIdvBranch;

	// not confirmed: no named code in the executable refers to this type
	class SIdvBranch
	{
	public:
		// members
		std::int32_t m_nPreVertexIndex;  // 00?
		float        m_fPercent;         // 04?
		CIdvBranch*  m_pBranch;          // 08?
	};
}
