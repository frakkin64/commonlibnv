#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkaKeyFrameHierarchyUtility_ControlData
	{
	public:
		// members
		float m_hierarchyGain;               // 00?
		float m_velocityDamping;             // 04?
		float m_accelerationGain;            // 08?
		float m_velocityGain;                // 0C?
		float m_positionGain;                // 10?
		float m_positionMaxLinearVelocity;   // 14?
		float m_positionMaxAngularVelocity;  // 18?
		float m_snapGain;                    // 1C?
		float m_snapMaxLinearVelocity;       // 20?
		float m_snapMaxAngularVelocity;      // 24?
		float m_snapMaxLinearDistance;       // 28?
		float m_snapMaxAngularDistance;      // 2C?
	};
}
