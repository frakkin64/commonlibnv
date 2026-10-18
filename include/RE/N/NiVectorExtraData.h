#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiVectorExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiVectorExtraData };
		static constexpr auto VTABLE{ VTABLE::NiVectorExtraData };

		// members
		float m_afVector[4];  // 0C
	};
}
