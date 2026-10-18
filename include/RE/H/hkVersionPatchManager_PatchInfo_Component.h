#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVersionPatchManager_PatchType.h"

namespace RE
{
	class hkVersionPatchManager_PatchInfo_Component
	{
	public:
		// members
		hkVersionPatchManager_PatchType type;   // 00?
		const void*                     patch;  // 04?
	};
}
