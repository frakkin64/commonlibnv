#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiLight;

	class REFR_LIGHT
	{
	public:
		// members
		NiPointer<NiLight> spLight;      // 00?
		float              fWantDimmer;  // 04
	};
}
