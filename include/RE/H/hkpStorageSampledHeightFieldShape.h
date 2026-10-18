#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpSampledHeightFieldShape.h"

namespace RE
{
	class alignas(16) hkpStorageSampledHeightFieldShape :
		public hkpSampledHeightFieldShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStorageSampledHeightFieldShape };
		static constexpr auto VTABLE{ VTABLE::hkpStorageSampledHeightFieldShape };

		// override (hkpSampledHeightFieldShape)
		virtual ~hkpStorageSampledHeightFieldShape() = default;  // 00

		// members
		float*       m_storage;       // 60
		hkBool       m_triangleFlip;  // 64?
		std::uint8_t pad65[0x3];      // 65
		std::int32_t invZRes;         // 68?
		float        fOffset;         // 6C?
		bool         bowned;          // 70?
		std::uint8_t pad71[0xF];      // 71
	};
}
