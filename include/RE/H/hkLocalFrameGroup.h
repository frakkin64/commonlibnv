#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkLocalFrameGroup :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLocalFrameGroup };
		static constexpr auto VTABLE{ VTABLE::hkLocalFrameGroup };

		// override (hkReferencedObject)
		virtual ~hkLocalFrameGroup() = default;  // 00

		// members
		hkStringPtr m_name;  // 08
	};
}
