#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiAVObject;

	class NiPSysBombModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysBombModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysBombModifier };

		enum class DecayType : std::int32_t
		{
			kNONE = 0x0,
			kONE_VALUE = 0x1,
			kTWO_VALUE = 0x2,
			kLEVELED_LIST = 0x3,
			kACTIVATE_CHOICE = 0x4,
		};

		enum class SymmType : std::int32_t
		{
			kSPHERICAL = 0x0,
			kCYLINDRICAL = 0x1,
			kPLANAR = 0x2,
		};

		// members
		NiAVObject*                   m_pkBombObj;   // 18
		NiPoint3                      m_kBombAxis;   // 1C
		float                         m_fDecay;      // 28
		float                         m_fDeltaV;     // 2C
		NiPSysBombModifier::DecayType m_eDecayType;  // 30
		NiPSysBombModifier::SymmType  m_eSymmType;   // 34
	};
}
