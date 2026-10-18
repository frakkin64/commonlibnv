#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSNiNode.h"
#include "RE/N/NiBound.h"

namespace RE
{
	class BSOrderedNode :
		public BSNiNode  // 00
	{
	public:
		// members
		NiBound      StaticBound;      // AC
		bool         bHasStaticBound;  // BC
		std::uint8_t padBD[0x3];       // BD
	};
}
