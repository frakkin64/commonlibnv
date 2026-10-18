#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiTexture;

	class ImageSpaceShaderTextureMask :
		public ImageSpaceShader  // 00
	{
	public:
		// members
		NiPointer<NiTexture> spTextureMask;  // D0?
	};
}
