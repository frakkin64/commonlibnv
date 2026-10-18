#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class alignas(16) hkpSerializedDisplayMarker :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSerializedDisplayMarker };
		static constexpr auto VTABLE{ VTABLE::hkpSerializedDisplayMarker };

		// override (hkReferencedObject)
		virtual ~hkpSerializedDisplayMarker() = default;  // 00

		// members
		std::uint8_t pad08[0x8];   // 08
		hkTransform  m_transform;  // 10?
	};
}
