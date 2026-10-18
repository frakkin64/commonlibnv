#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSphere.h"
#include "RE/H/hkpMoppQueryObject.h"

namespace RE
{
	class alignas(16) hkMoppSphereQueryObject :
		public hkpMoppQueryObject  // 00
	{
	public:
		// members
		hkSphere m_sphere2;  // 10?
	};
}
