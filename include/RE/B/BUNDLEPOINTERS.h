#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BUNDLEPOINTERS
	{
	public:
		// members
		void* typeptr;     // 00?
		void* type16ptr;   // 04?
		void* colorptr;    // 08?
		void* bits2ptr;    // 0C?
		void* motionXptr;  // 10?
		void* motionYptr;  // 14?
		void* dctptr;      // 18?
		void* mdctptr;     // 1C?
		void* patptr;      // 20?
	};
}
