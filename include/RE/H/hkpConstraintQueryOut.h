#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkpJacobianSchema;

	class hkpConstraintQueryOut
	{
	public:
		// members
		hkPadSpu<hkpJacobianSchema*> m_jacobianSchemas;  // 00?
	};
}
