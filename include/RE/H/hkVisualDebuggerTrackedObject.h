#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkClass;

	class hkVisualDebuggerTrackedObject
	{
	public:
		// members
		void*          m_ptr;    // 00?
		const hkClass* m_class;  // 04?
		std::uint32_t  m_tag;    // 08?
	};
}
