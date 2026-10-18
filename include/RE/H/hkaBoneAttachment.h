#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMatrix4.h"
#include "RE/H/hkRefVariant.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class alignas(16) hkaBoneAttachment :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaBoneAttachment };
		static constexpr auto VTABLE{ VTABLE::hkaBoneAttachment };

		// override (hkReferencedObject)
		virtual ~hkaBoneAttachment() = default;  // 00

		// members
		hkStringPtr   m_originalSkeletonName;  // 08
		std::uint32_t pad0C;                   // 0C
		hkMatrix4     m_boneFromAttachment;    // 10
		hkRefVariant  m_attachment;            // 50
		hkStringPtr   m_name;                  // 54
		std::int16_t  m_boneIndex;             // 58?
		std::uint8_t  pad5A[0x6];              // 5A
	};
}
