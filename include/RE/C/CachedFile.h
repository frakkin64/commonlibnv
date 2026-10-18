#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CACHE_STATUS.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CachedFile
	{
	public:
		// members
		char*         pFileName;         // 00?
		char*         pFileName2;        // 04?
		std::uint32_t iFileSize;         // 08?
		CACHE_STATUS  eCacheStatus;      // 0C?
		_FILETIME     LastModifiedTime;  // 10?
		std::uint16_t iPriority;         // 18?
		std::uint16_t pad1A;             // 1A
	};
}
