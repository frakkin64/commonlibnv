#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBuildJacobianTask_AtomInfo.h"

namespace RE
{
	class hkpBuildJacobianTaskHeader;
	class hkpJacobianSchema;
	class hkpVelocityAccumulator;

	class hkpBuildJacobianTask
	{
	public:
		using AtomInfo = hkpBuildJacobianTask_AtomInfo;

		// members
		hkpBuildJacobianTask*         m_next;               // 00?
		hkpBuildJacobianTaskHeader*   m_taskHeader;         // 04?
		const hkpVelocityAccumulator* m_accumulators;       // 08?
		hkpJacobianSchema*            m_schemas;            // 0C?
		hkpJacobianSchema*            m_schemasOfNextTask;  // 10?
		std::int32_t                  m_numAtomInfos;       // 14?
		hkpBuildJacobianTask_AtomInfo m_atomInfos[144];     // 18?
	};
}
