#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSSharedSoundBuffer :
		public NiRefObject  // 00
	{
	public:
		// members
		bool          bPhysical;     // 08?
		std::uint8_t  pad09[0x3];    // 09
		std::uint32_t dwAllocFlags;  // 0C?
		std::uint32_t iSize;         // 10?
		std::uint8_t* pbBuffer;      // 14?
		std::int32_t  iCount;        // 18?
	};
}
