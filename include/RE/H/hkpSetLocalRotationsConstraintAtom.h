#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class alignas(16) hkpSetLocalRotationsConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_rotationA, m_rotationB
		std::uint8_t pad04[0xC];  // 04
	};
}
