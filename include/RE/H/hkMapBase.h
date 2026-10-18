#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	class Pair;

	template <class T, class U, class V>
	class hkMapBase
	{
	public:
		enum class _unnamed_tag_ : std::int32_t
		{
			kCAPACITY_MASK = 0x3FFFFFFF,
			kFLAG_MASK = -1073741824,
			kDONT_DEALLOCATE_FLAG = -2147483648,
			kFORCE_SIGNED = -1,
		};

		class Pair
		{
		public:
			// members
			T key;
			T val;
		};

		class MustEndWithSemiColon
		{
		public:
		};

		// members
		Pair* m_elem;
		std::int32_t m_numElems;
		std::int32_t m_hashMod;
	};
}
