#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CIdvFilename.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SIdvTreeInfo
	{
	public:
		// members
		CIdvFilename m_strBranchTextureFilename;  // 00?
		float        m_fFar;                      // 1C
		float        m_fNear;                     // 20
		std::int32_t m_nSeed;                     // 24
		float        m_fSize;                     // 28
		float        m_fSizeVariance;             // 2C
		std::int32_t m_nFlareSeed;                // 30
	};
}
