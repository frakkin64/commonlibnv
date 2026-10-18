#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpMesh_IConvexOverlap_IConvexShape.h"

namespace RE
{
	class hkgpMeshBase_Triangle;

	template <std::size_t N>
	class hkgpMesh_PrismShape :
		public hkgpMesh_IConvexOverlap_IConvexShape  // 00
	{
	public:
		// override (hkgpMesh_IConvexOverlap_IConvexShape)
		virtual ~hkgpMesh_PrismShape() = default;  // 00

		// members
		hkgpMeshBase_Triangle* m_triangle;
	};
}
