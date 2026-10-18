#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AMMO_EFFECT_TYPE.h"
#include "RE/A/AMMO_OPERATION_TYPE.h"

namespace RE
{
	class AMMO_EFFECT_DATA
	{
	public:
		// members
		AMMO_EFFECT_TYPE    iAmmoEffectType;  // 00
		AMMO_OPERATION_TYPE iOperation;       // 04
		float               fValue;           // 08
	};
	static_assert(sizeof(AMMO_EFFECT_DATA) == 0xC);
}
