#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkSphereRepShapeCinfo.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkMultiSphereShapeCinfo :
		public hkSphereRepShapeCinfo  // 00
	{
	public:
		// members
		hkArray<hkVector4, hkContainerHeapAllocator> m_spheres;  // 04?
	};
}
