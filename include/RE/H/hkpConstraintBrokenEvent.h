#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkClass;
	class hkpConstraintInstance;
	class hkpConstraintTrackerData;
	class hkpWorld;

	class hkpConstraintBrokenEvent
	{
	public:
		// members
		hkpWorld*                 m_world;               // 00?
		hkpConstraintInstance*    m_constraintInstance;  // 04?
		const hkClass*            m_eventSource;         // 08?
		hkpConstraintTrackerData* m_eventSourceDetails;  // 0C?
		float                     m_actualImpulse;       // 10?
		float                     m_impulseLimit;        // 14?
	};
}
