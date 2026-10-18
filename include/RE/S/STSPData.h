#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class STSPData :
		public NiRefObject  // 00
	{
	public:
		// members
		void*         pWindInfo;     // 08?
		std::uint16_t sVertexCount;  // 0C?
		std::uint16_t pad0E;         // 0E
	};
}
