#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkxLight :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxLight };
		static constexpr auto VTABLE{ VTABLE::hkxLight };

		enum class LightType : std::int32_t
		{
			kAMBIENT_LIGHT = 0x0,
			kPOINT_LIGHT = 0x2,
			kDIR_LIGHT = 0x3,
			kSPOT_LIGHT = 0x4,
			kTEXTURE_EFFECT = 0x5,
			kMAX_TYPES = 0x6,
			kMAX_LIGHT_TYPE = 0x4,
		};

		// override (hkReferencedObject)
		virtual ~hkxLight() = default;  // 00

		// members
		hkEnum<hkxLight::LightType, std::int8_t> m_type;       // 08?
		std::uint8_t                             pad09[0x7];   // 09
		hkVector4                                m_position;   // 10?
		hkVector4                                m_direction;  // 20?
		std::uint32_t                            m_color;      // 30?
		float                                    m_angle;      // 34?
		std::uint8_t                             pad38[0x8];   // 38
	};
}
