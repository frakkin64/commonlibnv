#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class XAUDIOXMAFORMAT
	{
	public:
		// members
		std::uint32_t SampleRate;        // 00?
		std::uint8_t  ChannelCount;      // 04?
		std::uint8_t  DecodeBufferSize;  // 05?
		std::uint16_t pad06;             // 06
	};
}
