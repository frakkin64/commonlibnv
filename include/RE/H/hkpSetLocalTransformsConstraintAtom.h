#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class alignas(16) hkpSetLocalTransformsConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_transformA, m_transformB
		std::uint8_t pad04[0xC];  // 04
	};
}
