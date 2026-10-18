#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTStringMap.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSTCaseInsensitiveStringMap :
		public NiTStringMap<T>  // 00
	{
	public:
		// override (NiTStringMap<T>)
		virtual ~BSTCaseInsensitiveStringMap() = default;  // 00
	};
}
