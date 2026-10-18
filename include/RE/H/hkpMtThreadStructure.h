#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkpConstraintQueryIn.h"
#include "RE/H/hkpProcessCollisionInput.h"

namespace RE
{
	class hkpMultiThreadedSimulation;
	class hkpWorld;
	class hkpWorldDynamicsStepInfo;

	class alignas(16) hkpMtThreadStructure
	{
	public:
		// members
		hkpWorld*                             m_world;              // 00?
		std::uint8_t                          pad04[0xC];           // 04
		hkpConstraintQueryIn                  m_constraintQueryIn;  // 10?
		hkpProcessCollisionInput              m_collisionInput;     // B0?
		hkPadSpu<hkpMultiThreadedSimulation*> m_simulation;         // 130?
		hkPadSpu<hkpWorldDynamicsStepInfo*>   m_dynamicsStepInfo;   // 134?
		hkPadSpu<float>                       m_tolerance;          // 138?
		hkPadSpu<void*>                       m_weldingTable;       // 13C?
	};
}
