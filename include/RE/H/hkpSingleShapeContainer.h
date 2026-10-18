#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeContainer.h"

namespace RE
{
	class hkpShape;

	class hkpSingleShapeContainer :
		public hkpShapeContainer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSingleShapeContainer };
		static constexpr auto VTABLE{ VTABLE::hkpSingleShapeContainer };

		// override (hkpShapeContainer)
		virtual ~hkpSingleShapeContainer() = default;  // 00

		// members
		const hkpShape* m_childShape;  // 04
	};
}
