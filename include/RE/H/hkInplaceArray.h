#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N, class U>
	class hkInplaceArray :
		public hkArray<T, U>  // 00
	{
	public:
		// members
		T m_storage[N];
	};
}
