#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkAabb;
	class hkVector4;

	class __declspec(novtable) hkgpMesh_IConvexOverlap_IConvexShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_IConvexOverlap_IConvexShape };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_IConvexOverlap_IConvexShape };

		// add
		virtual ~hkgpMesh_IConvexOverlap_IConvexShape() = default;                     // 00
		virtual std::int32_t getMaxIndex();                                            // 01
		virtual void getSupportingVertex(const hkVector4* a_arg1, hkVector4* a_arg2);  // 02
		virtual hkAabb* getBoundingBox(hkAabb* a_arg1);                                // 03
	};
	static_assert(sizeof(hkgpMesh_IConvexOverlap_IConvexShape) == 0x4);
}
