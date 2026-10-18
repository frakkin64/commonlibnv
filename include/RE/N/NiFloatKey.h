#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey.h"

namespace RE
{
	class NiFloatKey :
		public NiAnimationKey  // 00
	{
	public:
		// members
		float m_fValue;  // 04?
	};
}
