#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkTransform.h"
#include "RE/H/hkpCdBody.h"

namespace RE
{
	class alignas(16) hkAgentNmMachineBodyTemp
	{
	public:
		// members
		hkpCdBody   m_bodyA;   // 00?
		hkpCdBody   m_bodyB;   // 10?
		hkTransform m_transA;  // 20?
		hkTransform m_transB;  // 60?
	};
}
