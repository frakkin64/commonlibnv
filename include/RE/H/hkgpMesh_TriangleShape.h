#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpMesh_IConvexOverlap_IConvexShape.h"

namespace RE
{
	class hkgpMeshBase_Triangle;

	class hkgpMesh_TriangleShape :
		public hkgpMesh_IConvexOverlap_IConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_TriangleShape };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_TriangleShape };

		// override (hkgpMesh_IConvexOverlap_IConvexShape)
		virtual ~hkgpMesh_TriangleShape() = default;  // 00

		// members
		hkgpMeshBase_Triangle* m_triangle;  // 04
	};
}
