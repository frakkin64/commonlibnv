#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkPhantomCinfo.h"

namespace RE
{
	class alignas(16) hkAabbPhantomCinfo :
		public hkPhantomCinfo  // 00
	{
	public:
		hkAabbPhantomCinfo* ctor()
		{
			using func_t = hkAabbPhantomCinfo*(__thiscall*)(hkAabbPhantomCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkAabbPhantomCinfo::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t pad18[0x8];  // 18
		hkAabb       aabb;        // 20
	};
}
