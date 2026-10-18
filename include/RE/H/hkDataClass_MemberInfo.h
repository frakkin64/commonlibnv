#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkDataClassImpl;

	class hkDataClass_MemberInfo
	{
	public:
		// members
		const char*            m_name;        // 00?
		const hkDataClassImpl* m_owner;       // 04?
		hkDataObject_Type      m_type;        // 08?
		const hkDataClassImpl* m_class;       // 0C?
		std::int32_t           m_tupleCount;  // 10?
	};
}
