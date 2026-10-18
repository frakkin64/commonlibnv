#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BINKFRAMETEXTURES
	{
	public:
		// members
		void*         Ytexture;   // 00?
		void*         cRtexture;  // 04?
		void*         cBtexture;  // 08?
		void*         Atexture;   // 0C?
		std::uint32_t Ysize;      // 10?
		std::uint32_t cRsize;     // 14?
		std::uint32_t cBsize;     // 18?
		std::uint32_t Asize;      // 1C?
	};
}
