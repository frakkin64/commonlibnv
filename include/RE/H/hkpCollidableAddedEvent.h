#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollidableAccept.h"

namespace RE
{
	class hkpCollidable;
	class hkpPhantom;

	class hkpCollidableAddedEvent
	{
	public:
		// members
		const hkpPhantom*    m_phantom;           // 00?
		const hkpCollidable* m_collidable;        // 04?
		hkpCollidableAccept  m_collidableAccept;  // 08?
	};
}
