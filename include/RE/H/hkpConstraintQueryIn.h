#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkSimdReal.h"
#include "RE/H/hkpConstraintQueryStepInfo.h"

namespace RE
{
	class hkTransform;
	class hkpConstraintInstance;
	class hkpVelocityAccumulator;
	class hkpViolatedConstraintArray;

	class alignas(16) hkpConstraintQueryIn :
		public hkpConstraintQueryStepInfo  // 00
	{
	public:
		// members
		hkPadSpu<hkpVelocityAccumulator const*> m_bodyA;                          // 2C?
		hkPadSpu<hkpVelocityAccumulator const*> m_bodyB;                          // 30?
		hkPadSpu<hkTransform const*>            m_transformA;                     // 34?
		std::uint8_t                            pad38[0x2C];                      // 38
		hkPadSpu<hkTransform const*>            m_transformB;                     // 64
		hkPadSpu<float>                         m_tau;                            // 68?
		hkPadSpu<float>                         m_damping;                        // 6C?
		hkSimdReal                              m_maxConstraintViolationSqrd;     // 70?
		hkPadSpu<hkpConstraintInstance*>        m_constraintInstance;             // 80?
		hkPadSpu<void*>                         m_constraintRuntime;              // 84?
		hkPadSpu<hkpViolatedConstraintArray*>   m_violatedConstraints;            // 88?
		hkPadSpu<std::uint32_t>                 m_accumulatorAIndex;              // 8C?
		hkPadSpu<std::uint32_t>                 m_accumulatorBIndex;              // 90?
		hkPadSpu<void*>                         m_constraintRuntimeInMainMemory;  // 94?
		std::uint8_t                            pad98[0x8];                       // 98
	};
}
