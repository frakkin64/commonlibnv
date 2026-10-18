#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESRegionObject;

	// not confirmed: no named code in the executable refers to this type
	class __declspec(novtable) TESRegionObjectList :
		public BSSimpleList<TESRegionObject*>  // 04
	{
	public:
		// members
		bool          bOwnsTESRegionObjectMemory;  // 0C?
		std::uint8_t  pad0D[0x3];                  // 0D
		std::uint32_t iCount;                      // 10?
	};
}
