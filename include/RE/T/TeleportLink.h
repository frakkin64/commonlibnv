#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESObjectREFR;

	class TeleportLink
	{
	public:
		// members
		TESObjectREFR* pDoor;                 // 00
		NiPoint3       DoorTeleportLocation;  // 04
	};
	static_assert(sizeof(TeleportLink) == 0x10);
}
