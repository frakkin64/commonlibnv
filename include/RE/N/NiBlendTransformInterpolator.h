#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBlendInterpolator.h"

namespace RE
{
	class NiBlendTransformInterpolator :
		public NiBlendInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBlendTransformInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBlendTransformInterpolator };

	};
}
