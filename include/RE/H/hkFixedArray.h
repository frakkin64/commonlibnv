#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class hkFixedArray
	{
	public:
		// members
		hkPadSpu<T*> m_data;
		T m_debugSize;
	};
}
