#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpBodyVelocity
	{
	public:
		// members
		hkVector4 m_linear;   // 00?
		hkVector4 m_angular;  // 10?
	};
}
