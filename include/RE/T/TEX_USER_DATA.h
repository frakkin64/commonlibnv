#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiTexture;
	class TESForm;

	// not confirmed: no named code in the executable refers to this type
	class TEX_USER_DATA
	{
	public:
		// members
		NiPointer<NiTexture>   spTexture;      // 00?
		std::uint32_t          ulTextureSize;  // 04?
		BSSimpleList<TESForm*> UserList;       // 08?
	};
}
