#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTAbstractPoolAllocator.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTPointerAllocator :
		public NiTAbstractPoolAllocator<T>  // 00
	{
	public:
	};
}
