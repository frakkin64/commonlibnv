#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DFALL.h"
#include "RE/N/NiTListItem.h"
#include "RE/N/NiTPointerListBase.h"

namespace RE
{
	class BSAnimGroupSequence;

	template <class T>
	class NiTList :
		public NiTPointerListBase<DFALL<NiTListItem<BSAnimGroupSequence*>>, BSAnimGroupSequence*>
	{
	public:
	};
}
