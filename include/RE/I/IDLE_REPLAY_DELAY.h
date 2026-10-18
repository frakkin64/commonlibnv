#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESIdleForm;

	// not confirmed: no named code in the executable refers to this type
	class IDLE_REPLAY_DELAY
	{
	public:
		// members
		TESIdleForm* pIdleForm;  // 00?
		float        fDelay;     // 04?
	};
}
