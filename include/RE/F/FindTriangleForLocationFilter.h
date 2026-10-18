#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMesh;
	class NiPoint3;

	class __declspec(novtable) FindTriangleForLocationFilter
	{
	public:
		static constexpr auto RTTI{ RTTI::FindTriangleForLocationFilter };
		static constexpr auto VTABLE{ VTABLE::FindTriangleForLocationFilter };

		// add
		virtual bool IsValidTri(const NiPoint3* a_arg1, const NavMesh* a_arg2, std::uint16_t a_arg3, const NiPoint3* a_arg4);  // 00

		FindTriangleForLocationFilter* ctor()
		{
			using func_t = FindTriangleForLocationFilter*(__thiscall*)(FindTriangleForLocationFilter*);
			static REL::Relocation<func_t> func{ Offsets::FindTriangleForLocationFilter::ctor };
			return func(this);
		}
	};
}
