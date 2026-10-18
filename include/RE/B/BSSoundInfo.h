#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSDebugSoundInfo.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSSoundInfo
	{
	public:
		// members
		std::uint32_t    iID;          // 00?
		float            fFrequency;   // 04?
		float            fVolume;      // 08?
		std::uint32_t    uiSoundType;  // 0C?
		std::uint32_t    uiDuration;   // 10?
		bool             bIsPlaying;   // 14?
		std::uint8_t     pad15[0x3];   // 15
		BSDebugSoundInfo pDebugInfo;   // 18?
	};
}
