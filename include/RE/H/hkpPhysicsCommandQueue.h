#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpPhysicsCommand.h"
#include "RE/H/hkpRelativePointer32.h"

namespace RE
{
	class hkpPhysicsCommandQueue
	{
	public:
		// members
		hkpRelativePointer32<hkpPhysicsCommand> m_start;     // 00?
		std::uint32_t                           m_size;      // 04?
		std::uint32_t                           m_capacity;  // 08?
	};
}
