#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;
	class WaterZone;
	class bhkRigidBody;
	class hkpCollidable;

	class QueuedRemoval
	{
	public:
		// members
		TESObjectREFR*       pTarget;      // 00
		bhkRigidBody*        pRB;          // 04
		TESObjectREFR*       pWaterRef;    // 08
		WaterZone*           pWZone;       // 0C
		const hkpCollidable* pCollidable;  // 10
	};
}
