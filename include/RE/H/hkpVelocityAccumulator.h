#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkRotation.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpVelocityAccumulator
	{
	public:
		enum class hkpAccumulatorType : std::int32_t
		{
			kHK_RIGID_BODY = 0x0,
			kHK_KEYFRAMED_RIGID_BODY = 0x1,
			kHK_NO_GRAVITY_RIGID_BODY = 0x2,
			kHK_END = 0x3,
		};

		// members
		hkEnum<hkpVelocityAccumulator::hkpAccumulatorType, std::uint8_t> m_type;               // 00?
		std::uint8_t                                                     pad01[0x3];           // 01
		std::uint32_t                                                    m_deactivationClass;  // 04?
		float                                                            m_gravityFactor;      // 08?
		std::uint32_t                                                    pad0C;                // 0C
		hkVector4                                                        m_linearVel;          // 10?
		hkVector4                                                        m_angularVel;         // 20?
		hkVector4                                                        m_invMasses;          // 30?
		hkVector4                                                        m_scratch0;           // 40?
		hkRotation                                                       m_scratch123;         // 50?
	};
}
