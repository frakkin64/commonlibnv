#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiFloatKey;

	class NiUVData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiUVData };
		static constexpr auto VTABLE{ VTABLE::NiUVData };

		// members
		std::uint32_t          m_uiNumUOffsetKeys;  // 08
		NiFloatKey*            m_pkUOffsetKeys;     // 0C
		NiAnimationKey_KeyType m_eUOffsetType;      // 10
		std::uint32_t          m_uiNumVOffsetKeys;  // 14
		NiFloatKey*            m_pkVOffsetKeys;     // 18
		NiAnimationKey_KeyType m_eVOffsetType;      // 1C
		std::uint32_t          m_uiNumUTilingKeys;  // 20
		NiFloatKey*            m_pkUTilingKeys;     // 24
		NiAnimationKey_KeyType m_eUTilingType;      // 28
		std::uint32_t          m_uiNumVTilingKeys;  // 2C
		NiFloatKey*            m_pkVTilingKeys;     // 30
		NiAnimationKey_KeyType m_eVTilingType;      // 34
		float                  m_fLastUOffset;      // 38
		float                  m_fLastVOffset;      // 3C
		float                  m_fLastUTiling;      // 40
		float                  m_fLastVTiling;      // 44
		std::uint8_t           m_ucUOffsetSize;     // 48
		std::uint8_t           m_ucVOffsetSize;     // 49
		std::uint8_t           m_ucUTilingSize;     // 4A
		std::uint8_t           m_ucVTilingSize;     // 4B
	};
}
