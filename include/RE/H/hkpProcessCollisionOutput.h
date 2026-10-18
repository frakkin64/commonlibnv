#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkpProcessCollisionData.h"
#include "RE/H/hkpProcessCollisionOutput_ContactRef.h"
#include "RE/H/hkpProcessCollisionOutput_PotentialInfo.h"

namespace RE
{
	class alignas(16) hkpProcessCollisionOutput :
		public hkpProcessCollisionData  // 00
	{
	public:
		using ContactRef = hkpProcessCollisionOutput_ContactRef;
		using PotentialInfo = hkpProcessCollisionOutput_PotentialInfo;

		// members
		hkPadSpu<hkpProcessCollisionOutput_PotentialInfo*> m_potentialContacts;  // 3080?
		std::uint8_t                                       pad3084[0xC];         // 3084
	};
}
