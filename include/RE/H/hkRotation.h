#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMatrix3.h"

namespace RE
{
	class alignas(16) hkRotation :
		public hkMatrix3  // 00
	{
	public:
		hkRotation* ctor()
		{
			using func_t = hkRotation*(__thiscall*)(hkRotation*);
			static REL::Relocation<func_t> func{ Offsets::hkRotation::ctor };
			return func(this);
		}
	};
}
