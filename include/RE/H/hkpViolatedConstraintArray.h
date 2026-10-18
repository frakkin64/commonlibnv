#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpConstraintInstance;

	class hkpViolatedConstraintArray
	{
	public:
		// members
		std::uint32_t          m_nextFreeElement;   // 00?
		hkpConstraintInstance* m_constraints[128];  // 04?
	};
}
