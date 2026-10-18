#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkResource_Import
	{
	public:
		// members
		const char* name;      // 00?
		void**      location;  // 04?
	};
}
