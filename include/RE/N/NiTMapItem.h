#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class NiTMapItem
	{
	public:
		// members
		NiTMapItem<T, U>* m_pkNext;
		T m_key;
		U m_val;
	};
}
