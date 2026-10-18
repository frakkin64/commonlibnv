#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBroadPhaseHandle.h"

namespace RE
{
	class hkpTypedBroadPhaseHandle :
		public hkpBroadPhaseHandle  // 00
	{
	public:
		// members
		char          m_type;                 // 04?
		char          m_ownerOffset;          // 05?
		char          m_objectQualityType;    // 06?
		std::uint8_t  pad07;                  // 07
		std::uint32_t m_collisionFilterInfo;  // 08?
	};
}
