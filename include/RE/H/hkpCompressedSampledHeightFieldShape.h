#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpSampledHeightFieldShape.h"

namespace RE
{
	class alignas(16) hkpCompressedSampledHeightFieldShape :
		public hkpSampledHeightFieldShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCompressedSampledHeightFieldShape };
		static constexpr auto VTABLE{ VTABLE::hkpCompressedSampledHeightFieldShape };

		// override (hkpSampledHeightFieldShape)
		virtual ~hkpCompressedSampledHeightFieldShape() = default;  // 00

		// members
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_storage;       // 60?
		hkBool                                           m_triangleFlip;  // 6C?
		std::uint8_t                                     pad6D[0x3];      // 6D
		float                                            m_offset;        // 70?
		float                                            m_scale;         // 74?
		std::uint8_t                                     pad78[0x8];      // 78
	};
}
