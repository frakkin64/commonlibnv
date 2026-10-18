#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiInterpController.h"

namespace RE
{
	class NiAVObject;
	class NiBlendTransformInterpolator;

	class NiMultiTargetTransformController :
		public NiInterpController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMultiTargetTransformController };
		static constexpr auto VTABLE{ VTABLE::NiMultiTargetTransformController };

		// members
		NiBlendTransformInterpolator* m_pkBlendInterps;  // 34
		NiAVObject**                  m_ppkTargets;      // 38
		std::uint16_t                 m_usNumInterps;    // 3C
		std::uint16_t                 pad3E;             // 3E
	};
}
