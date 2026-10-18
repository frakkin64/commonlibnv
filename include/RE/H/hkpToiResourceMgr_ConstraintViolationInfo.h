#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkContactPoint;
	class hkpConstraintInstance;
	class hkpContactPointProperties;

	class hkpToiResourceMgr_ConstraintViolationInfo
	{
	public:
		// members
		hkpConstraintInstance*           m_constraint;              // 00?
		const hkContactPoint*            m_contactPoint;            // 04?
		const hkpContactPointProperties* m_contactPointProperties;  // 08?
	};
}
