#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatPlanLinkData.h"

namespace RE
{
	class CombatAction;
	class CombatPlanNode;

	// not confirmed: no named code in the executable refers to this type
	class CombatPlanLink
	{
	public:
		// members
		CombatAction*      pAction;        // 00?
		CombatPlanNode*    pParentNode;    // 04?
		std::int32_t       iDesiredValue;  // 08?
		CombatPlanLinkData LinkData;       // 0C?
	};
}
