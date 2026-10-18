#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FailedCombatProcedure
	{
	public:
		// members
		std::uint32_t iProcedureType;  // 00?
		const char*   pFailureReason;  // 04?
		float         fTime;           // 08?
	};
}
