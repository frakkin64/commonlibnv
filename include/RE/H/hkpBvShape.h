#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShape.h"
#include "RE/H/hkpSingleShapeContainer.h"

namespace RE
{
	class hkpBvShape :
		public hkpShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBvShape };
		static constexpr auto VTABLE{ VTABLE::hkpBvShape };

		// override (hkpShape)
		virtual ~hkpBvShape() = default;  // 00

		// members
		const hkpShape*         m_boundingVolumeShape;  // 10
		hkpSingleShapeContainer m_childShape;           // 14
	};
}
