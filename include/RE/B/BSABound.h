#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSNiBound.h"

namespace RE
{
	class NiObject;

	// not confirmed: no named code in the executable refers to this type
	class BSABound :
		public BSNiBound  // 00
	{
	public:
		// members
		NiObject*     pOwner;   // 10?
		std::uint32_t iPad[2];  // 14?
	};
}
