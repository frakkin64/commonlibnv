#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"
#include "RE/H/hkUnaryActionCinfo.h"

namespace RE
{
	class hkMouseSpringActionCinfo :
		public hkUnaryActionCinfo  // 00
	{
	public:
		hkMouseSpringActionCinfo* ctor()
		{
			using func_t = hkMouseSpringActionCinfo*(__thiscall*)(hkMouseSpringActionCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkMouseSpringActionCinfo::ctor };
			return func(this);
		}

	public:
		// members
		bhkVector4   m_positionInRbLocal;     // 08?
		bhkVector4   m_mousePositionInWorld;  // 18?
		float        m_springDamping;         // 28?
		float        m_springElasticity;      // 2C?
		float        m_maxRelativeForce;      // 30?
		float        m_objectDamping;         // 34?
		std::uint8_t pad38[0x18];             // 38
	};
	static_assert(sizeof(hkMouseSpringActionCinfo) == 0x50);
}
