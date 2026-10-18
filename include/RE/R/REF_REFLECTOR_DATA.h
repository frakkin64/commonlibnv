#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	// not confirmed: no named code in the executable refers to this type
	class REF_REFLECTOR_DATA
	{
	public:
		// members
		TESObjectREFR* pRef;          // 00?
		std::uint32_t  iEffectFlags;  // 04?
	};
}
