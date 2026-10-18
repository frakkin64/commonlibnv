#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTArray.h"
#include "RE/N/NiTNewInterface.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTObjectArray :
		public NiTArray<T, NiTNewInterface<T>>  // 00
	{
	public:
		// override (NiTArray<T, NiTNewInterface<T>>)
		virtual ~NiTObjectArray() = default;  // 00
	};
}
