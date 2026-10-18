#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpConstraintInfo
	{
	public:
		// members
		std::int32_t m_maxSizeOfSchema;     // 00
		std::int32_t m_sizeOfSchemas;       // 04
		std::int32_t m_numSolverResults;    // 08
		std::int32_t m_numSolverElemTemps;  // 0C
	};
	static_assert(sizeof(hkpConstraintInfo) == 0x10);
}
