#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkSphere
	{
	public:
		void setRadius(float newRadius)
		{
			using func_t = decltype(&hkSphere::setRadius);
			static REL::Relocation<func_t> func{ Offsets::hkSphere::setRadius };
			func(this, newRadius);
		}

	public:
		// members
		hkVector4 m_pos;  // 00
	};
}
