#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSThread.h"

namespace RE
{
	class BSAudioManagerThread :
		public BSThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAudioManagerThread };
		static constexpr auto VTABLE{ VTABLE::BSAudioManagerThread };

		// members
		// not placed: m_SuspendSema, m_SuspendedSema, m_bSuspended
	};
}
