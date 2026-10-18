#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiParticlesData.h"

namespace RE
{
	class NiParticleInfo;

	class NiPSysData :
		public NiParticlesData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysData };
		static constexpr auto VTABLE{ VTABLE::NiPSysData };

		// add
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B

		// members
		NiParticleInfo* m_pkParticleInfo;        // 70
		float*          m_pfRotationSpeeds;      // 74
		std::uint16_t   m_usNumAddedParticles;   // 78
		std::uint16_t   m_usAddedParticlesBase;  // 7A
	};
}
