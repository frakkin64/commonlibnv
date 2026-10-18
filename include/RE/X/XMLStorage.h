#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class XMLStorage
	{
	public:
		// members
		std::uint32_t iFileSize;  // 00
		char*         pXMLData;   // 04
	};
}
