#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BoundsTriangleInfo
	{
	public:
		// members
		std::uint16_t usTriangleIndex;  // 00?
		bool          bPortals[3];      // 02?
		std::uint8_t  pad05;            // 05
		std::uint16_t Triangles[3];     // 06?
	};
}
