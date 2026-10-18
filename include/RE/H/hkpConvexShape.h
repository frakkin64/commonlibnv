#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpSphereRepShape.h"

namespace RE
{
	class hkpConvexShape :
		public hkpSphereRepShape  // 00
	{
	public:
		// members
		float m_radius;  // 10
	};
	static_assert(sizeof(hkpConvexShape) == 0x14);
}
