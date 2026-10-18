#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderPPLightingProperty.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class Lighting30ShaderProperty :
		public BSShaderPPLightingProperty  // 00
	{
	public:
		// members
		// not placed: bLightsTransformed
	};
}
