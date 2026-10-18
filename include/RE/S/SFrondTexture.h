#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CIdvFilename.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SFrondTexture
	{
	public:
		// members
		CIdvFilename m_strFilename;      // 00?
		float        m_fAspectRatio;     // 1C?
		float        m_fSizeScale;       // 20?
		float        m_fMinAngleOffset;  // 24?
		float        m_fMaxAngleOffset;  // 28?
	};
}
