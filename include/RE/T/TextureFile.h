#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class TextureFile
	{
	public:
		// members
		std::int32_t iType;          // 00?
		char         pFilename[32];  // 04?
	};
}
