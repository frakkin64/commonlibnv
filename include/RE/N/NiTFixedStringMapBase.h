#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiTMapItem.h"
#include "RE/T/T.h"

namespace RE
{
	class AntiBloatAllocator;

	template <class T, class U>
	class __declspec(novtable) NiTFixedStringMapBase
	{
	public:
		class AntiBloatAllocator :
			public T  // 00
		{
		public:
			// members
			std::uint32_t m_uiCount;
		};

		virtual ~NiTFixedStringMapBase() = default;  // 00

		// members
		std::uint32_t m_uiHashSize;
		NiTMapItem<NiFixedString, U>** m_ppkHashTable;
		AntiBloatAllocator m_kAllocator;
	};
}
