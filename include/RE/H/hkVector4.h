#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkRotation;
	class hkSimdReal;
	class hkTransform;

	class hkVector4
	{
	public:
		void setAdd4(hkVector4 const& a_x, hkVector4 const& a_y)
		{
			using func_t = decltype(&hkVector4::setAdd4);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::setAdd4 };
			func(this, a_x, a_y);
		}

		void setSub4(hkVector4 const& a_x, hkVector4 const& a_y)
		{
			using func_t = decltype(&hkVector4::setSub4);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::setSub4 };
			func(this, a_x, a_y);
		}

		static hkVector4 const& getZero()
		{
			using func_t = decltype(&hkVector4::getZero);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::getZero };
			return func();
		}

		hkVector4* ctor(hkVector4 const& v)
		{
			using func_t = hkVector4*(__thiscall*)(hkVector4*, hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::ctor };
			return func(this, v);
		}

		void operator_call(hkVector4 const& v)
		{
			using func_t = decltype(&hkVector4::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::operator_call };
			func(this, v);
		}

		void set(float a_x, float a_y, float a_z, float a_w)
		{
			using func_t = decltype(&hkVector4::set);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::set };
			func(this, a_x, a_y, a_z, a_w);
		}

		void setZero4()
		{
			using func_t = decltype(&hkVector4::setZero4);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::setZero4 };
			func(this);
		}

		hkVector4* ctor(float a_x, float a_y, float a_z, float a_w)
		{
			using func_t = hkVector4*(__thiscall*)(hkVector4*, float, float, float, float);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::ctor_1 };
			return func(this, a_x, a_y, a_z, a_w);
		}

		void add4(hkVector4 const& a)
		{
			using func_t = decltype(&hkVector4::add4);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::add4 };
			func(this, a);
		}

		void mul4(hkSimdReal const& s)
		{
			using func_t = decltype(&hkVector4::mul4);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::mul4 };
			func(this, s);
		}

		void normalize3()
		{
			using func_t = decltype(&hkVector4::normalize3);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::normalize3 };
			func(this);
		}

		void setTransformedPos(hkTransform const& t, hkVector4 const& v)
		{
			using func_t = decltype(&hkVector4::setTransformedPos);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::setTransformedPos };
			func(this, t, v);
		}

		void setTransformedInversePos(hkTransform const& t, hkVector4 const& v)
		{
			using func_t = decltype(&hkVector4::setTransformedInversePos);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::setTransformedInversePos };
			func(this, t, v);
		}

		void setRotatedDir(hkRotation const& t, hkVector4 const& v)
		{
			using func_t = decltype(&hkVector4::setRotatedDir);
			static REL::Relocation<func_t> func{ Offsets::hkVector4::setRotatedDir };
			func(this, t, v);
		}

	public:
		// members
		float x;  // 00
		float y;  // 04
		float z;  // 08
		float w;  // 0C
	};
}
