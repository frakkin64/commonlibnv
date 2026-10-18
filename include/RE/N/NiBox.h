#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiBox
	{
	public:
		// members
		NiPoint3 m_kCenter;      // 00
		NiPoint3 m_akAxis[3];    // 0C
		float    m_afExtent[3];  // 30
	};
}
