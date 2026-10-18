#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkContactPoint
	{
	public:
		hkContactPoint* ctor(hkContactPoint const& __that)
		{
			using func_t = hkContactPoint*(__thiscall*)(hkContactPoint*, hkContactPoint const&);
			static REL::Relocation<func_t> func{ Offsets::hkContactPoint::ctor };
			return func(this, __that);
		}

		void set(hkVector4 const& position, hkVector4 const& normal, float dist)
		{
			using func_t = decltype(&hkContactPoint::set);
			static REL::Relocation<func_t> func{ Offsets::hkContactPoint::set };
			func(this, position, normal, dist);
		}

	public:
		// members
		hkVector4 m_position;          // 00
		hkVector4 m_separatingNormal;  // 10?
	};
}
