#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Interface_enumTargetType : std::int32_t
	{
		kENone = 0x0,
		kETake = 0x1,
		kEOpen = 0x2,
		kESit = 0x3,
		kEActivate = 0x4,
		kESleep = 0x5,
		kERead = 0x6,
		kETalk = 0x7,
		kEOpenDoor = 0x8,
		kEHorse = 0x9,
		kECrown = 0xA,
		kEVampire = 0xB,
		kEEquip = 0xC,
		kEUnequip = 0xD,
		kEDrink = 0xE,
		kEEat = 0xF,
		kERecharge = 0x10,
		kEBrew = 0x11,
		kEApply = 0x12,
		kERepair = 0x13,
		kENumTargetTypes = 0x14,
	};
}
