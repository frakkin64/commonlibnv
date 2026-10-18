#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class HavokThreadMemoryStruct
	{
	public:
		// members
		void*         pHavokThreadRouter;       // 00
		char*         pHavokThreadStackBuffer;  // 04
		std::uint32_t iThreadID;                // 08
	};
}
