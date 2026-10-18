#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkgpMesh_IConvexOverlap_IConvexShape.h"

namespace RE
{
	class alignas(16) hkgpMesh_LineShape :
		public hkgpMesh_IConvexOverlap_IConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_LineShape };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_LineShape };

		// override (hkgpMesh_IConvexOverlap_IConvexShape)
		virtual ~hkgpMesh_LineShape() = default;  // 00

		// members
		std::uint8_t pad04[0xC];  // 04
		hkVector4    m_a;         // 10?
		hkVector4    m_b;         // 20?
	};
}
