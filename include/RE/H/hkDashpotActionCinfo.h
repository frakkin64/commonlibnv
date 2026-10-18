#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"
#include "RE/H/hkBinaryActionCinfo.h"

namespace RE
{
	class hkDashpotActionCinfo :
		public hkBinaryActionCinfo  // 00
	{
	public:
		// members
		bhkVector4 m_pivotA;    // 0C?
		bhkVector4 m_pivotB;    // 1C?
		float      m_strength;  // 2C?
		float      m_damping;   // 30?
	};
}
