#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMapBase.h"
#include "RE/B/BSMapItem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class BSMap :
		public BSMapBase<T, U>  // 00
	{
	public:
		// override (BSMapBase<T, U>)
		virtual ~BSMap() = default;                        // 00
		virtual BSMapItem<T, U>* NewItem();                // 05
		virtual void DeleteItem(BSMapItem<T, U>* pkItem);  // 06
	};
}
