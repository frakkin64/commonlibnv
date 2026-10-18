#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPlane.h"

namespace RE
{
	class NiFrustumPlanes
	{
	public:
		// members
		NiPlane       m_akCullingPlanes[6];  // 00
		std::uint32_t m_uiActivePlanes;      // 60
	};
}
