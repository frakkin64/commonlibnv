#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTLargeArray.h"
#include "RE/N/NiTNewInterface.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTLargeObjectArray :
		public NiTLargeArray<T, NiTNewInterface<T>>  // 00
	{
	public:
	};
}
