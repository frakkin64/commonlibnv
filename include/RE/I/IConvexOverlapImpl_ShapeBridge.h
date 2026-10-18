#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkGskShape.h"

namespace RE
{
	class hkgpMesh_IConvexOverlap_IConvexShape;

	class IConvexOverlapImpl_ShapeBridge :
		public hkGskShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IConvexOverlapImpl_ShapeBridge };
		static constexpr auto VTABLE{ VTABLE::IConvexOverlapImpl_ShapeBridge };

		// override (hkGskShape)
		virtual ~IConvexOverlapImpl_ShapeBridge() = default;  // 00

		// members
		const hkgpMesh_IConvexOverlap_IConvexShape* m_shape;  // 04?
	};
}
