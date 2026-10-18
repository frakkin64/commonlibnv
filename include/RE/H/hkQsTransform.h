#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkQsTransform
	{
	public:
		// members
		// not placed: m_translation, m_rotation(misaligned)
		std::uint8_t pad00[0x20];  // 00
		hkVector4    m_scale;      // 20?
	};
}
