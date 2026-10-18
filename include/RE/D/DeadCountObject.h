#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESActorBase;

	// not confirmed: no named code in the executable refers to this type
	class DeadCountObject
	{
	public:
		// members
		TESActorBase* pActorBase;  // 00?
		std::int16_t  scount;      // 04?
		std::uint16_t pad06;       // 06
	};
}
