#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey.h"
#include "RE/N/NiQuaternion.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiRotKey :
		public NiAnimationKey  // 00
	{
	public:
		// members
		NiQuaternion m_quat;  // 04?
	};
}
