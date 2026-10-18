#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkaAnimatedReferenceFrame.h"

namespace RE
{
	class hkQsTransform;

	class alignas(16) hkaDefaultAnimatedReferenceFrame :
		public hkaAnimatedReferenceFrame  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaDefaultAnimatedReferenceFrame };
		static constexpr auto VTABLE{ VTABLE::hkaDefaultAnimatedReferenceFrame };

		// override (hkaAnimatedReferenceFrame)
		virtual ~hkaDefaultAnimatedReferenceFrame() = default;  // 00

		// add
		virtual void getReferenceFrame(float a_arg1, hkQsTransform* a_arg2) const;                                          // 03
		virtual void getDeltaReferenceFrame(float a_arg1, float a_arg2, std::int32_t a_arg3, hkQsTransform* a_arg4) const;  // 04
		virtual float getDuration() const;                                                                                  // 05

		// members
		std::uint8_t                                 pad08[0x8];               // 08
		hkVector4                                    m_up;                     // 10
		hkVector4                                    m_forward;                // 20
		float                                        m_duration;               // 30
		hkArray<hkVector4, hkContainerHeapAllocator> m_referenceFrameSamples;  // 34?
	};
}
