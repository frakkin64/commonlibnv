#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class hkQueue
	{
	public:
		// members
		T* m_data;
		std::int32_t m_capacity;
		std::int32_t m_head;
		std::int32_t m_tail;
		std::int32_t m_elementsInUse;
	};
}
