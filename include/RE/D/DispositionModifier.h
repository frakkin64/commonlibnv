#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;

	// not confirmed: no named code in the executable refers to this type
	class DispositionModifier
	{
	public:
		// members
		std::int32_t modifieramount;  // 00?
		Actor*       pactormodified;  // 04?
	};
}
