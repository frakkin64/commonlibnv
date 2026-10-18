#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CTreeFileAccess
	{
	public:
		bool ParseBool()
		{
			using func_t = decltype(&CTreeFileAccess::ParseBool);
			static REL::Relocation<func_t> func{ Offsets::CTreeFileAccess::ParseBool };
			return func(this);
		}

	public:
		// members
		std::int32_t              m_nIndex;   // 00
		stl::vector<std::uint8_t> m_vMemory;  // 04
	};
}
