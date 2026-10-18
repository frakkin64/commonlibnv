#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpBinaryAction.h"

namespace RE
{
	class hkStepInfo;

	class alignas(16) hkpSpringAction :
		public hkpBinaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSpringAction };
		static constexpr auto VTABLE{ VTABLE::hkpSpringAction };

		// override (hkpBinaryAction)
		virtual ~hkpSpringAction() = default;                         // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;  // 03

		// members
		hkVector4     m_lastForce;      // 20?
		hkVector4     m_positionAinA;   // 30?
		hkVector4     m_positionBinB;   // 40?
		float         m_restLength;     // 50?
		float         m_strength;       // 54?
		float         m_damping;        // 58?
		hkBool        m_onCompression;  // 5C?
		hkBool        m_onExtension;    // 5D?
		std::uint16_t pad5E;            // 5E
	};
}
