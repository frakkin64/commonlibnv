#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkShapePhantomCinfo.h"

namespace RE
{
	class hkSimpleShapePhantomCinfo :
		public hkShapePhantomCinfo  // 00
	{
	public:
		hkSimpleShapePhantomCinfo* ctor()
		{
			using func_t = hkSimpleShapePhantomCinfo*(__thiscall*)(hkSimpleShapePhantomCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkSimpleShapePhantomCinfo::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(hkSimpleShapePhantomCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkSimpleShapePhantomCinfo::dtor };
			func(this);
		}
	};
}
