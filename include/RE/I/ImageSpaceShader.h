#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/I/ImageSpaceEffect.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ImageSpaceShaderParam;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class ImageSpaceShader :
		public BSShader,  // 00
		public ImageSpaceEffect  // 6C
	{
	public:
		// members
		NiPointer<NiD3DVertexShader> spVertexShader;  // C4
		NiPointer<NiD3DPixelShader>  spPixelShader;   // C8
		ImageSpaceShaderParam*       pParam;          // CC?
	};
}
