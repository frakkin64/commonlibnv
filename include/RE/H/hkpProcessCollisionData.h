#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkpProcessCdPoint.h"
#include "RE/H/hkpProcessCollisionData_ToiInfo.h"

namespace RE
{
	class hkpConstraintOwner;

	class alignas(16) hkpProcessCollisionData
	{
	public:
		using ToiInfo = hkpProcessCollisionData_ToiInfo;

		// members
		hkPadSpu<hkpProcessCdPoint*>    m_firstFreeContactPoint;  // 00
		hkPadSpu<hkpConstraintOwner*>   m_constraintOwner;        // 04?
		std::uint8_t                    pad08[0x8];               // 08
		hkpProcessCdPoint               m_contactPoints[256];     // 10?
		hkpProcessCollisionData_ToiInfo m_toi;                    // 3010?
	};
}
