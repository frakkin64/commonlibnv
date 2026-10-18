#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class ImageSpaceTexture;

	class ImageSpaceEffectMenuBG :
		public ImageSpaceEffect  // 00
	{
	public:
		// members
		ImageSpaceTexture* pSepiaTexture;  // 58
		float              fBlendValue;    // 5C?
		bool               bBlendEnabled;  // 60?
		std::uint8_t       pad61[0x3];     // 61
	};
}
