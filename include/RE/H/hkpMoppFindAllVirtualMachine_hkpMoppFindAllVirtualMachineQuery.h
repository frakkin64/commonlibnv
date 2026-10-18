#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery
	{
	public:
		// members
		std::uint32_t pad00;              // 00
		std::uint32_t m_primitiveOffset;  // 04
		std::uint32_t m_properties[1];    // 08?
	};
}
