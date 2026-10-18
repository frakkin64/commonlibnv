#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSphereRepShapeCinfo.h"

namespace RE
{
	class hkConvexShapeCinfo :
		public hkSphereRepShapeCinfo  // 00
	{
	public:
		hkConvexShapeCinfo* ctor()
		{
			using func_t = hkConvexShapeCinfo*(__thiscall*)(hkConvexShapeCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkConvexShapeCinfo::ctor };
			return func(this);
		}

	public:
		// members
		float m_radius;  // 04
	};
}
