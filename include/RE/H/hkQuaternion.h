#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkQuaternion
	{
	public:
		// members
		hkVector4 m_vec;  // 00?
	};
}
