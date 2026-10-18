#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class NiTPoolContainer
	{
	public:
		// members
		T* m_pkObjectArray;
		std::uint32_t m_uiSize;
		NiTPoolContainer<T, U>* m_pkNext;
	};
}
