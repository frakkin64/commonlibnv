#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"
#include "RE/H/hkConvexShapeCinfo.h"

namespace RE
{
	class hkCapsuleShapeCinfo :
		public hkConvexShapeCinfo  // 00
	{
	public:
		hkCapsuleShapeCinfo* ctor()
		{
			using func_t = hkCapsuleShapeCinfo*(__thiscall*)(hkCapsuleShapeCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkCapsuleShapeCinfo::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t pad08[0x8];  // 08
		bhkVector4   m_vertexA;   // 10
		bhkVector4   m_vertexB;   // 20?
	};
}
