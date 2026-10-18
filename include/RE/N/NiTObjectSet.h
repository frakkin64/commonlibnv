#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTNewInterface.h"
#include "RE/N/NiTSet.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTObjectSet :
		public NiTSet<T, NiTNewInterface<T>>  // 00
	{
	public:
	};
}
