#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	class PortalLinkedRefData
	{
	public:
		// members
		TESObjectREFR* pLinkedRefs[2];  // 00?
	};
}
