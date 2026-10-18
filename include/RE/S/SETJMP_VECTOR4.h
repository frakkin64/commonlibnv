#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SETJMP_VECTOR4
	{
	public:
		// members
		float floats[4];  // 00?
	};
}
