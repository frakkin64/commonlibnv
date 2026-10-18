#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DFALL.h"
#include "RE/N/NiTListItem.h"

namespace RE
{
	class AntiBloatAllocator;
	class BSAnimGroupSequence;

	template <class T, class U>
	class NiTListBase
	{
	public:
		class AntiBloatAllocator :
			public DFALL<NiTListItem<BSAnimGroupSequence*>>
		{
		public:
			// members
			std::uint32_t m_uiCount;
		};

		// members
		NiTListItem<U>* m_pkHead;
		NiTListItem<U>* m_pkTail;
		AntiBloatAllocator m_kAllocator;
	};
}
