#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiBoolKey :
		public NiAnimationKey  // 00
	{
	public:
		// members
		bool         m_bBool;     // 04?
		std::uint8_t pad05[0x3];  // 05
	};
}
