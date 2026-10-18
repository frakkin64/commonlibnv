#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderPPLightingProperty.h"

namespace RE
{
	class HairShaderProperty :
		public BSShaderPPLightingProperty  // 00
	{
	public:
		// members
		// not placed: spPrimaryLight, spPreviousPrimaryLight, pHairLightPos, fHairLightRadius, pHairLightColor, pHairTintColor, spHeightMap
	};
}
