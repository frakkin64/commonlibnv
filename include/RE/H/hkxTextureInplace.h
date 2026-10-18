#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxTextureInplace :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxTextureInplace };
		static constexpr auto VTABLE{ VTABLE::hkxTextureInplace };

		// override (hkReferencedObject)
		virtual ~hkxTextureInplace() = default;  // 00

		// members
		char                                            m_fileType[4];       // 08?
		hkArray<std::uint8_t, hkContainerHeapAllocator> m_data;              // 0C?
		hkStringPtr                                     m_name;              // 18?
		hkStringPtr                                     m_originalFilename;  // 1C?
	};
}
