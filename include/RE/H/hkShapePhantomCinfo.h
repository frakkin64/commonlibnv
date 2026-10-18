#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkTransform.h"
#include "RE/H/hkPhantomCinfo.h"

namespace RE
{
	class hkShapePhantomCinfo :
		public hkPhantomCinfo  // 00
	{
	public:
		hkShapePhantomCinfo* ctor()
		{
			using func_t = hkShapePhantomCinfo*(__thiscall*)(hkShapePhantomCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkShapePhantomCinfo::ctor };
			return func(this);
		}

	public:
		// members
		bhkTransform m_transform;  // 18?
		std::uint8_t pad58[0x18];  // 58
	};
	static_assert(sizeof(hkShapePhantomCinfo) == 0x70);
}
