#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpMesh_IConvexOverlap_IConvexShape.h"

namespace RE
{
	class __declspec(novtable) hkgpMesh_IConvexOverlap
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_IConvexOverlap };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_IConvexOverlap };

		using IConvexShape = hkgpMesh_IConvexOverlap_IConvexShape;

		// add
		virtual ~hkgpMesh_IConvexOverlap() = default;                                                                                                     // 00
		virtual float distance(const hkgpMesh_IConvexOverlap_IConvexShape* a_arg1, const hkgpMesh_IConvexOverlap_IConvexShape* a_arg2, bool a_arg3);      // 01
		virtual bool checkOverlap(const hkgpMesh_IConvexOverlap_IConvexShape* a_arg1, const hkgpMesh_IConvexOverlap_IConvexShape* a_arg2, float a_arg3);  // 02
	};
}
