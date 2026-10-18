#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkTransform.h"
#include "RE/H/hkpConvexTransformShapeBase.h"

namespace RE
{
	class alignas(16) hkpConvexTransformShape :
		public hkpConvexTransformShapeBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexTransformShape };
		static constexpr auto VTABLE{ VTABLE::hkpConvexTransformShape };

		// override (hkpConvexTransformShapeBase)
		virtual ~hkpConvexTransformShape() = default;  // 00

		// members
		hkTransform m_transform;  // 20
	};
}
