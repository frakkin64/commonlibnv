#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStream.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class GrassLoadTask :
		public QueuedFileEntry  // 00
	{
	public:
		// members
		BSStream      m_kStream;  // 30?
		std::uint32_t pad5FC;     // 5FC
	};
}
