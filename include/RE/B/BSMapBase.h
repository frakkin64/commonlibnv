#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMapItem.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class __declspec(novtable) BSMapBase
	{
	public:
		// add
		virtual ~BSMapBase() = default;                                // 00
		virtual std::uint32_t KeyToHashIndex(T a_arg1);                // 01
		virtual U IsKeysEqual(T a_arg1, T a_arg2);                     // 02
		virtual void SetValue(BSMapItem<T, U>* pkItem, T key, U val);  // 03
		virtual void ClearValue(BSMapItem<T, U>* __formal);            // 04
		virtual BSMapItem<T, U>* NewItem();                            // 05
		virtual void DeleteItem(BSMapItem<T, U>* a_arg1);              // 06

		// members
		std::uint32_t m_uiHashSize;
		BSMapItem<T, U>** m_ppkHashTable;
		std::uint32_t m_uiCount;
	};
}
