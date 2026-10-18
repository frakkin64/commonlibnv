#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStringMap.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class hkStorageStringMap :
		public hkStringMap<T, U>  // 00
	{
	public:
	};
}
