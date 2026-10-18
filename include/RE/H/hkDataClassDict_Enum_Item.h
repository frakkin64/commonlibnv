#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/InternedString.h"

namespace RE
{
	class hkDataClassDict_Enum_Item
	{
	public:
		// members
		InternedString name;   // 00?
		std::int32_t   value;  // 04?
	};
}
