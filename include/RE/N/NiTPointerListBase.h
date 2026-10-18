#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DFALL.h"
#include "RE/N/NiTListBase.h"
#include "RE/N/NiTListItem.h"

namespace RE
{
	class BSAnimGroupSequence;

	template <class T, class U>
	class NiTPointerListBase :
		public NiTListBase<DFALL<NiTListItem<BSAnimGroupSequence*>>, BSAnimGroupSequence*>
	{
	public:
	};
}
