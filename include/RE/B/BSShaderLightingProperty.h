#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiTPointerListSingleThread.h"

namespace RE
{
	class ShadowSceneLight;

	class BSShaderLightingProperty :
		public BSShaderProperty  // 00
	{
	public:
		// members
		NiTPointerListSingleThread<ShadowSceneLight*> lLightList;         // 60
		float                                         fForcedDarkness;    // 6C
		std::uint32_t                                 uiReferenceID;      // 70
		bool                                          bLightListChanged;  // 74?
		std::uint8_t                                  pad75[0x3];         // 75
		void*                                         kLightListFence;    // 78?
	};
}
