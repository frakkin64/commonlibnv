#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FileData
	{
	public:
		// members
		char*         pFilename;     // 00?
		_FILETIME     FileTime;      // 04?
		std::uint32_t iFlags;        // 0C?
		void*         pContentData;  // 10?
	};
}
