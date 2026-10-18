#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class XAUDIOFXINIT
	{
	public:
		// members
		std::uint8_t EffectId;    // 00?
		std::uint8_t pad01[0x3];  // 01
		void*        pContext;    // 04?
	};
}
