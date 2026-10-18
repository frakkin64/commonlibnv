#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpMesh_IConvexOverlap.h"
#include "RE/I/IConvexOverlapImpl_ShapeBridge.h"

namespace RE
{
	class IConvexOverlapImpl :
		public hkgpMesh_IConvexOverlap  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IConvexOverlapImpl };
		static constexpr auto VTABLE{ VTABLE::IConvexOverlapImpl };

		using ShapeBridge = IConvexOverlapImpl_ShapeBridge;

		// override (hkgpMesh_IConvexOverlap)
		virtual ~IConvexOverlapImpl() = default;  // 00
	};
}
