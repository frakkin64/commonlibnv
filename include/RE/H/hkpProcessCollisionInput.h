#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkPadSpu.h"
#include "RE/H/hkStepInfo.h"
#include "RE/H/hkpCollisionInput.h"

namespace RE
{
	class hkpAgent1nSector;
	class hkpCollisionAgentConfig;
	class hkpCollisionQualityInfo;

	class alignas(16) hkpProcessCollisionInput :
		public hkpCollisionInput  // 00
	{
	public:
		// members
		hkStepInfo                         m_stepInfo;                       // 50?
		hkPadSpu<hkpCollisionQualityInfo*> m_collisionQualityInfo;           // 60?
		hkpAgent1nSector*                  m_spareAgentSector;               // 64?
		void*                              m_dynamicsInfo;                   // 68?
		hkBool                             m_enableDeprecatedWelding;        // 6C?
		hkBool                             m_allowToSkipConfirmedCallbacks;  // 6D?
		std::uint16_t                      pad6E;                            // 6E
		hkpCollisionAgentConfig*           m_config;                         // 70?
		std::uint8_t                       pad74[0xC];                       // 74
	};
}
