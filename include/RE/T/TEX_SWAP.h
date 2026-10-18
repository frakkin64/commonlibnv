#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSTextureSet;

	// not confirmed: no named code in the executable refers to this type
	class TEX_SWAP
	{
	public:
		// members
		BGSTextureSet* pNewTexture;     // 00?
		std::int32_t   iGeomIndex;      // 04?
		char           pGeomName[128];  // 08?
	};
}
