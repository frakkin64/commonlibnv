#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QueuedReference.h"

namespace RE
{
	class QueuedTree :
		public QueuedReference  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedTree };
		static constexpr auto VTABLE{ VTABLE::QueuedTree };

		// override (QueuedReference)
		virtual ~QueuedTree() = default;       // 00
		virtual void QueueModels() override;   // 0B
		virtual void UseDistant3D() override;  // 0C
	};
	static_assert(sizeof(QueuedTree) == 0x40);
}
