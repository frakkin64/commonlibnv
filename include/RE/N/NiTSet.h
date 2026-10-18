#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T, class U>
	class NiTSet
	{
	public:
		// members
		T* m_pBase;
		std::uint32_t m_uiAlloced;
		std::uint32_t m_uiUsed;
	};
}
