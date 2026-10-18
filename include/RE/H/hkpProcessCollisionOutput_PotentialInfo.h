#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpProcessCollisionOutput_ContactRef.h"

namespace RE
{
	class hkpProcessCdPoint;

	class hkpProcessCollisionOutput_PotentialInfo
	{
	public:
		// members
		hkpProcessCollisionOutput_ContactRef* m_firstFreePotentialContact;       // 00?
		hkpProcessCdPoint**                   m_firstFreeRepresentativeContact;  // 04?
		hkpProcessCdPoint*                    m_representativeContacts[256];     // 08?
		hkpProcessCollisionOutput_ContactRef  m_potentialContacts[256];          // 408?
	};
}
