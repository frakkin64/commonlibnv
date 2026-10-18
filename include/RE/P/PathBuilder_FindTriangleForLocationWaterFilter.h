#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FindTriangleForLocationFilter.h"

namespace RE
{
	class NavMesh;
	class NiPoint3;

	class PathBuilder_FindTriangleForLocationWaterFilter :
		public FindTriangleForLocationFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathBuilder_FindTriangleForLocationWaterFilter };
		static constexpr auto VTABLE{ VTABLE::PathBuilder_FindTriangleForLocationWaterFilter };

		// override (FindTriangleForLocationFilter)
		virtual bool IsValidTri(const NiPoint3* a_arg1, const NavMesh* a_arg2, std::uint16_t a_arg3, const NiPoint3* a_arg4) override;  // 00

		PathBuilder_FindTriangleForLocationWaterFilter* ctor()
		{
			using func_t = PathBuilder_FindTriangleForLocationWaterFilter*(__thiscall*)(PathBuilder_FindTriangleForLocationWaterFilter*);
			static REL::Relocation<func_t> func{ Offsets::PathBuilder_FindTriangleForLocationWaterFilter::ctor };
			return func(this);
		}
	};
}
