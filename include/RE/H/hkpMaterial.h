#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkpMaterial_ResponseType.h"

namespace RE
{
	class hkpMaterial
	{
	public:
		using ResponseType = hkpMaterial_ResponseType;

		// members
		hkEnum<hkpMaterial_ResponseType, std::int8_t> m_responseType;  // 00?
		std::uint8_t                                  pad01[0x3];      // 01
		float                                         m_friction;      // 04?
		float                                         m_restitution;   // 08?
	};
}
