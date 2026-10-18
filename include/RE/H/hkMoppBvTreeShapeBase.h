#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpBvTreeShape.h"

namespace RE
{
	class hkpMoppCode;

	class alignas(16) hkMoppBvTreeShapeBase :
		public hkpBvTreeShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMoppBvTreeShapeBase };
		static constexpr auto VTABLE{ VTABLE::hkMoppBvTreeShapeBase };

		// override (hkpBvTreeShape)
		virtual ~hkMoppBvTreeShapeBase() = default;  // 00

		// members
		const hkpMoppCode*  m_code;          // 14?
		const std::uint8_t* m_moppData;      // 18?
		std::uint32_t       m_moppDataSize;  // 1C?
		hkVector4           m_codeInfoCopy;  // 20?
	};
}
