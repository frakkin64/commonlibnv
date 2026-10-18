#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkaKeyFrameHierarchyUtility_WorkElem
	{
	public:
		// members
		hkVector4    m_prevPosition;         // 00?
		hkQuaternion m_prevRotation;         // 10?
		hkVector4    m_prevLinearVelocity;   // 20?
		hkVector4    m_prevAngularVelocity;  // 30?
	};
}
