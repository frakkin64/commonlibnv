#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpConstraintData_RuntimeInfo
	{
	public:
		// members
		std::int32_t m_sizeOfExternalRuntime;  // 00
		std::int32_t m_numSolverResults;       // 04
	};
}
