#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkVector4.h"

namespace RE
{
	class NiMatrix3;

	class bhkMatrix3
	{
	public:
		void setIdentity()
		{
			using func_t = decltype(&bhkMatrix3::setIdentity);
			static REL::Relocation<func_t> func{ Offsets::bhkMatrix3::setIdentity };
			func(this);
		}

		bhkMatrix3* ctor()
		{
			using func_t = bhkMatrix3*(__thiscall*)(bhkMatrix3*);
			static REL::Relocation<func_t> func{ Offsets::bhkMatrix3::ctor };
			return func(this);
		}

		bhkMatrix3& NI2HKNS(NiMatrix3 const& arSrc)
		{
			using func_t = decltype(&bhkMatrix3::NI2HKNS);
			static REL::Relocation<func_t> func{ Offsets::bhkMatrix3::NI2HKNS };
			return func(this, arSrc);
		}

	public:
		// members
		bhkVector4 Col0;  // 00
		bhkVector4 Col1;  // 10
		bhkVector4 Col2;  // 20
	};
}
