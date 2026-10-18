#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectLAND;

	// not confirmed: no named code in the executable refers to this type
	class LANDS8
	{
	public:
		// members
		TESObjectLAND* pNWLand;  // 00?
		TESObjectLAND* pNLand;   // 04?
		TESObjectLAND* pNELand;  // 08?
		TESObjectLAND* pWLand;   // 0C?
		TESObjectLAND* pELand;   // 10?
		TESObjectLAND* pSWLand;  // 14?
		TESObjectLAND* pSLand;   // 18?
		TESObjectLAND* pSELand;  // 1C?
	};
}
