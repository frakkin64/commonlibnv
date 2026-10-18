#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVersionPatchManager_PatchInfo_Component.h"

namespace RE
{
	class hkVersionPatchManager_PatchInfo
	{
	public:
		using Component = hkVersionPatchManager_PatchInfo_Component;

		// members
		const char*                                      oldName;       // 00?
		const char*                                      newName;       // 04?
		std::int32_t                                     oldVersion;    // 08?
		std::int32_t                                     newVersion;    // 0C?
		const hkVersionPatchManager_PatchInfo_Component* component;     // 10?
		std::int32_t                                     numComponent;  // 14?
	};
}
