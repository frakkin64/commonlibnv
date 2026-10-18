#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointLight.h"

namespace RE
{
	class NiSpotLight :
		public NiPointLight  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSpotLight };
		static constexpr auto VTABLE{ VTABLE::NiSpotLight };

		// members
		NiPoint3 m_kWorldDir;        // FC
		float    m_fOuterSpotAngle;  // 108
		float    m_fInnerSpotAngle;  // 10C
		float    m_fSpotExponent;    // 110
	};
}
