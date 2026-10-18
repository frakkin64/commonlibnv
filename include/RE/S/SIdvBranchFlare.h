#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SIdvBranchFlare
	{
	public:
		// members
		float m_fAngle;            // 00?
		float m_fRadialInfluence;  // 04?
		float m_fRadialExponent;   // 08?
		float m_fLengthInfluence;  // 0C?
		float m_fLengthExponent;   // 10?
		float m_fDistance;         // 14?
	};
}
