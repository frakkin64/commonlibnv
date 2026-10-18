#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	// not confirmed: no named code in the executable refers to this type
	class GROUP_REACTION
	{
	public:
		// members
		TESForm*     pForm;           // 00?
		std::int32_t iReaction;       // 04?
		std::int32_t iFightReaction;  // 08?
	};
}
