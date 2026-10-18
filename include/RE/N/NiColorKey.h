#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey.h"
#include "RE/N/NiColorA.h"

namespace RE
{
	class NiColorKey :
		public NiAnimationKey  // 00
	{
	public:
		// members
		NiColorA m_Color;  // 04?
	};
}
