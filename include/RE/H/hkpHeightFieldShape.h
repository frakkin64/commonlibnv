#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpHeightFieldShape_CollideSpheresInput.h"
#include "RE/H/hkpHeightFieldShape_hkpSphereCastInput.h"
#include "RE/H/hkpShape.h"

namespace RE
{
	class hkpHeightFieldShape :
		public hkpShape  // 00
	{
	public:
		using CollideSpheresInput = hkpHeightFieldShape_CollideSpheresInput;
		using hkpSphereCastInput = hkpHeightFieldShape_hkpSphereCastInput;

	};
	static_assert(sizeof(hkpHeightFieldShape) == 0x10);
}
