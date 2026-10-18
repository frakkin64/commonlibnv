#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSweptTransform.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkUFloat8.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkMotionState
	{
	public:
		hkMotionState* ctor(hkMotionState const& __that)
		{
			using func_t = hkMotionState*(__thiscall*)(hkMotionState*, hkMotionState const&);
			static REL::Relocation<func_t> func{ Offsets::hkMotionState::ctor };
			return func(this, __that);
		}

	public:
		// members
		hkTransform      m_transform;           // 00?
		hkSweptTransform m_sweptTransform;      // 40?
		hkVector4        m_deltaAngle;          // 90?
		float            m_objectRadius;        // A0?
		float            m_linearDamping;       // A4?
		float            m_angularDamping;      // A8?
		hkUFloat8        m_maxLinearVelocity;   // AC?
		hkUFloat8        m_maxAngularVelocity;  // AD?
		std::uint8_t     m_deactivationClass;   // AE?
		std::uint8_t     padAF;                 // AF
	};
}
