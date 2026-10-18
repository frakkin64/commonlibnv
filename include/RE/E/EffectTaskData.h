#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSTempEffect;

	class EffectTaskData
	{
	public:
		// members
		BSTempEffect* pTempEffect;  // 00?
		float         fDeltaTime;   // 04?
		bool          bGlobal;      // 08?
		bool          bRemove;      // 09?
		std::uint16_t pad0A;        // 0A
	};
}
