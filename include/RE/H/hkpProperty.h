#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpPropertyValue.h"

namespace RE
{
	class hkpProperty
	{
	public:
		// members
		std::uint32_t    m_key;               // 00?
		std::uint32_t    m_alignmentPadding;  // 04?
		hkpPropertyValue m_value;             // 08?
	};
}
