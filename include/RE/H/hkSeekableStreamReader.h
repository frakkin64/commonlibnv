#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStreamReader.h"

namespace RE
{
	class hkSeekableStreamReader :
		public hkStreamReader  // 00
	{
	public:
		// members
		std::int32_t m_markPos;  // 08
	};
	static_assert(sizeof(hkSeekableStreamReader) == 0xC);
}
