#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkCachedHashMap.h"
#include "RE/H/hkStringMapOperations.h"

namespace RE
{
	template <class T, class U>
	class hkStringMap
	{
	public:
		enum class _unnamed_tag_ : std::int32_t
		{
			kCompile_time_assert_37 = 0x1,
		};

		// members
		hkCachedHashMap<hkStringMapOperations, U> m_map;
	};
}
