#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSHash.h"

namespace RE
{
	class BSFileEntry;

	// not confirmed: no named code in the executable refers to this type
	class BSDirectoryEntry :
		public BSHash  // 00
	{
	public:
		// members
		std::uint32_t iFiles;  // 08?
		BSFileEntry*  pFiles;  // 0C?
	};
}
