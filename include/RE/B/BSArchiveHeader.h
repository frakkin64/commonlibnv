#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ArchiveFlag.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSArchiveHeader
	{
	public:
		// members
		std::uint32_t iTag;                   // 00?
		std::uint32_t iVersion;               // 04?
		std::uint32_t iHeaderSize;            // 08?
		ArchiveFlag   oFlags;                 // 0C?
		std::uint32_t iDirectories;           // 10?
		std::uint32_t iFiles;                 // 14?
		std::uint32_t iDirectoryNamesLength;  // 18?
		std::uint32_t iFileNamesLength;       // 1C?
		std::uint16_t iArchiveType;           // 20?
		std::uint16_t pad22;                  // 22
	};
}
