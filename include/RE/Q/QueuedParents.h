#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class QueuedFile;

	class QueuedParents :
		public BSSimpleArray<NiPointer<QueuedFile>, 1024>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedParents };
		static constexpr auto VTABLE{ VTABLE::QueuedParents };

	};
}
