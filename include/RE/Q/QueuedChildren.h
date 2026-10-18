#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class QueuedFile;

	class QueuedChildren :
		public BSSimpleArray<NiPointer<QueuedFile>, 1024>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedChildren };
		static constexpr auto VTABLE{ VTABLE::QueuedChildren };

		// members
		volatile std::uint32_t iNumChildrenFinished;  // 10
	};
	static_assert(sizeof(QueuedChildren) == 0x14);
}
