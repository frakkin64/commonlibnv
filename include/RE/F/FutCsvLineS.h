#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FutCsvLineS
	{
	public:
		// members
		stl::vector<stl::string> fieldList;  // 00?
	};
}
