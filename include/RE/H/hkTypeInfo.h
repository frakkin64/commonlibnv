#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkTypeInfo
	{
	public:
		// members
		const char*      m_typeName;                     // 00?
		void*            m_finishLoadedObjectFunction;   // 04?
		void*            m_cleanupLoadedObjectFunction;  // 08?
		const void*      m_vtable;                       // 0C?
		const type_info* m_cppType;                      // 10?
		std::uint32_t    m_size;                         // 14?
	};
}
