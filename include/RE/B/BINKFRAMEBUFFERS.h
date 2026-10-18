#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BINKFRAMEPLANESET.h"

namespace RE
{
	class BINKFRAMEBUFFERS
	{
	public:
		// members
		std::int32_t      TotalFrames;       // 00?
		std::uint32_t     YABufferWidth;     // 04?
		std::uint32_t     YABufferHeight;    // 08?
		std::uint32_t     cRcBBufferWidth;   // 0C?
		std::uint32_t     cRcBBufferHeight;  // 10?
		std::uint32_t     FrameNum;          // 14?
		BINKFRAMEPLANESET Frames[2];         // 18?
	};
}
