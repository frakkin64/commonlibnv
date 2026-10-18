#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AngleSinCos
	{
	public:
		AngleSinCos& operator_call(AngleSinCos const& aSinCos)
		{
			using func_t = AngleSinCos& (AngleSinCos::*)(AngleSinCos const&);
			static REL::Relocation<func_t> func{ Offsets::AngleSinCos::operator_call };
			return func(this, aSinCos);
		}

		AngleSinCos* ctor(float afAngle)
		{
			using func_t = AngleSinCos*(__thiscall*)(AngleSinCos*, float);
			static REL::Relocation<func_t> func{ Offsets::AngleSinCos::ctor };
			return func(this, afAngle);
		}

		bool operator_call(AngleSinCos const& aAngle) const
		{
			using func_t = bool (AngleSinCos::*)(AngleSinCos const&) const;
			static REL::Relocation<func_t> func{ Offsets::AngleSinCos::operator_call_1 };
			return func(this, aAngle);
		}

	public:
		// members
		float fCos;  // 00
		float fSin;  // 04
	};
}
