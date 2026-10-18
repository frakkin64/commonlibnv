#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFileSystem_FlagValues.h"
#include "RE/H/hkFlags.h"

namespace RE
{
	class hkFileSystem_Entry
	{
	public:
		// members
		const char*                                     name;          // 00?
		std::uint32_t                                   timeModified;  // 04?
		hkFlags<hkFileSystem_FlagValues, std::uint32_t> flags;         // 08?
	};
}
