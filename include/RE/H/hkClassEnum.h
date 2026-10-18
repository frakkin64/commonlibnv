#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFlags.h"

namespace RE
{
	class hkCustomAttributes;

	class hkClassEnum
	{
	public:
		class Item;

		enum class FlagValues : std::int32_t
		{
			kFLAGS_NONE = 0x0,
			kALIGN_8 = 0x80,
			kALIGN_16 = 0x100,
			kNOT_OWNED = 0x200,
			kSERIALIZE_IGNORED = 0x400,
		};

		class Item
		{
		public:
			// members
			std::int32_t m_value;  // 00?
			const char*  m_name;   // 04?
		};

		// members
		const char*                                     m_name;        // 00?
		const hkClassEnum::Item*                        m_items;       // 04?
		std::int32_t                                    m_numItems;    // 08?
		hkCustomAttributes*                             m_attributes;  // 0C?
		hkFlags<hkClassEnum::FlagValues, std::uint32_t> m_flags;       // 10?
	};
}
