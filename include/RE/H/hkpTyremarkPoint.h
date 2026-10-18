#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpTyremarkPoint
	{
	public:
		// members
		hkVector4 m_pointLeft;   // 00?
		hkVector4 m_pointRight;  // 10?
	};
}
