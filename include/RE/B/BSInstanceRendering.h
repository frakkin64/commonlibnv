#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiTexture;

	// not confirmed: no named code in the executable refers to this type
	class BSInstanceRendering
	{
	public:
		// members
		NiTexture** pPrevTextures;  // 00?
	};
}
