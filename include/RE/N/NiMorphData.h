#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiInterpolator;
	class NiPoint3;

	class NiMorphData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMorphData };
		static constexpr auto VTABLE{ VTABLE::NiMorphData };

		class MorphTarget;

		class MorphTarget
		{
		public:
			// members
			NiPoint3*                 m_aTargetVerts;          // 00?
			NiFixedString             m_kName;                 // 04?
			float                     m_fLegacyWeight;         // 08?
			NiPointer<NiInterpolator> m_spLegacyInterpolator;  // 0C?
		};

		// members
		std::uint32_t             m_uiNumTargets;         // 08
		std::uint32_t             m_uiNumVertsPerTarget;  // 0C
		NiMorphData::MorphTarget* m_aMorphTargets;        // 10
		bool                      m_bRelativeTargets;     // 14
		std::uint8_t              pad15[0x3];             // 15
	};
}
