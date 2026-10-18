#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;

	class FollowerDist
	{
	public:
		// members
		Actor* pActor;            // 00
		float  fActualDistSqr;    // 04
		float  fPackDesiredDist;  // 08
		float  fActorRadius;      // 0C
	};
	static_assert(sizeof(FollowerDist) == 0x10);
}
