#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpFeatureContactPoint
	{
	public:
		// members
		std::uint8_t  m_featureIdA;      // 00?
		std::uint8_t  m_featureIdB;      // 01?
		std::uint16_t m_contactPointId;  // 02?
	};
}
