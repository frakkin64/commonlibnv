#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CIdvFilename.h"
#include "RE/C/CVec3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SIdvLeafTexture
	{
	public:
		// members
		bool         m_bBlossom;        // 00?
		std::uint8_t pad01[0x3];        // 01
		CVec3        m_cColor;          // 04?
		float        m_fColorVariance;  // 10?
		CIdvFilename m_strFilename;     // 14?
		CVec3        m_cOrigin;         // 30?
		CVec3        m_cSize;           // 3C?
		CVec3        m_cSizeUsed;       // 48?
	};
}
