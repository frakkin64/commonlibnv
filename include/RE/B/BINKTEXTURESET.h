#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BINKFRAMEBUFFERS.h"
#include "RE/B/BINKFRAMETEXTURES.h"

namespace RE
{
	class BINKTEXTURESET
	{
	public:
		// members
		BINKFRAMETEXTURES textures[2];   // 00?
		BINKFRAMEBUFFERS  bink_buffers;  // 40?
	};
}
