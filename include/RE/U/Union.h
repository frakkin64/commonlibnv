#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkDataArrayImpl;
	class hkDataObjectImpl;

	union Union
	{
	public:
		// members
		std::int64_t      i;   // 00
		void*             p;   // 00
		float             r;   // 00
		char*             s;   // 00
		hkDataObjectImpl* o;   // 00
		hkDataArrayImpl*  a;   // 00
		float*            ra;  // 00
	};
}
