#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T, class U>
	class __declspec(novtable) NiTLargeArray
	{
	public:
		virtual ~NiTLargeArray() = default;  // 00

		// members
		T* m_pBase;
		std::uint32_t m_uiMaxSize;
		std::uint32_t m_uiSize;
		std::uint32_t m_uiESize;
		std::uint32_t m_uiGrowBy;
	};
}
