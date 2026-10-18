#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N>
	class NiBSplineBasis
	{
	public:
		// members
		std::int32_t m_iQuantity;
		T m_afValue[4];
		T m_fLastTime;
		std::int32_t m_iMin;
		std::int32_t m_iMax;
	};
}
