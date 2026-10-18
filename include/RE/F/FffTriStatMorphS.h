#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FffTriStatMorphS
	{
	public:
		// members
		stl::string                label;           // 00?
		std::uint32_t              firstVtxOffset;  // 1C?
		stl::vector<std::uint32_t> vtxIdxList;      // 20?
	};
}
