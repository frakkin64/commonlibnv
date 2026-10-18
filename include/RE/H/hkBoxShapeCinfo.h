#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"
#include "RE/H/hkConvexShapeCinfo.h"

namespace RE
{
	class hkBoxShapeCinfo :
		public hkConvexShapeCinfo  // 00
	{
	public:
		hkBoxShapeCinfo* ctor()
		{
			using func_t = hkBoxShapeCinfo*(__thiscall*)(hkBoxShapeCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkBoxShapeCinfo::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t pad08[0x8];     // 08
		bhkVector4   m_halfExtents;  // 10
	};
}
