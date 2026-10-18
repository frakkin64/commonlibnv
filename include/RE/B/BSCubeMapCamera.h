#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiCamera.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSCubeMapCamera :
		public NiCamera  // 00
	{
	public:
		enum class etCubeMapType : std::int32_t
		{
			kBSCMC_CUBEMAP = 0x0,
			kBSCMC_6TEXTURES = 0x1,
			kBSCMC_TILEDCUBE = 0x2,
			kBSCMC_CUBEMAPMASK = 0x3,
		};

		// members
		// not placed: eCubeMapType, spRenderedTexture, spRenderedCubeMap, pShadowLight, spCubeMapScene, spAccumulator
	};
}
