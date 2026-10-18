#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class DECAL_PLACEMENT_VECTOR_GROUP_DATA
	{
	public:
		// members
		std::uint16_t usVectorCount;       // 00?
		std::uint16_t pad02;               // 02
		NiPoint3      VectorOrigin[8];     // 04?
		NiPoint3      VectorDirection[8];  // 64?
	};
}
