#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkFileSystem_Entry.h"

namespace RE
{
	class hkMemoryAllocator;

	class hkFileSystem_DirectoryListing
	{
	public:
		// members
		hkArrayBase<hkFileSystem_Entry> m_entries;  // 00?
		hkMemoryAllocator*              m_alloc;    // 0C?
	};
}
