#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometry.h"

namespace RE
{
	class NiParticles :
		public NiGeometry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticles };
		static constexpr auto VTABLE{ VTABLE::NiParticles };

	};
}
