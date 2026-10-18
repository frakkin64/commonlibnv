#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkWorldNS_OBJECTACTION.h"
#include "RE/U/UDATA.h"

namespace RE
{
	class bhkWorld;

	class bhkWorldNS_ObjectRecData
	{
	public:
		// members
		bhkWorld*               pWorld;      // 00
		bool                    bRecurse;    // 04
		std::uint8_t            pad05[0x3];  // 05
		bhkWorldNS_OBJECTACTION eAction;     // 08
		UDATA                   uDataA[4];   // 0C?
	};
}
