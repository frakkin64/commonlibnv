#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T, class U, class V>
	class hkgpAbstractMeshDefinitions_List
	{
	public:
		class Item :
			public U  // 00
		{
		public:
			// members
			T* m_next;
			T* m_prev;
		};

		// members
		V m_allocator;
		T* m_used;
		std::int32_t m_numUsed;
		std::uint32_t m_uid;
	};
}
