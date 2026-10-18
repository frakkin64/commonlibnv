#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkSerializeUtil_FormatType.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkStructureLayout_LayoutRules.h"

namespace RE
{
	class hkSerializeUtil_FormatDetails
	{
	public:
		// members
		hkEnum<hkSerializeUtil_FormatType, std::int32_t> m_formatType;   // 00?
		hkStringPtr                                      m_version;      // 04?
		hkStructureLayout_LayoutRules                    m_layoutRules;  // 08?
	};
}
