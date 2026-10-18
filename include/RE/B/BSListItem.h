#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSListItem
	{
	public:
		// members
		BSListItem<T>* m_pkNext;
		BSListItem<T>* m_pkPrev;
		T m_element;
	};
}
