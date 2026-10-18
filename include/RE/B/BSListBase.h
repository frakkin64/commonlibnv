#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSListItem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class __declspec(novtable) BSListBase
	{
	public:
		// add
		virtual ~BSListBase() = default;                 // 00
		virtual BSListItem<T>* NewItem();                // 01
		virtual void DeleteItem(BSListItem<T>* a_arg1);  // 02

		// members
		BSListItem<T>* m_pkHead;
		BSListItem<T>* m_pkTail;
		std::uint32_t m_uiCount;
	};
}
