#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	// not confirmed: no named code in the executable refers to this type
	class CastPowerItem
	{
	public:
		// members
		SpellItem* pPower;          // 00?
		float      fTimeRemaining;  // 04?
	};
}
