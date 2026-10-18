#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObject;
	class TESObjectCELL;

	class TESObjectList
	{
	public:
		// members
		std::uint32_t  lnk_dwCount;  // 00
		TESObject*     lnk_lpRoot;   // 04
		TESObject*     lnk_lpTail;   // 08
		TESObjectCELL* pOwner;       // 0C?
	};
}
