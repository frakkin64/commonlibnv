#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPointerAllocator.h"
#include "RE/N/NiTPointerListBase.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTPointerList :
		public NiTPointerListBase<NiTPointerAllocator<std::uint32_t>, T>  // 00
	{
	public:
	};
}
