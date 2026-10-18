#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/SpeedTreeShaderLightingProperty.h"

namespace RE
{
	class STLSPData;

	class SpeedTreeLeafShaderProperty :
		public SpeedTreeShaderLightingProperty  // 00
	{
	public:
		// members
		NiPointer<STLSPData> spLeafData;  // 88?
		std::uint16_t        sLevel;      // 8C
		std::uint16_t        pad8E;       // 8E
	};
}
