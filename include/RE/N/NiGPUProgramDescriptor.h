#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiGPUProgramDescriptor
	{
	public:
		// members
		NiFixedString m_kIdentifier;     // 00?
		std::uint32_t m_auiBitArray[4];  // 04?
	};
}
