#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSThread.h"
#include "RE/H/HavokThreadMemoryStruct.h"

namespace RE
{
	class FAMThread :
		public BSThread  // 00
	{
	public:
		// members
		void*                   m_event;         // 30
		std::uint8_t            unk34[0x8];      // 34 opaque
		std::uint32_t           m_state;         // 3C
		HavokThreadMemoryStruct m_havok_memory;  // 40
	};
	static_assert(sizeof(FAMThread) == 0x4C);
}
