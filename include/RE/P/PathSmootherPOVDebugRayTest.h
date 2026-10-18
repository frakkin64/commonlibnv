#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathSmootherPOVDebugRayTest
	{
	public:
		enum class Result : std::int32_t
		{
			kRESULT_PASS = 0x0,
			kRESULT_FAIL = 0x1,
			kRESULT_INFINITE_LOOP = 0x2,
		};

		// members
		NiPoint3                            Start;    // 00?
		NiPoint3                            End;      // 0C?
		PathSmootherPOVDebugRayTest::Result eResult;  // 18?
		float                               fCost;    // 1C?
	};
}
