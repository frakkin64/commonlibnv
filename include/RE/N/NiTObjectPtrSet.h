#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTNewInterface.h"
#include "RE/N/NiTPtrSet.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTObjectPtrSet :
		public NiTPtrSet<T, NiTNewInterface<T>>  // 00
	{
	public:
	};
}
