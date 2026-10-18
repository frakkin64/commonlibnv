#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTArray.h"
#include "RE/N/NiTMallocInterface.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTPrimitiveArray :
		public NiTArray<T, NiTMallocInterface<T>>  // 00
	{
	public:
		// override (NiTArray<T, NiTMallocInterface<T>>)
		virtual ~NiTPrimitiveArray() = default;  // 00
	};
}
