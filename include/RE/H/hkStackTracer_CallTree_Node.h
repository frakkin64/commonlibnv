#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkStackTracer_CallTree_Node
	{
	public:
		// members
		std::uint32_t m_value;       // 00?
		std::int32_t  m_parent;      // 04?
		std::int32_t  m_firstChild;  // 08?
		std::int32_t  m_next;        // 0C?
	};
}
