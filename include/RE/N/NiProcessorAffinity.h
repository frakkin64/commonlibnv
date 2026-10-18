#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiProcessorAffinity
	{
	public:
		// members
		std::uint32_t m_eIdealProcessor;  // 00?
		std::uint32_t m_uiAffinityMask;   // 04?
	};
}
