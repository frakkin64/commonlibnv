#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DFALL.h"
#include "RE/N/NiFixedString.h"
#include "RE/N/NiTFixedStringMapBase.h"
#include "RE/N/NiTMapItem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiTFixedStringMap :
		public NiTFixedStringMapBase<DFALL<NiTMapItem<NiFixedString, T>>, T>  // 00
	{
	public:
	};
}
