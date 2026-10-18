#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTListItem
	{
	public:
		// members
		NiTListItem<T>* m_pkNext;
		NiTListItem<T>* m_pkPrev;
		T m_element;
	};
}
