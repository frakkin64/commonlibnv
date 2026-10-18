#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSArchiveHeader.h"

namespace RE
{
	class BSDirectoryEntry;

	// not confirmed: no named code in the executable refers to this type
	class BSArchive :
		public BSArchiveHeader  // 00
	{
	public:
		// members
		BSDirectoryEntry* pDirectories;  // 24?
	};
}
