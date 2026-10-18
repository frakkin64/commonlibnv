#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSListBase.h"
#include "RE/B/BSListItem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSPointerListBase :
		public BSListBase<T>  // 00
	{
	public:
		// override (BSListBase<T>)
		virtual ~BSPointerListBase() = default;          // 00
		virtual BSListItem<T>* NewItem();                // 01
		virtual void DeleteItem(BSListItem<T>* pkItem);  // 02
	};
}
