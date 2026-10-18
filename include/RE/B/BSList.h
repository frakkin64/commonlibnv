#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSPointerListBase.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSList :
		public BSPointerListBase<T>  // 00
	{
	public:
		// override (BSPointerListBase<T>)
		virtual ~BSList() = default;  // 00
	};
}
