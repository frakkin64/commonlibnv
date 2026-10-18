#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollidable;
	class hkpShape;

	class hkpCdBody
	{
	public:
		hkpCollidable const* getRootCollidable() const
		{
			using func_t = decltype(&hkpCdBody::getRootCollidable);
			static REL::Relocation<func_t> func{ Offsets::hkpCdBody::getRootCollidable };
			return func(this);
		}

	public:
		// members
		const hkpShape*  m_shape;     // 00
		std::uint32_t    m_shapeKey;  // 04
		const void*      m_motion;    // 08
		const hkpCdBody* m_parent;    // 0C
	};
	static_assert(sizeof(hkpCdBody) == 0x10);
}
