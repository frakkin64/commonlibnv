#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpRigidBody;

	class hkaKeyFrameHierarchyUtility_BodyData
	{
	public:
		// members
		std::int32_t         m_numRigidBodies;      // 00?
		hkpRigidBody* const* m_rigidBodies;         // 04?
		const std::int16_t*  m_parentIndices;       // 08?
		std::int32_t*        m_controlDataIndices;  // 0C?
		const float*         m_boneWeights;         // 10?
	};
}
