#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRotation.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkQuaternion;

	class alignas(16) hkTransform
	{
	public:
		hkTransform* ctor()
		{
			using func_t = hkTransform*(__thiscall*)(hkTransform*);
			static REL::Relocation<func_t> func{ Offsets::hkTransform::ctor };
			return func(this);
		}

		void setIdentity()
		{
			using func_t = decltype(&hkTransform::setIdentity);
			static REL::Relocation<func_t> func{ Offsets::hkTransform::setIdentity };
			func(this);
		}

		hkTransform* ctor(hkQuaternion const& q, hkVector4 const& t)
		{
			using func_t = hkTransform*(__thiscall*)(hkTransform*, hkQuaternion const&, hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::hkTransform::ctor_1 };
			return func(this, q, t);
		}

		hkTransform* ctor(hkTransform const& t)
		{
			using func_t = hkTransform*(__thiscall*)(hkTransform*, hkTransform const&);
			static REL::Relocation<func_t> func{ Offsets::hkTransform::ctor_2 };
			return func(this, t);
		}

		void set(hkQuaternion const& q, hkVector4 const& t)
		{
			using func_t = decltype(&hkTransform::set);
			static REL::Relocation<func_t> func{ Offsets::hkTransform::set };
			func(this, q, t);
		}

		void setMul(hkTransform const& aTb, hkTransform const& bTc)
		{
			using func_t = decltype(&hkTransform::setMul);
			static REL::Relocation<func_t> func{ Offsets::hkTransform::setMul };
			func(this, aTb, bTc);
		}

	public:
		// members
		hkRotation m_rotation;     // 00
		hkVector4  m_translation;  // 30?
	};
}
