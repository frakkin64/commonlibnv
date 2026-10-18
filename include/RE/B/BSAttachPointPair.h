#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"

namespace RE
{
	class BSAttachPointPair
	{
	public:
		// members
		NiFixedString Parent;  // 00?
		NiFixedString Child;   // 04?
	};
}
