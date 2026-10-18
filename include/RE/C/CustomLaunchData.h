#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CustomLaunchData
	{
	public:
		// members
		bool bThisIsAReboot;  // 00?
	};
}
