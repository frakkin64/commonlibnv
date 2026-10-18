#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject_Type.h"

namespace RE
{
	class hkDataClass_Cinfo_Member
	{
	public:
		// members
		const char*       name;        // 00?
		hkDataObject_Type type;        // 04?
		std::int32_t      tupleCount;  // 08?
		const char*       className;   // 0C?
	};
}
