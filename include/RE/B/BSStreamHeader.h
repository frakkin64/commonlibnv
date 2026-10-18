#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSStreamHeader
	{
	public:
		// members
		std::uint32_t uiVersion;           // 00
		char          pAuthor[64];         // 04?
		char          pProcessScript[64];  // 44?
		char          pExportScript[64];   // 84?
	};
}
