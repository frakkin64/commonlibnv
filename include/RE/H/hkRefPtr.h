#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class hkRefPtr
	{
	public:
		// members
		T* m_pntr;
	};
}
