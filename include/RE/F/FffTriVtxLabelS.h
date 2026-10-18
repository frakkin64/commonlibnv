#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FffTriVtxLabelS
	{
	public:
		// members
		std::uint32_t idx;    // 00?
		stl::string   label;  // 04?
	};
}
