#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpCollisionInput.h"

namespace RE
{
	class hkpCollisionAgentConfig;

	class alignas(16) hkpLinearCastCollisionInput :
		public hkpCollisionInput  // 00
	{
	public:
		// members
		hkVector4                m_path;                 // 50?
		float                    m_maxExtraPenetration;  // 60?
		float                    m_cachedPathLength;     // 64?
		hkpCollisionAgentConfig* m_config;               // 68?
		std::uint32_t            pad6C;                  // 6C
	};
}
