#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class hkpConstraintChainData :
		public hkpConstraintData  // 00
	{
	public:
	};
	static_assert(sizeof(hkpConstraintChainData) == 0xC);
}
