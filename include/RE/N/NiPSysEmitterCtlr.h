#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifierCtlr.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveSet.h"

namespace RE
{
	class NiFloatInterpolator;
	class NiInterpolator;

	class NiPSysEmitterCtlr :
		public NiPSysModifierCtlr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysEmitterCtlr };
		static constexpr auto VTABLE{ VTABLE::NiPSysEmitterCtlr };

		// add
		virtual void Unk_3C();  // 3C

		NiFloatInterpolator* GetBirthRateInterpolator() const
		{
			using func_t = decltype(&NiPSysEmitterCtlr::GetBirthRateInterpolator);
			static REL::Relocation<func_t> func{ Offsets::NiPSysEmitterCtlr::GetBirthRateInterpolator };
			return func(this);
		}

	public:
		// members
		NiPointer<NiInterpolator> m_spEmitterActiveInterpolator;  // 40
		NiInterpolator*           m_pkLastBirthRateInterpolator;  // 44
		float                     m_fLastScaledTime;              // 48
		bool                      m_bLastActive;                  // 4C
		std::uint8_t              pad4D[0x3];                     // 4D
		NiTPrimitiveSet<float>    m_kParticleAges;                // 50
	};
	static_assert(sizeof(NiPSysEmitterCtlr) == 0x5C);
}
