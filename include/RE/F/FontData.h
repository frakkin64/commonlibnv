#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FontLetter.h"
#include "RE/T/TextureFile.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FontData
	{
	public:
		// members
		float        fBaseLine;          // 00?
		std::int32_t iTextureCount;      // 04?
		TextureFile  pTextureFiles[8];   // 08?
		FontLetter   pFontLetters[256];  // 128?
	};
}
