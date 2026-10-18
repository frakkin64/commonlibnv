#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiPSysEmitter :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysEmitter };
		static constexpr auto VTABLE{ VTABLE::NiPSysEmitter };

		// add
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A

		// members
		float    m_fSpeed;           // 18
		float    m_fSpeedVar;        // 1C
		float    m_fDeclination;     // 20
		float    m_fDeclinationVar;  // 24
		float    m_fPlanarAngle;     // 28
		float    m_fPlanarAngleVar;  // 2C
		NiColorA m_kInitialColor;    // 30
		float    m_fInitialRadius;   // 40
		float    m_fRadiusVar;       // 44
		float    m_fLifeSpan;        // 48
		float    m_fLifeSpanVar;     // 4C
		float    m_fScale;           // 50
	};
	static_assert(sizeof(NiPSysEmitter) == 0x54);
}
