#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingAvoidNode.h"

namespace RE
{
	class NavMeshStaticAvoidNode :
		public PathingAvoidNode  // 00
	{
	public:
		// members
		std::uint16_t usTriangle;  // 24
		std::uint16_t pad26;       // 26
	};
}
