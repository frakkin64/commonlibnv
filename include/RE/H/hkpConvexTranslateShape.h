#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConvexTransformShapeBase.h"

namespace RE
{
	class alignas(16) hkpConvexTranslateShape :
		public hkpConvexTransformShapeBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexTranslateShape };
		static constexpr auto VTABLE{ VTABLE::hkpConvexTranslateShape };

		// override (hkpConvexTransformShapeBase)
		virtual ~hkpConvexTranslateShape() = default;  // 00

		// members
		hkVector4 m_translation;  // 20?
	};
}
