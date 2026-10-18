#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpSurfaceConstraintInfo;

	class alignas(16) hkpSimplexSolverInput
	{
	public:
		// members
		hkVector4                 m_position;            // 00?
		hkVector4                 m_velocity;            // 10?
		hkVector4                 m_maxSurfaceVelocity;  // 20?
		hkVector4                 m_upVector;            // 30?
		float                     m_deltaTime;           // 40?
		float                     m_minDeltaTime;        // 44?
		hkpSurfaceConstraintInfo* m_constraints;         // 48?
		std::int32_t              m_numConstraints;      // 4C?
	};
}
