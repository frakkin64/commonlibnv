#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiInterpolator.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiQuatTransform.h"

namespace RE
{
	class NiAVObject;

	class NiLookAtInterpolator :
		public NiInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLookAtInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiLookAtInterpolator };

		// members
		std::uint16_t             m_uFlags;               // 0C
		std::uint16_t             pad0E;                  // 0E
		NiAVObject*               m_pkLookAt;             // 10
		NiFixedString             m_kLookAtName;          // 14
		NiQuatTransform           m_kTransformValue;      // 18
		NiPointer<NiInterpolator> m_aspInterpolators[3];  // 38?
	};
}
