#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class BSGameSound;

	class AudioLoadTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AudioLoadTask };
		static constexpr auto VTABLE{ VTABLE::AudioLoadTask };

		// members
		BSGameSound*  pSound;  // 30
		std::uint32_t pad34;   // 34
	};
}
