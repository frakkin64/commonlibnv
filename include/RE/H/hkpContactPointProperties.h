#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPointMaterial.h"
#include "RE/H/hkpSolverResults.h"

namespace RE
{
	class hkpContactPointProperties :
		public hkpSolverResults,  // 00
		public hkContactPointMaterial  // 08
	{
	public:
		// members
		float m_internalDataA;  // 10?
	};
}
