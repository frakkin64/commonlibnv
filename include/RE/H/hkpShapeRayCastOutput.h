#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeRayCastCollectorOutput.h"

namespace RE
{
	class alignas(16) hkpShapeRayCastOutput :
		public hkpShapeRayCastCollectorOutput  // 00
	{
	public:
		// members
		std::uint32_t m_shapeKeys[8];   // 20
		std::int32_t  m_shapeKeyIndex;  // 40
		std::uint8_t  pad44[0xC];       // 44
	};
	static_assert(sizeof(hkpShapeRayCastOutput) == 0x50);
}
