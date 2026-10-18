#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BINKPLANE
	{
	public:
		// members
		std::int32_t  Allocate;     // 00?
		void*         Buffer;       // 04?
		std::uint32_t BufferPitch;  // 08?
	};
}
