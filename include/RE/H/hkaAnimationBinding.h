#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaAnimation;

	class hkaAnimationBinding :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaAnimationBinding };
		static constexpr auto VTABLE{ VTABLE::hkaAnimationBinding };

		enum class BlendHint : std::int32_t
		{
			kVLC = 0x0,
			kFRAME_END = 0x1,
			kNORMAL = 0x2,
			kESCAPE = 0x3,
			kTBL_INDEX = 0x4,
			kESCAPE_LEVEL = 0x5,
			kESCAPE_RUN = 0x6,
		};

		// override (hkReferencedObject)
		virtual ~hkaAnimationBinding() = default;  // 00

		// members
		hkStringPtr                                         m_originalSkeletonName;          // 08?
		hkRefPtr<hkaAnimation>                              m_animation;                     // 0C?
		hkArray<std::int16_t, hkContainerHeapAllocator>     m_transformTrackToBoneIndices;   // 10?
		hkArray<std::int16_t, hkContainerHeapAllocator>     m_floatTrackToFloatSlotIndices;  // 1C?
		hkEnum<hkaAnimationBinding::BlendHint, std::int8_t> m_blendHint;                     // 28?
		std::uint8_t                                        pad29[0x3];                      // 29
	};
}
