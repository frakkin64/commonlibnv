#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class SandBoxActorPackageData;

	class SandBoxRefEvalFilter
	{
	public:
		// members
		Actor*                   pActor;     // 00?
		SandBoxActorPackageData* pPackData;  // 04?
	};
}
