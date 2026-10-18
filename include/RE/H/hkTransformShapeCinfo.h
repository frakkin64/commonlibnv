#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkTransform.h"
#include "RE/H/hkShapeCinfo.h"

namespace RE
{
	class hkpShape;

	class hkTransformShapeCinfo :
		public hkShapeCinfo  // 00
	{
	public:
		hkTransformShapeCinfo* ctor()
		{
			using func_t = hkTransformShapeCinfo*(__thiscall*)(hkTransformShapeCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkTransformShapeCinfo::ctor };
			return func(this);
		}

	public:
		// members
		const hkpShape* m_childShape;  // 04?
		bhkTransform    m_transform;   // 08?
		std::uint8_t    pad48[0x18];   // 48
	};
	static_assert(sizeof(hkTransformShapeCinfo) == 0x60);
}
