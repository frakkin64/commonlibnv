#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class Sphere
	{
	public:
		Sphere* ctor(NiPoint3 const& aCenter, float afRadius)
		{
			using func_t = Sphere*(__thiscall*)(Sphere*, NiPoint3 const&, float);
			static REL::Relocation<func_t> func{ Offsets::Sphere::ctor };
			return func(this, aCenter, afRadius);
		}

	public:
		// members
		NiPoint3 Center;   // 00
		float    fRadius;  // 0C
	};
}
