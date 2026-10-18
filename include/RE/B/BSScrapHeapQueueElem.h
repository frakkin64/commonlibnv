#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSScrapHeapQueueElem
	{
	public:
		// members
		BSScrapHeapQueueElem<T>* pNext;
		T Elem;
	};
}
