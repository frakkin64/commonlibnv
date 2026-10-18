#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiNode;

	class BIPBONE
	{
	public:
		// members
		std::uint8_t cFlags;      // 00
		std::uint8_t pad01[0x3];  // 01
		NiNode*      pParent;     // 04
	};
}
