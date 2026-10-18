#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DFALL.h"
#include "RE/N/NiTMapBase.h"
#include "RE/N/NiTMapItem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class NiTMap :
		public NiTMapBase<DFALL<NiTMapItem<T, U>>, T, U>  // 00
	{
	public:
		// override (NiTMapBase<DFALL<NiTMapItem<T, U>>, T, U>)
		virtual ~NiTMap() = default;                        // 00
		virtual NiTMapItem<T, U>* NewItem();                // 05
		virtual void DeleteItem(NiTMapItem<T, U>* pkItem);  // 06
	};
}
