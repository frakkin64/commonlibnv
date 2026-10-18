#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ChangeData
	{
	public:
		// members
		std::uint32_t iFlags;   // 00?
		void*         pBuffer;  // 04
	};
}
