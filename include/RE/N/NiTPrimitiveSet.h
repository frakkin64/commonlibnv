#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMallocInterface.h"
#include "RE/N/NiTSet.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTPrimitiveSet :
		public NiTSet<T, NiTMallocInterface<T>>  // 00
	{
	public:
	};
}
