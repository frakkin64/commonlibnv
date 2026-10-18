#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"
#include "RE/H/hkHeightFieldShapeCinfo.h"

namespace RE
{
	class hkPlaneShapeCinfo :
		public hkHeightFieldShapeCinfo  // 00
	{
	public:
		// members
		bhkVector4 m_plane;            // 04?
		bhkVector4 m_aabbHalfExtents;  // 14?
		bhkVector4 m_aabbCenter;       // 24?
	};
}
