#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpCollidable;
	class hkpPhantom;

	class hkpCollidableRemovedEvent
	{
	public:
		// members
		const hkpPhantom*    m_phantom;             // 00?
		const hkpCollidable* m_collidable;          // 04?
		hkBool               m_collidableWasAdded;  // 08?
		std::uint8_t         pad09[0x3];            // 09
	};
}
