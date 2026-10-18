#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkClassMemberAccessor.h"

namespace RE
{
	class hkResourceHandle_Link
	{
	public:
		// members
		const char*           m_memberName;      // 00?
		const char*           m_externalId;      // 04?
		hkClassMemberAccessor m_memberAccessor;  // 08?
	};
}
