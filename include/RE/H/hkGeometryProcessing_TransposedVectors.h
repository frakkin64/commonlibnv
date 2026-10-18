#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkGeometryProcessing_TransposedVectors
	{
	public:
		// members
		hkVector4 m_x;  // 00?
		hkVector4 m_y;  // 10?
		hkVector4 m_z;  // 20?
	};
}
