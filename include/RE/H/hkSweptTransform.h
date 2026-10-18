#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkSweptTransform
	{
	public:
		// members
		hkVector4    m_centerOfMass0;      // 00?
		hkVector4    m_centerOfMass1;      // 10?
		hkQuaternion m_rotation0;          // 20?
		hkQuaternion m_rotation1;          // 30?
		hkVector4    m_centerOfMassLocal;  // 40?
	};
}
