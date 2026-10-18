#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpContactPointProperties.h"

namespace RE
{
	class hkContactPointPropertiesWithExtendedUserData16 :
		public hkpContactPointProperties  // 00
	{
	public:
		// members
		std::uint32_t m_extendedUserDatas[7];  // 14?
	};
}
