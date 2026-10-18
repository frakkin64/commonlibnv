#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkAabb
	{
	public:
		hkAabb* ctor()
		{
			using func_t = hkAabb*(__thiscall*)(hkAabb*);
			static REL::Relocation<func_t> func{ Offsets::hkAabb::ctor };
			return func(this);
		}

		hkAabb* ctor(hkVector4 const& min_, hkVector4 const& max_)
		{
			using func_t = hkAabb*(__thiscall*)(hkAabb*, hkVector4 const&, hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::hkAabb::ctor_1 };
			return func(this, min_, max_);
		}

		void includePoint(hkVector4 const& point)
		{
			using func_t = decltype(&hkAabb::includePoint);
			static REL::Relocation<func_t> func{ Offsets::hkAabb::includePoint };
			func(this, point);
		}

	public:
		// members
		hkVector4 m_min;  // 00
		hkVector4 m_max;  // 10
	};
	static_assert(sizeof(hkAabb) == 0x20);
}
