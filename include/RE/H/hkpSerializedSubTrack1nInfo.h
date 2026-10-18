#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpSerializedTrack1nInfo.h"

namespace RE
{
	class hkpSerializedSubTrack1nInfo :
		public hkpSerializedTrack1nInfo  // 00
	{
	public:
		// members
		std::int32_t m_sectorIndex;     // 18?
		std::int32_t m_offsetInSector;  // 1C?
	};
}
