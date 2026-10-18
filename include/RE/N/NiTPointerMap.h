#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMapBase.h"
#include "RE/N/NiTPointerAllocator.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class NiTPointerMap :
		public NiTMapBase<NiTPointerAllocator<std::uint32_t>, T, U>  // 00
	{
	public:
	};
}
