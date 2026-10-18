#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PackageEventAction.h"

namespace RE
{
	class PatrolRefData
	{
	public:
		// members
		float              fTimeAtRef;  // 00
		PackageEventAction OnPatrol;    // 04
	};
	static_assert(sizeof(PatrolRefData) == 0x14);
}
