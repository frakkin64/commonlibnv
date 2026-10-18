#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkStructureLayout.h"

namespace RE
{
	class hkPackfileWriter_Options
	{
	public:
		// members
		std::uint32_t     m_userTag;          // 00?
		hkStructureLayout m_layout;           // 04?
		hkBool            m_writeMetaInfo;    // 08?
		std::uint8_t      pad09[0x3];         // 09
		const char*       m_contentsVersion;  // 0C?
	};
}
