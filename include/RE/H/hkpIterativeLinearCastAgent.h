#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollisionAgent.h"

namespace RE
{
	class hkpIterativeLinearCastAgent :
		public hkpCollisionAgent  // 00
	{
	public:
	};
	static_assert(sizeof(hkpIterativeLinearCastAgent) == 0xC);
}
