#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkpShape.h"
#include "RE/H/hkpSingleShapeContainer.h"

namespace RE
{
	class alignas(16) hkpTransformShape :
		public hkpShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTransformShape };
		static constexpr auto VTABLE{ VTABLE::hkpTransformShape };

		// override (hkpShape)
		virtual ~hkpTransformShape() = default;  // 00

		// members
		hkpSingleShapeContainer m_childShape;      // 10
		std::int32_t            m_childShapeSize;  // 18
		std::uint32_t           pad1C;             // 1C
		hkQuaternion            m_rotation;        // 20
		hkTransform             m_transform;       // 30
	};
}
