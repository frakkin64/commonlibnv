#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class PathingSplineKey
	{
	public:
		PathingSplineKey& operator_call(PathingSplineKey const& aKey)
		{
			using func_t = decltype(&PathingSplineKey::operator_call);
			static REL::Relocation<func_t> func{ Offsets::PathingSplineKey::operator_call };
			return func(this, aKey);
		}

	public:
		// members
		NiPoint3 Location;  // 00
		NiPoint3 Tangent;   // 0C
	};
}
