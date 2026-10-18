#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTLargeArray.h"
#include "RE/N/NiTMallocInterface.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTLargePrimitiveArray :
		public NiTLargeArray<T, NiTMallocInterface<T>>  // 00
	{
	public:
	};
}
