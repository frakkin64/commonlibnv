#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRefPtr.h"

namespace RE
{
	class hkReferencedObject;
	class hkVariant;

	class hkRefVariant :
		public hkRefPtr<hkReferencedObject>  // 00
	{
	public:
		hkRefVariant* ctor(hkVariant const& v)
		{
			using func_t = hkRefVariant*(__thiscall*)(hkRefVariant*, hkVariant const&);
			static REL::Relocation<func_t> func{ Offsets::hkRefVariant::ctor };
			return func(this, v);
		}
	};
}
