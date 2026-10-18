#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkaSkeleton;

	// not confirmed: no named code in the executable refers to this type
	class alignas(16) bhkLookIKData
	{
	public:
		// members
		hkaSkeleton* pHeadSkel;    // 00?
		std::uint8_t pad04[0xC];   // 04
		hkVector4    FwdParentMS;  // 10?
		hkVector4    FwdLS;        // 20?
	};
}
