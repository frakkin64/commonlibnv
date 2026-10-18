#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class NiNode;

	class CombatTargetData
	{
	public:
		// members
		BSSimpleArray<Actor*, 1024> Attackers;        // 00?
		NiPointer<NiNode>           spDebugGeometry;  // 10?
	};
}
