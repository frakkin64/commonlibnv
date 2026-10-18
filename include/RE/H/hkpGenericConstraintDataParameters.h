#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRotation.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkTransform;

	class alignas(16) hkpGenericConstraintDataParameters
	{
	public:
		// members
		hkVector4          m_pivotAw;         // 00?
		hkVector4          m_pivotBw;         // 10?
		hkRotation         m_linearBasisW;    // 20?
		hkRotation         m_angularBasisAw;  // 50?
		hkRotation         m_angularBasisBw;  // 80?
		const hkTransform* m_rbA;             // B0?
		const hkTransform* m_rbB;             // B4?
		std::int32_t       m_currentResult;   // B8?
		std::uint32_t      padBC;             // BC
	};
}
