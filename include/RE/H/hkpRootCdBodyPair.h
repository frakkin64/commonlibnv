#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollidable;

	class hkpRootCdBodyPair
	{
	public:
		// members
		const hkpCollidable* m_rootCollidableA;  // 00?
		std::uint32_t        m_shapeKeyA;        // 04?
		const hkpCollidable* m_rootCollidableB;  // 08?
		std::uint32_t        m_shapeKeyB;        // 0C?
	};
}
