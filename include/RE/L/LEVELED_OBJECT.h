#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ContainerItemExtra;
	class TESForm;

	// not confirmed: no named code in the executable refers to this type
	class LEVELED_OBJECT
	{
	public:
		// members
		TESForm*            pForm;       // 00?
		std::uint16_t       sCount;      // 04?
		std::uint16_t       sLevel;      // 06?
		ContainerItemExtra* pItemExtra;  // 08?
	};
}
