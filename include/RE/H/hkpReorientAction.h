#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpUnaryAction.h"

namespace RE
{
	class hkStepInfo;

	class alignas(16) hkpReorientAction :
		public hkpUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpReorientAction };
		static constexpr auto VTABLE{ VTABLE::hkpReorientAction };

		// override (hkpUnaryAction)
		virtual ~hkpReorientAction() = default;                       // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;  // 03

		// members
		std::uint32_t pad1C;           // 1C
		hkVector4     m_rotationAxis;  // 20?
		hkVector4     m_upAxis;        // 30?
		float         m_strength;      // 40?
		float         m_damping;       // 44?
		std::uint8_t  pad48[0x8];      // 48
	};
}
