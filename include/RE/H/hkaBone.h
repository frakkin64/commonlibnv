#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaBone
	{
	public:
		// members
		hkStringPtr  m_name;             // 00?
		hkBool       m_lockTranslation;  // 04?
		std::uint8_t pad05[0x3];         // 05
	};
}
