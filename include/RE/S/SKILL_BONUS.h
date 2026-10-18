#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SKILL_BONUS
	{
	public:
		// members
		char eSkill;  // 00?
		char cBonus;  // 01?
	};
}
