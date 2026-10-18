#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiRefObject.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N>
	class BSSimpleArrayRefCounted :
		public BSSimpleArray<T, 1024>,  // 00
		public NiRefObject  // 10
	{
	public:
	};
}
