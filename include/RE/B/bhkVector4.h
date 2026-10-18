#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiPoint3;
	class hkVector4;

	class bhkVector4
	{
	public:
		bhkVector4& operator_call(hkVector4 const& arSrc)
		{
			using func_t = decltype(&bhkVector4::operator_call);
			static REL::Relocation<func_t> func{ Offsets::bhkVector4::operator_call };
			return func(this, arSrc);
		}

		bhkVector4& NI2HK(NiPoint3 const& arSrc)
		{
			using func_t = decltype(&bhkVector4::NI2HK);
			static REL::Relocation<func_t> func{ Offsets::bhkVector4::NI2HK };
			return func(this, arSrc);
		}

		bhkVector4* ctor()
		{
			using func_t = bhkVector4*(__thiscall*)(bhkVector4*);
			static REL::Relocation<func_t> func{ Offsets::bhkVector4::ctor };
			return func(this);
		}

		void setZero4()
		{
			using func_t = decltype(&bhkVector4::setZero4);
			static REL::Relocation<func_t> func{ Offsets::bhkVector4::setZero4 };
			func(this);
		}

		void set(float afX, float afY, float afZ, float afW)
		{
			using func_t = decltype(&bhkVector4::set);
			static REL::Relocation<func_t> func{ Offsets::bhkVector4::set };
			func(this, afX, afY, afZ, afW);
		}

	public:
		// members
		float fX;  // 00
		float fY;  // 04
		float fZ;  // 08
		float fW;  // 0C
	};
}
