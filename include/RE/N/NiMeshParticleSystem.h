#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiParticleSystem.h"

namespace RE
{
	class NiMeshParticleSystem :
		public NiParticleSystem  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMeshParticleSystem };
		static constexpr auto VTABLE{ VTABLE::NiMeshParticleSystem };

		// members
		// not placed: m_fTime, m_bUpdateControllers
	};
}
