#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkConstraintInternal;
	class hkpBuildJacobianTask;
	class hkpBuildJacobianTask_AtomInfo;

	class hkpBuildJacobianTaskCollection
	{
	public:
		class CallbackPair;

		class CallbackPair
		{
		public:
			// members
			const hkConstraintInternal*    m_callbackConstraints;  // 00?
			hkpBuildJacobianTask_AtomInfo* m_atomInfo;             // 04?
		};

		// members
		hkpBuildJacobianTask*                         m_buildJacobianTasks;      // 00?
		std::int32_t                                  m_numBuildJacobianTasks;   // 04?
		hkpBuildJacobianTaskCollection::CallbackPair* m_callbackConstraints;     // 08?
		std::int32_t                                  m_numCallbackConstraints;  // 0C?
	};
}
