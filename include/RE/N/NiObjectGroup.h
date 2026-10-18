#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMemObject.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiObjectGroup :
		public NiMemObject  // 00
	{
	public:
		// members
		std::uint32_t m_uiSize;      // 00?
		void*         m_pvBuffer;    // 04?
		void*         m_pvFree;      // 08?
		std::uint32_t m_uiRefCount;  // 0C?
	};
}
