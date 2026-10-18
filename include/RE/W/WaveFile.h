#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/RiffChunk.h"

namespace RE
{
	class BSFile;

	// not confirmed: no named code in the executable refers to this type
	class WaveFile
	{
	public:
		// members
		BSFile*       pFile;            // 00?
		RiffChunk     BaseRiffChunk;    // 04?
		RiffChunk     FormatChunk;      // 1C?
		RiffChunk     DataChunk;        // 34?
		RiffChunk     WaveSampleChunk;  // 4C?
		RiffChunk     SamplerChunk;     // 64?
		RiffChunk     SeekTableChunk;   // 7C?
		std::uint32_t uiDuration;       // 94?
	};
}
