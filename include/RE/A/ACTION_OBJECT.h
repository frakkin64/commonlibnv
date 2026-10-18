#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	// not confirmed: no named code in the executable refers to this type
	class ACTION_OBJECT
	{
	public:
		// members
		TESForm*      pForm;   // 00?
		std::uint32_t iFlags;  // 04?
	};
}
