#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSSimpleList
	{
	public:
		// members
		T m_item;
		BSSimpleList<T>* m_pkNext;
	};
}
