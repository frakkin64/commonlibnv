#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpSampledHeightFieldBaseCinfo
	{
	public:
		// members
		hkVector4    m_scale;                     // 00?
		std::int32_t m_xRes;                      // 10?
		std::int32_t m_zRes;                      // 14?
		float        m_minHeight;                 // 18?
		float        m_maxHeight;                 // 1C?
		hkBool       m_useProjectionBasedHeight;  // 20?
		std::uint8_t pad21[0xF];                  // 21
	};
}
