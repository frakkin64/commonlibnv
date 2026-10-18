#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T, class U>
	class __declspec(novtable) NiTArray
	{
	public:
		// add
		virtual ~NiTArray() = default;  // 00

		// members
		T* m_pBase;
		std::uint16_t m_usMaxSize;
		std::uint16_t m_usSize;
		std::uint16_t m_usESize;
		std::uint16_t m_usGrowBy;
	};
}
