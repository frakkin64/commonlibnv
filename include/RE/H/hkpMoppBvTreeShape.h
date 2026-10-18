#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMoppBvTreeShapeBase.h"
#include "RE/H/hkpSingleShapeContainer.h"

namespace RE
{
	class hkpMoppCode;
	class hkpShapeCollection;

	class alignas(16) hkpMoppBvTreeShape :
		public hkMoppBvTreeShapeBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppBvTreeShape };
		static constexpr auto VTABLE{ VTABLE::hkpMoppBvTreeShape };

		// override (hkMoppBvTreeShapeBase)
		virtual ~hkpMoppBvTreeShape() = default;  // 00

		hkpMoppBvTreeShape* ctor(hkpShapeCollection const* collection, hkpMoppCode const* code)
		{
			using func_t = hkpMoppBvTreeShape*(__thiscall*)(hkpMoppBvTreeShape*, hkpShapeCollection const*, hkpMoppCode const*);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppBvTreeShape::ctor };
			return func(this, collection, code);
		}

	public:
		// members
		hkpSingleShapeContainer m_child;      // 30
		std::int32_t            m_childSize;  // 38?
		std::uint32_t           pad3C;        // 3C
	};
}
