#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class alignas(16) hkpPulleyConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_fixedPivotAinWorld, m_fixedPivotBinWorld, m_ropeLength, m_leverageOnBodyB
		std::uint8_t pad04[0xC];  // 04
	};
}
