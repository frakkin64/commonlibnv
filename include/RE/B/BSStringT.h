#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class BSStringT
	{
	public:
		// members
		T* pString;
		std::uint16_t sLen;
		std::uint16_t sMaxLen;
	};
}
