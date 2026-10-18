#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/Ni2DBuffer.h"

namespace RE
{
	class NiDepthStencilBuffer :
		public Ni2DBuffer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDepthStencilBuffer };
		static constexpr auto VTABLE{ VTABLE::NiDepthStencilBuffer };

		// members
		std::uint32_t ulDepthStencilMemorySize;  // 14?
	};
}
