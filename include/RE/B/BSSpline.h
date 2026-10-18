#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSSpline
	{
	public:
		// members
		float fParameter;  // 00?
		float fH00;        // 04?
		float fH10;        // 08?
		float fH01;        // 0C?
		float fH11;        // 10?
	};
}
