#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	class ReconstructFormData
	{
	public:
		// members
		TESForm*      pForm;   // 00
		std::uint32_t iFlags;  // 04
	};
	static_assert(sizeof(ReconstructFormData) == 0x8);
}
