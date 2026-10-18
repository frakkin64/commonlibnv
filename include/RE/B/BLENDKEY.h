#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BLENDKEY
	{
	public:
		// members
		float fTime;     // 00?
		float fGain;     // 04?
		float fVelGain;  // 08?
	};
}
