#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AngleSinCosArc.h"
#include "RE/S/Sphere.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathSmootherPOVDebugArcTest
	{
	public:
		enum class Result : std::int32_t
		{
			kRESULT_PASS = 0x0,
			kRESULT_FAIL = 0x1,
			kRESULT_INFINITE_LOOP = 0x2,
		};

		// members
		AngleSinCosArc                      Arc;        // 00?
		Sphere                              POVSphere;  // 14?
		PathSmootherPOVDebugArcTest::Result eResult;    // 24?
	};
}
