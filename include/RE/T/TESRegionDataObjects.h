#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESRegionData.h"

namespace RE
{
	class TESRegionObjectList;

	// not confirmed: no named code in the executable refers to this type
	class TESRegionDataObjects :
		public TESRegionData  // 00
	{
	public:
		// members
		TESRegionObjectList* pObjects;           // 08?
		bool                 bGeneratedObjects;  // 0C?
		std::uint8_t         pad0D[0x3];         // 0D
	};
}
