#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiAVObject;

	class NiPSysGravityModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysGravityModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysGravityModifier };

		enum class ForceType : std::int32_t
		{
			kFORCE_PLANAR = 0x0,
			kFORCE_SPHERICAL = 0x1,
		};

		// members
		NiAVObject*                      m_pkGravityObj;   // 18
		NiPoint3                         m_kGravityAxis;   // 1C
		float                            m_fDecay;         // 28
		float                            m_fStrength;      // 2C
		NiPSysGravityModifier::ForceType m_eType;          // 30
		float                            m_fTurbulence;    // 34
		float                            m_fScale;         // 38
		bool                             m_bWorldAligned;  // 3C
		std::uint8_t                     pad3D[0x3];       // 3D
	};
}
