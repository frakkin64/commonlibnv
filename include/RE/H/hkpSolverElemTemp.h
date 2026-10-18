#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpSolverElemTemp
	{
	public:
		// members
		union
		{
			float m_impulseApplied;
			float m_usedImpulseFactor;
			float m_deltaRhs;
		} ___u0;  // 00?
	};
}
