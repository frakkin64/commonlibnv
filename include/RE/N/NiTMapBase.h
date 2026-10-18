#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMapItem.h"
#include "RE/T/T.h"

namespace RE
{
	class AntiBloatAllocator;

	template <class T, class U, class V>
	class __declspec(novtable) NiTMapBase
	{
	public:
		class AntiBloatAllocator :
			public T  // 00
		{
		public:
			// members
			std::uint32_t m_uiCount;
		};

		// add
		virtual ~NiTMapBase() = default;                                // 00
		virtual std::uint32_t KeyToHashIndex(U a_arg1);                 // 01
		virtual bool IsKeysEqual(U a_arg1, U a_arg2);                   // 02
		virtual void SetValue(NiTMapItem<U, V>* pkItem, U key, V val);  // 03
		virtual void ClearValue(NiTMapItem<U, V>* __formal);            // 04
		virtual NiTMapItem<U, V>* NewItem();                            // 05
		virtual void DeleteItem(NiTMapItem<U, V>* a_arg1);              // 06

		// members
		std::uint32_t m_uiHashSize;
		NiTMapItem<U, V>** m_ppkHashTable;
		AntiBloatAllocator m_kAllocator;
	};
}
