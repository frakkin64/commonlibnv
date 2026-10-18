#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiSphere
	{
	public:
		// members
		NiPoint3 m_kCenter;  // 00
		float    m_fRadius;  // 0C
	};
}
