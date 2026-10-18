#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class FollowerBarks_FollowerBarkType : std::int32_t
	{
		kBARK_KNOCKED_OUT = 0x0,
		kBARK_KNOCKED_BACK = 0x1,
		kBARK_CRIPPLED = 0x2,
		kBARK_DIED = 0x3,
		kBARK_MINOR_HEALTH_WARNING = 0x4,
		kBARK_MAJOR_HEALTH_WARNING = 0x5,
		kBARK_CRIPPLED_REMINDER = 0x6,
		kBARK_OUT_OF_AMMO = 0x7,
		kBARK_WEAPON_BROKE = 0x8,
		kBARK_WEAPON_INEFFECTIVE = 0x9,
		kBARK_USED_DOCTORS_BAG = 0xA,
		kBARK_CAME_TO = 0xB,
		kBARK_STEALTHING = 0xC,
		kBARK_REGENERATING = 0xD,
	};
}
