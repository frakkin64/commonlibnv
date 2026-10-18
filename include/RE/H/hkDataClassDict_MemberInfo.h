#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject_Type.h"
#include "RE/H/hkEnum.h"
#include "RE/I/InternedString.h"
#include "RE/I/InternedStringHandle.h"
#include "RE/U/Union.h"

namespace RE
{
	class hkDataClassDict_MemberInfo
	{
	public:
		// members
		InternedString                          m_name;        // 00?
		InternedStringHandle                    m_typeName;    // 04?
		Union                                   m_default;     // 08?
		hkEnum<hkDataObject_Type, std::int32_t> m_type;        // 10?
		std::int32_t                            m_tupleCount;  // 14?
	};
}
