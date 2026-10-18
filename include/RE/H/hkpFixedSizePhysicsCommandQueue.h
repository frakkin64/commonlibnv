#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpPhysicsCommandQueue.h"

namespace RE
{
	template <std::size_t N>
	class hkpFixedSizePhysicsCommandQueue :
		public hkpPhysicsCommandQueue  // 00
	{
	public:
		// members
		std::uint8_t m_buffer[N];
	};
}
