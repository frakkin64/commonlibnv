#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class alignas(16) hkpSetLocalTranslationsConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_translationA, m_translationB
		std::uint8_t pad04[0xC];  // 04
	};
}
