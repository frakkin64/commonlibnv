#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANGLE_DIRECTION.h"
#include "RE/A/AngleSinCos.h"

namespace RE
{
	class AngleSinCosArc
	{
	public:
		AngleSinCosArc* ctor(AngleSinCos const& aStart, AngleSinCos const& aEnd, ANGLE_DIRECTION aeDir)
		{
			using func_t = AngleSinCosArc*(__thiscall*)(AngleSinCosArc*, AngleSinCos const&, AngleSinCos const&, ANGLE_DIRECTION);
			static REL::Relocation<func_t> func{ Offsets::AngleSinCosArc::ctor };
			return func(this, aStart, aEnd, aeDir);
		}

		AngleSinCosArc* ctor(AngleSinCosArc const& aRange)
		{
			using func_t = AngleSinCosArc*(__thiscall*)(AngleSinCosArc*, AngleSinCosArc const&);
			static REL::Relocation<func_t> func{ Offsets::AngleSinCosArc::ctor_1 };
			return func(this, aRange);
		}

		bool WithinRange(AngleSinCos const& aAngle) const
		{
			using func_t = decltype(&AngleSinCosArc::WithinRange);
			static REL::Relocation<func_t> func{ Offsets::AngleSinCosArc::WithinRange };
			return func(this, aAngle);
		}

		float GetLength(float afRadius) const
		{
			using func_t = decltype(&AngleSinCosArc::GetLength);
			static REL::Relocation<func_t> func{ Offsets::AngleSinCosArc::GetLength };
			return func(this, afRadius);
		}

	public:
		// members
		AngleSinCos     Start;  // 00
		AngleSinCos     End;    // 08
		ANGLE_DIRECTION Dir;    // 10
	};
}
