#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiPosKey :
		public NiAnimationKey  // 00
	{
	public:
		// members
		NiPoint3 m_Pos;  // 04?
	};
}
